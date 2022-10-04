#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=59;
	int x;
	int a=0;
	
	do
	{
		printf("숫자를 입력하시오:");
		scanf("%d",&x);
		if(x<answer)
		    printf("lower\n");
		else if(x>answer)
		    printf("higher\n");
		a++;
	}
	while(x!=answer);
	printf("축하!\n");
	printf("시도횟수:%d",a);
    return 0;  
}
