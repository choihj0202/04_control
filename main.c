#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char ch;
	
	printf("���ڸ� �Է��Ͻʽÿ� : ");
	scanf(" %c", &ch);
	
	if ((ch >= 'A') && (ch <= 'Z'))
		printf("�빮���Դϴ�.");
	else if ((ch >= 'a') && (ch <= 'z'))
		printf("�ҹ����Դϴ�.");
	else if ((ch >= '0') && (ch <= '9')) 
		printf("�����Դϴ�.");
	else
		printf("��Ÿ���� �Դϴ�.");

	return 0;
}
