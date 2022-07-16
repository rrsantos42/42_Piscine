#include <unistd.h>

int	ft_sqrt(int nb)
{
	long int x;

	x = 1;
	if (nb <= 0)
		return(0);
	while(x * x < nb)
		x++;
	if(x * x == nb)
		return(x);
	return(0);
}