



#include <stdio.h>

int		max(int *tab, unsigned int len)
{

	int max;
	unsigned int i = 1;

	max = tab[0];

	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

/*
int main ()
{
	int arr[6] = { 2, 34, 5, 32, 12, 3 };

	int i = max(arr, 6);
	
	printf("%d", i);
	return (0);
}
*/

