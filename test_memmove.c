#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = "HelloWorld";
	printf("%s\n", memmove(str+2, str, 10));

	char str2[20] = "HelloWorld";
	printf("%s\n", ft_memmove(str2+2, str2, 10));

	char str3[20] = "HelloWorld";
	printf("%s\n", memcpy(str3+2, str3, 10));
}
