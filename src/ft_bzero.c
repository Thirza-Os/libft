#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*my_s;

	my_s = s;
	while (n > 0)
	{
		*my_s = '\0';
		n--;
		my_s++;
	}
}
