#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	printf("정수하나를 입력하시오:");
	scanf("%i",&i);
	if(i < 0)
	{
		i=-i;
		printf("절대값은%i입니다",i);
	}
	else
	{
		printf("절대값은%i입니다",i);
	}
	return 0;  
}
