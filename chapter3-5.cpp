#include<Stdio.h>

int main(void)
{
	int value_int = 0;
	value_int = 59;
	printf("value_int = %d,%o,%x,%x\n",value_int,value_int,value_int,value_int);

	value_int = 0x3a;
	printf("value_int = %d,%o,%x,%x\n",value_int,value_int,value_int,value_int);

	value_int = 071;
	printf("value_int = %d,%o,%x,%x\n",value_int,value_int,value_int,value_int);

	return 0;
}