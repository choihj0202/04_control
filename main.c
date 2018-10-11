#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char ch;
	
	printf("문자를 입력하십시오 : ");
	scanf(" %c", &ch);
	
	if ((ch >= 'A') && (ch <= 'Z'))
		printf("대문자입니다.");
	else if ((ch >= 'a') && (ch <= 'z'))
		printf("소문자입니다.");
	else if ((ch >= '0') && (ch <= '9')) 
		printf("숫자입니다.");
	else
		printf("기타문자 입니다.");

	return 0;
}
