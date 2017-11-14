/*

assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
		example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
  _____________
	0100  0001
        ||
		\/
	1000  0010

*/

/*
 Using print bits function to verify the ressul
 * 
#include <unistd.h>

void print_bits(unsigned char octet)
{
	unsigned char c;

	c = 0;

	c = ((octet >> 7) & 1) + '0'; write(1, &c, 1);
	c = ((octet >> 6) & 1) + '0'; write(1, &c, 1);
	c = ((octet >> 5) & 1) + '0'; write(1, &c, 1);
	c = ((octet >> 4) & 1) + '0'; write(1, &c, 1);
	c = ((octet >> 3) & 1) + '0'; write(1, &c, 1);
	c = ((octet >> 2) & 1) + '0'; write(1, &c, 1);
	c = ((octet >> 1) & 1) + '0'; write(1, &c, 1);
	c = (octet & 1) + '0'; write(1, &c, 1);
}

*/

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char d = 0;
	unsigned char c = 0;

	c = ((octet >> 7) & 1); d = d + c;
	c = ((octet >> 5) & 2); d = d + c;
	c = ((octet >> 3) & 4); d = d + c;
	c = ((octet >> 1) & 8); d = d + c;
	c = ((octet << 1) & 16); d = d + c;
	c = ((octet << 3) & 32); d = d + c;
	c = ((octet << 5) & 64); d = d + c;
	c = ((octet << 7) & 128); d = d + c;

	return (d);
}

/*
int main()
{
	unsigned char c = 65;

	print_bits(c);
	write(1, "\n", 1);
	unsigned char d = reverse_bits(c);
	print_bits(d);
	write(1,"\n", 1);

	return (0);
}

*/


