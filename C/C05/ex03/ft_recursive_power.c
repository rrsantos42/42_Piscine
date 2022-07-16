#include <unistd.h>

int ft_recursive_power(int nb, int power)
{	if(power < 0)
		return(0);
	if (power - 1 == 0)
	{
		return (nb);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
