#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	nr;
	void	*pntr;

	nr = count * size;
	pntr = (void *)malloc(nr);
	if (pntr == NULL)
		return (NULL);
	ft_bzero(pntr, nr);
	return (pntr);
}
