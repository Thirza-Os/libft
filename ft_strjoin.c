#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		a;
	int		b;

	if (s1 == 0 || s2 == 0)
		return (0);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	a = 0;
	b = 0;
	while (s1[a])
	{
		str[a] = s1[a];
		a++;
	}
	while (s2[b])
	{
		str[a] = s2[b];
		a++;
		b++;
	}
	str[a] = '\0';
	return (str);
}
