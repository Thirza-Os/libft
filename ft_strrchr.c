#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	int				i;
	unsigned char	d;

	d = c;
	i = ft_strlen(s);
	str = (char *)s;
	while (i >= 0)
	{
		if (s[i] == d)
			return (str + i);
		--i;
	}
	return (0);
}
