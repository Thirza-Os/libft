#include "libft.h"
//ft_memmove depends on memcpy
void	*ft_memcpy(void *dst, const void *src, size_t n)

{
	char		*own_dst;
	const char	*own_src;
	int			a;

	a = 0;
	own_dst = dst;
	own_src = src;
	if (dst == src)
		return (dst);
	while (n > 0)
	{
		own_dst[a] = own_src[a];
		n--;
		a++;
	}
	return (dst);
}
