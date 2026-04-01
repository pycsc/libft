/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    ft_lstiter_bonus.c                                    +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/01 02:41:18 by lucas                  ##+              */
/*    Updated: 2026/04/01 02:41:18 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
