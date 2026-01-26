#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
 * ft_lstdelone'a parametre olarak verilecek silme fonksiyonu.
 * İçeriği (content) free eder ve çalıştığını göstermek için ekrana yazar.
 */
void	del_content(void *content)
{
	printf("del_content çağrıldı: '%s' içeriği siliniyor (free).\n", (char *)content);
	free(content); // free'lenen adres, ft_strdup ile oluşturulan verinin (içeriğin) adresidir.       FREE ÖNCE 
}

/*node -> content content'in adresi değildir content pointer'ının içinde saklı olan değerdir.*/

/*&content'i (yani content değişkeninin bellekteki adresini) free'lemiyorsunuz. 
content pointer'ının işaret ettiği bellek alanını (yani verinin kendisini) free'liyorsunuz.*/

int	main(void)
{
	t_list	*node;
	char	*str;

	printf("--- ft_lstdelone Testi ---\n");

	/* 1. Test için dinamik bellek ayıran ft_strdup kullanıyoruz */
	str = ft_strdup("Test Verisi");
	if (!str)
	{
		printf("Bellek hatası (ft_strdup)\n");
		return (1);
	}

	/* 2. Yeni bir düğüm oluşturuyoruz */
	/*ft_lstdelone fonksiyonunun en sonunda yer alan free(lst); satırı, ft_lstnew(str) 
	fonksiyonunun oluşturup return ettiği t_list yapısının (düğümün) adresini free'ler.*/
	node = ft_lstnew(str);  //                                                                       FREE SONRA
	if (!node)
	{
		printf("Bellek hatası (ft_lstnew)\n");
		free(str);
		return (1);
	}

	printf("Düğüm oluşturuldu. İçerik: %s\n", (char *)node->content);

	/* 3. ft_lstdelone fonksiyonunu çağırıyoruz */
	ft_lstdelone(node, del_content);

	printf("Düğüm ve içeriği başarıyla silindi.\n");
	return (0);
}