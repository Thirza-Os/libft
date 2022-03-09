#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*my_b;

	my_b = b;
	while (len > 0)
	{
		*my_b = c;
		len--;
		my_b++;
	}
	return (b);
}
