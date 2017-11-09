#include <unistd.h>

void wr(char c)
{
	write(1, &c, 1);
}

void inter(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	char c;

	while (str1[i])
	{
		c = str1[i];
		j = i + 1;
		while (str1[j])
		{
			if (str1[j] == c)
			{
				str1[j] = 1;
			}
			j++;
		}
		i++;
	}

	i = 0;
	j = 0;

	while (str1[j])
	{
		if (str1[j] == 1)
			j++;
		
		while ((str1[j] != 1) && (str1[j] == str2[i])
				&& (str2[i]))
		{
			wr(str1[j]);
			j++;
			i = 0;

		}
		i++;
	}
}	



int main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
		wr('\n');
	}
	else
		wr('\n');
	return (0);
}
