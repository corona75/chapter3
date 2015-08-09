#include<stdio.h>

int main(void)
{
	int value_int1 = 5, value_int2 = 2;
	int result_int = value_int1/value_int2;
	double result_double = (double) value_int1/value_int2;

	printf("%d / %d = %d\n",value_int1,value_int2,result_int);
	printf("%d / %d = %d\n",value_int1,value_int2,result_double);

	return 0;
}