#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*own_dst;
	const char	*own_src;
	int			a;

	a = 0;
	own_dst = dst;
	own_src = src;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len > 0)
		{
			own_dst[len - 1] = own_src[len - 1];
			len--;
		}
	}
	else
	{
		ft_memcpy(own_dst, own_src, len);
	}
	return (dst);
}
