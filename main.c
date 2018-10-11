#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num = 0; 	// 개수 0으로 초기화 
	char str[100];
	char c;
	
	printf("Input a string : ");
	
	while ((c = getchar()) != '\n')		// getchar() 는 scanf()를 쓰지 않음  
	{
		if ((c >= '0') && (c <= '9'))
		{
			num ++;
		}
	}
	
	printf("The number of digit is %d", num);
		 
	return 0;
}
