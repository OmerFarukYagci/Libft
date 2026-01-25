#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*temp;

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

	return (0);
}

/*

Liste boyutu: 4
Yeni
42
Merhaba
Dunya

*/