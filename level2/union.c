/*
assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/

#include <unistd.h>

void wr(char c)
{
	write(1, &c, 1);
}

void uni(char *str1, char *str2)
{
	int i = 0;
	int j = 0;

	char c;

	while (str1[i])
	{
		j = i + 1;
		c = str1[i];
		while (str1[j])
		{
			if ( str1[j] == c)
			{
				str1[j] = 1;
			}
			j++;
		}
		j = 0;
		i++;
	}

	i = 0;
	j = 0;
	while (str2[i])
	{	
		j = i + 1;
		c = str2[i];
		while (str2[j])
		{
			if ( str2[j] == c)
			{
				str2[j] = 1;
			}
			j++;
		}
		j = 0;
		i++;
	}

	i = 0;
	j = 0;
	while (str1[i])
	{
		if (str1[i] != 1)
			wr(str1[i]);
		i++;
	}
	
	j = 0;
	i = 0;
	while (str1[i])
	{
		c = str1[i];
		while (str2[j])
		{
			if (str2[j] == c)
				str2[j] = 1;
			j++;
		}
		j = 0;
		i++;
	}

	i = 0;
	while (str2[i])
	{
		if (str2[i] != 1)
			wr(str2[i]);
		i++;
	}
		
} 

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		uni(argv[1], argv[2]);
		wr('\n');
	}
	wr('\n');
}



