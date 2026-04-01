/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    ft_strjoin.c                                          +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/01 02:41:15 by lucas                  ##+              */
/*    Updated: 2026/04/01 02:41:15 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined = (char *)malloc(len1 + len2 + 1);
	if (!joined)
		return (NULL);
	ft_memcpy(joined, s1, len1);
	ft_memcpy(joined + len1, s2, len2);
	joined[len1 + len2] = '\0';
	return (joined);
}
