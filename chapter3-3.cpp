#include<stdio.h>

int main(void)
{
	char value_char = 0;
	short value_short = 0;
	int value_int = 0;
	long value_long = 0;

	printf("sizeof(value_char)=%d\n",sizeof(value_char));
	printf("sizeof(value_short)=%d\n",sizeof(value_short));
	printf("sizeof(value_int)=%d\n",sizeof(value_int));
	printf("sizeof(value_long)=%d\n",sizeof(value_long));

	value_char = 0x7f;
	value_short = 0x7fff;
	value_int = 0x7fffffff;
	value_long = 0x7fffffff;

	printf("value_char=%d\n",value_char);
	printf("value_short=%d\n",value_short);
	printf("value_int=%d\n",value_int);
	printf("value_long=%d\n",value_long);
	
	return 0;
}
	