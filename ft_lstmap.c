#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*make_list;
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return (NULL);
	make_list = ft_lstnew(f(lst->content));
	if (make_list == NULL)
		return (NULL);
	temp = make_list;
	lst = lst->next;
	while (lst)
	{
		make_list->next = ft_lstnew(f(lst->content));
		if (make_list->next == NULL)
		{
			ft_lstclear(&temp, del);
			break ;
		}
		lst = lst->next;
		make_list = make_list->next;
	}
	return (temp);
}
