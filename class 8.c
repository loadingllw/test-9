#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

ָ��Ĵ�С��32λƽ̨����4���ֽڣ�64λƽ̨����8���ֽ�
int main()
{
	int a = 0x11223344;
	int * pa = &a;//���ԣ��鿴�ڴ�	
	//���p������ָ�룬�����÷�����4���ֽ�
	//���p���ַ�ָ�룬�����÷�����1���ֽ�
	//ָ�����͵ĵ�һ�����ã�������ָ���ܹ����ʼ����ֽ�
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
	//ָ�����;�����  ָ��+/-1�߶��ľ���
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	//��ϣ������10�����εĿռ俴����40���ֽڵĿռ�
	//��ÿ���ֽڷ�һ���ַ���ȥ
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


Ұָ��Ļ����˽�
int main()
{
	int* pa;//û���κεĳ�ʼֵ��δ��ʼ��
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
		//Խ����ʣ����ܻᵼ��Ұָ��ĳ��֣����������ܲ��ᱨ������Ҫ�鿴�ڴ棬�Է�ֹ����
	{
		*(pa + 1) = i;
	}
	return 0;
}