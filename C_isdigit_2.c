#include <stdio.h>

int main(void)
{
	char a[100];
	int num=0;
	printf("�й��� ���� �̸��� �Է��Ͻÿ�.(123jay) : ");
	scanf_s("%s", a, sizeof(a));
	printf("�й� : ");
	for (int i = 0; a[i] != NULL; i++)
	    {
			if (isdigit(a[i]) != 0)
			{
				printf("%c", a[i]);
				num++;
			}
	     }
	printf("\n");

	printf("���� �̸� : ");
	for (int i = num; a[i] != NULL; i++)
	{
		printf("%c", a[i]);
	}
	
	return; // 0�� �����ص� �ȴ�.

}