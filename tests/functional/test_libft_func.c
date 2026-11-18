/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    test_libft_func.c                                     +##               */
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

static void	del_str(void *p)
{
	free(p);
}

int	main(void)
{
	char	**parts;
	char	*joined;
	char	*num;
	t_list	*lst;

	parts = ft_split("one,two,three", ',');
	assert(parts && strcmp(parts[0], "one") == 0 && strcmp(parts[2], "three") == 0);
	assert(parts[3] == NULL);
	joined = ft_strjoin("born", "2code");
	assert(strcmp(joined, "born2code") == 0);
	num = ft_itoa(-2147483648);
	assert(strcmp(num, "-2147483648") == 0);
	lst = ft_lstnew(ft_strdup("head"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("tail")));
	assert(ft_lstsize(lst) == 2);
	ft_lstclear(&lst, del_str);
	free(joined);
	free(num);
	free(parts[0]);
	free(parts[1]);
	free(parts[2]);
	free(parts);
	return (0);
}
