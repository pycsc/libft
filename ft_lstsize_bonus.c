/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    ft_lstsize_bonus.c                                    +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/23 20:00:00 by lucas                  ##+              */
/*    Updated: 2026/04/23 20:00:00 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
