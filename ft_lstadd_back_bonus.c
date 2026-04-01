/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    ft_lstadd_back_bonus.c                                +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/01 02:41:18 by lucas                  ##+              */
/*    Updated: 2026/04/01 02:41:18 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
