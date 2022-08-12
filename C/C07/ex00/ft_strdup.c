#include <unistd.h>
#include <stdlib.h>

char    *ft_strdup(const char *src)
{
    int  i;
    int  j;
    char *dup;

    j = 0;
    i = 0;
    while(src[j])
        j++;
    dup = malloc((j + 1) *sizeof (char));
    if(!dup)
        return(NULL);
    while(src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
