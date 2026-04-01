/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    ft_lstlast_bonus.c                                    +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/01 02:41:18 by lucas                  ##+              */
/*    Updated: 2026/04/01 02:41:18 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
