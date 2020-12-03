#include <stdio.h>

int main(void)
{
	char a[100];
	int num=0;
	printf("학번과 영어 이름을 입력하시오.(123jay) : ");
	scanf_s("%s", a, sizeof(a));
	printf("학번 : ");
	for (int i = 0; a[i] != NULL; i++)
	    {
			if (isdigit(a[i]) != 0)
			{
				printf("%c", a[i]);
				num++;
			}
	     }
	printf("\n");

	printf("영어 이름 : ");
	for (int i = num; a[i] != NULL; i++)
	{
		printf("%c", a[i]);
	}
	
	return; // 0을 생략해도 된다.

}