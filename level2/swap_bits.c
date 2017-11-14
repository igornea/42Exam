/*
Assignment name  : swap_bits
Expected files   : swap_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);

Example:

  1 byte
  _____________
0100 | 0001
    \ /
	/ \
0001 | 0100
*/

/* 
 *
 * Using this function for... printing up the ressult ... 
#include <unistd.h>

void print_bits(unsigned char octet)
{
	unsigned char c = 0;

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

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char c = 0;
	unsigned char d = 0;

	c = ((octet >> 4) & 1); d += c;
	c = ((octet >> 4) & 2); d += c;
	c = ((octet >> 4) & 4); d += c;
	c = ((octet >> 4) & 8); d += c;
	c = ((octet << 4) & 16); d += c;
	c = ((octet << 4) & 32); d += c;
	c = ((octet << 4) & 64); d += c;
	c = ((octet << 4) & 128); d += c;

	return (d);
}

/*
int main()
{
	unsigned char c = 65;
	print_bits(c);
	write(1,"\n", 1);
	unsigned char d = swap_bits(c);
	print_bits(d);
	write(1, "\n", 1 );
	return (0);
}
*/
