#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int b; //������ �����ϴ� ����  
	
	printf("���� �ϳ��� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	
	if (a>0)
		b = a;
	else if (a<0)
		b = -a;
	else
		b = 0;
		
	printf("������ %d �Դϴ�.", b);
		 
	return 0;
}
