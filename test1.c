#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//��̬�ڴ���亯��
int main()
{
	//���ڴ�����10�����εĿռ�
	int* p = malloc(10 * sizeof(int));
	//int* p = (int*)malloc(INT_MAX);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//������Ŀռ䲻��ʹ�õ�ʱ��
	//��Ӧ�û�������ϵͳ
	free(p);
	p = NULL;

	return 0;
}