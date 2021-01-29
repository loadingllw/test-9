#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

指针的大小在32位平台上是4个字节，64位平台上是8个字节
int main()
{
	int a = 0x11223344;
	int * pa = &a;//调试，查看内存	
	//如果p是整形指针，解引用访问了4个字节
	//如果p是字符指针，解引用访问了1个字节
	//指针类型的第一个作用：决定了指针能够访问几个字节
	//int *  4
	//char*  1
	//double8  8
	*pa = 0;
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int *pa = arr;
	char*pb = arr;
	//printf("%p\n", arr);
	printf("%p\n", pa);
	printf("%p\n", pa+1);
	printf("%p\n", pb);
	printf("%p\n", pb+1);
	//指针类型决定了  指针+/-1走多大的距离
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	//我希望把这10个整形的空间看成是40个字节的空间
	//给每个字节放一个字符进去
	char*pc = arr;
	int i = 0;
	for (i = 0; i < 40; i++)
	{
		*(pc + i) = 'g';
	}
	//int *p = arr;
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//	printf("%d ", *(p + i));
	//}
	return 0;
}


野指针的基本了解
int main()
{
	int* pa;//没有任何的初始值，未初始化
	*pa = 20;//
	printf("%p\n", pa);
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int* pa = arr;
	int i = 0;
	for (i = 0; i < 11; i++)
		//越界访问，可能会导致野指针的出现（编译器可能不会报错，但是要查看内存，以防止错误）
	{
		*(pa + 1) = i;
	}
	return 0;
}