#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	d;

	d = c;
	while (*s)
	{
		if (*s == d)
			return ((char *)s);
		++s;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
