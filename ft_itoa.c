#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	num;

	num = n;
	i = (ft_intlen(num));
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	if (num == 0)
		str[0] = '0';
	while (num)
	{
		str[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	return (str);
}
