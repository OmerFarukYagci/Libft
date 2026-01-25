#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/* Karakter 'a' ise '5' döndürür, değilse aynen bırakır */
char	replace_a_with_5(unsigned int i, char c)
{
	(void)i; // index parametresini kullanmıyoruz
	if (c == 'a')
		return ('5');
	return (c);
}

int	main(void)
{
	char const *str = "aaaaabbbabab";
	char	*result;

	result = ft_strmapi(str, replace_a_with_5);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}
