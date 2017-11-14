
/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char *dup;											//The strdup() function allocates sufficient memory for a copy of
	int i = 0;											//the string s1, does the copy, and returns a pointer
														//to it.  The pointer may subsequently be used as an argument
	while (src[i])										//to the function free(3).
		i++;														     
	if ((dup = malloc(sizeof(char) * i + 1)) == NULL)
			return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);

}
/*
int main()
{
	char *c;

	c = ft_strdup("helo World");
	printf("%s\n", c);
	return (0);
}
*/




