
#include <stdio.h>

int atoi(const char *str)
{
	int i = 0;
	int sign = 0;
	int num = 0;

	while ((str[i] == 9) || (str[i] == 10) || (str[i] == 11) || (str[i] == 12) || (str[i] == 13))
		i++;

	if (str[i] == '-')
		sign = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;

	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + (str[i] - '0');
		i++;
	}
	if (sign == 1) 
		return (-num);
	else 
		return (num);
}

/*
int main()
{
	int i = atoi("-234");

	printf("%d", i);
return (0);
}

*/
