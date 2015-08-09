#include<stdio.h>

int main(void)
{
	unsigned char value_char = 0;
	unsigned short value_short = 0;
	unsigned int value_int = 0;
	unsigned long value_long = 0;

	value_char = 0xff;
	value_short = 0xffff;
	value_int = 0xffffffff;
	value_long = 0xffffffff;

	printf("value_char=%u\n",value_char);
	printf("value_short=%u\n",value_short);
	printf("value_intr=%u\n",value_int);
	printf("value_long=%u\n",value_long);

	return 0;
}
