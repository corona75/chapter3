#include<stdio.h>

int main(void)
{
	double value_double = 1.2;
	int value_int = 0;
	short value_short = 0;

	value_int = value_double;
	printf("�Ǽ� %f�� ���� %d�� ����ȯ�Ǿ����ϴ�.\n",value_double,value_int);

	value_int = 32769;
	value_short = value_int;
	printf("int ���� %d�� short ���� %d�� ����ȯ�Ǿ����ϴ�.\n",value_int,value_short);
	return 0;


}