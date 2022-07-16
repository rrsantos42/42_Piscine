#include <unistd.h>

int	ft_is_prime(int nb)
{
	long int x;

	if (nb <= 1)
		return(0);
	if (nb <= 3)
		return(1);
	if(!(nb % 2 && nb % 3 ))
		return(0);
	x = 5;
	while (x * x <= nb)
	{
		if (!(nb % x && nb % (x + 2)))
			return(0);
		x += 6;
	}
	return(1);

}
