#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	del(void *content)
{
	free(content);
}

void	*f(void *content)
{
	char	*str;
	int		i;

	str = ft_strdup((char *)content);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*temp;
	t_list	*mapped_list;

	t_list	*new_node;

	head = NULL;

	/* Düğümleri oluşturuyoruz */
	node1 = ft_lstnew("Dunya");
	node2 = ft_lstnew("Merhaba");
	node3 = ft_lstnew("42");
	new_node = ft_lstnew("Yeni");

	/* Listeye ekliyoruz (Her seferinde başa eklenir) */
	ft_lstadd_front(&head, node1); // Liste: Dunya -> NULL
	ft_lstadd_front(&head, node2); // Liste: Merhaba -> Dunya -> NULL
	ft_lstadd_front(&head, node3); // Liste: 42 -> Merhaba -> Dunya -> NULL

	ft_lstadd_front(&head, new_node);

	/* Sonucu yazdırma */
	printf("Liste boyutu: %d\n", ft_lstsize(head));
	temp = head;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}

	mapped_list = ft_lstmap(head, f, del);
	printf("\n--- ft_lstmap Sonrasi (Buyuk Harf) ---\n");
	temp = mapped_list;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&mapped_list, del);
	return (0);
}

/*

Liste boyutu: 4
Yeni
42
Merhaba
Dunya

*/