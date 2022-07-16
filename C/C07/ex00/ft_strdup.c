#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *str;
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		{
			len++;
		}
	str = malloc((len + 1) *sizeof(char));

	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}
