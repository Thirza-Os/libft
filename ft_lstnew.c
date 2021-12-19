#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst_new;

	lst_new = (t_list *)malloc(sizeof(t_list));
	if (lst_new == 0)
		return (NULL);
	lst_new->content = content;
	lst_new->next = NULL;
	return (lst_new);
}
