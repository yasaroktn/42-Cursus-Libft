#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if(!lst)
		return;
	while(lst != 0)
	{
		f(lst->content);
		lst= lst->next;
	}
}