#include<stdio.h>
int main(void)
{
	int result = 0;
	int width = 0, height = 0;

	width = 2;
	height = 3;
	result = width*height;
	printf("곱하기 연산 결과\n");
	printf("%d * %d = %d\n",width,height,result);

	return 0;
}