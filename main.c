#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	char i;
	int re;
	
	printf("enter the calculation:");
	scanf("%d%c%d",&a,&i,&b);
	
	if(i=='+')
	   re=a+b;
	else if(i=='-')
	   re=a-b;
	else if(i=='*')
	   re=a*b;
	else
	   re=a/b;
	
	printf("=%i",re);
    return 0;  
}
