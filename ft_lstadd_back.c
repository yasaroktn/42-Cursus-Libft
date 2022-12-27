#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	if (lst[0] == NULL)
		*lst = new;
	else
	{
		ft_lstlast(*lst)->next = new;
		ft_lstlast(*lst)->next = NULL;
	}
}