/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    test_libft_unit.c                                     +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/11/18 07:25:00 by lucas                  ##+              */
/*    Updated: 2026/11/18 07:25:00 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	buf[16];

	assert(ft_strlen("hello") == 5);
	assert(ft_isdigit('7') && !ft_isdigit('a'));
	assert(ft_isalpha('Z') && !ft_isalpha('0'));
	assert(ft_atoi("  -42abc") == -42);
	assert(ft_strncmp("abc", "abd", 2) == 0);
	assert(ft_strncmp("abc", "abd", 3) < 0);
	ft_bzero(buf, sizeof(buf));
	ft_memcpy(buf, "abcdef", 6);
	ft_memmove(buf + 2, buf, 4);
	assert(memcmp(buf, "ababcd", 6) == 0);
	return (0);
}
