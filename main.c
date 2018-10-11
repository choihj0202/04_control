#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int b; //절댓값을 저장하는 변수  
	
	printf("정수 하나를 입력하시오 : ");
	scanf("%d", &a);
	
	if (a>0)
		b = a;
	else if (a<0)
		b = -a;
	else
		b = 0;
		
	printf("절댓값은 %d 입니다.", b);
		 
	return 0;
}
