#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//动态内存分配函数
int main()
{
	//向内存申请10个整形的空间
	int* p = malloc(10 * sizeof(int));
	//int* p = (int*)malloc(INT_MAX);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
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
	//当申请的空间不再使用的时候
	//就应该还给操作系统
	free(p);
	p = NULL;

	return 0;
}