#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 73;
	int a, i = 1;
	
	do {
		printf("Guess a number : ");
		scanf("%d", &a);
		
		if (a < answer)
		{
			printf("low!\n");
			i++;
		}
		else if (a > answer)
		{
			printf("high!\n");
			i++;
		}
		else
			printf("Congratulation! trial : %d", i);
	} while (a != answer);
	
	
	
	return 0;
}
