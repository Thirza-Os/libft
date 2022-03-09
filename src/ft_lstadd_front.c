#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*new_head;

	new_head = new;
	new_head->next = *lst;
	*lst = new_head;
}
