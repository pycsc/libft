/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    ft_putendl_fd.c                                       +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/01 02:41:16 by lucas                  ##+              */
/*    Updated: 2026/04/01 02:41:16 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
