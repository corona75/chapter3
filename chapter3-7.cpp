#include<stdio.h>

int main(void)
{
	double value_double = 1.2;
	int value_int = 0;
	short value_short = 0;

	value_int = value_double;
	printf("실수 %f가 정수 %d로 형변환되었습니다.\n",value_double,value_int);

	value_int = 32769;
	value_short = value_int;
	printf("int 정수 %d가 short 정수 %d로 형변환되었습니다.\n",value_int,value_short);
	return 0;


}