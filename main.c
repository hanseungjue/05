#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num = 0;
	
	printf("문자열을 입력하시오:");//입력문자가개형문자가나올때까지반복 
	while((c=getchar())!='\n') 
	{
		if(c>='0' && c<='9')//입력된 c가숫자인 가 
		   num= num+1;
	}
	printf("숫자의 개수는 %i입니다",num);
	return 0;  
}
