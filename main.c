#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum=0;
	int x;
	int i;
	
	printf("정수를 입력하시오:");
	scanf("%d",&x);
	
	for(i=0;i<x+1;i++)
	    sum=sum+i; 
	printf("더하기의 결과는 %i입니다",sum);
	return 0;  
}
