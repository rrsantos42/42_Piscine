#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min,int max)
{
	int *range;
	int i;
	i = 0;
	if (max <= min)
		return(NULL);
	range = (int*)malloc((max - min)  *sizeof(int));
	if(!range)
		return(NULL);
	while(i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return(range);
}
