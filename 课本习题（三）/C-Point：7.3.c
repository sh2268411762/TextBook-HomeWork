//#include "test.h"
//#define SIZE 10//��ͷ�ļ����Ѷ���
//
//int main()
//{
//	float num[SIZE] = { 1.2,2.3,3.4,4.5,5.6,6.7,7.8,8.9,9.1,10.2 };
//	float* nPtr = NULL;
//	
//	for (size_t i = 0; i < SIZE; i++)
//	{
//		printf("num[%u] = %.1f\n", i, num[i]);
//	}
//
//	nPtr = &num;
//	printf("0x%p\n", nPtr);
//	nPtr = &num[0];
//	printf("0x%p\n", nPtr);
//
//	puts("");
//	for (size_t i = 0; i < SIZE; i++)
//	{
//		printf("*(nPtr + %u) = %.1f\n", i, *(nPtr + i));
//	}
//
//	puts("");
//	for (size_t i = 0; i < SIZE; i++)
//	{
//		printf("*(num + %u) = %.1f\n", i, *(num + i));
//	}
//
//	puts("");
//	for (size_t i = 0; i < SIZE; i++)
//	{
//		printf("nPtr[%u] = %.1f\n", i, nPtr[i]);
//	}
//
//	puts("");
//	printf("�����±���ʷ���num[4] = %.1f\n", num[4]);
//	printf("������Ϊָ���ָ��/ƫ������ʾ����*(num + 4) = %.1f\n", *(num + 4));
//	printf("ָ���±��ʾ����nPtr[4] = %.1f\n", nPtr[4]);
//	printf("����ָ��-->ָ��/ƫ������ʾ����*(nPtr + 4) = %.1f\n", *(nPtr + 4));
//	puts("");
//
//	for (size_t i = 0; i < SIZE; i++)
//	{
//		printf("(nPtr + %u)�ĵ�ַ��0x%p\n", i, (nPtr + i));
//	}
//
//	printf("0x%p\n", nPtr + 8);
//	nPtr = &num[5];
//	printf("0x%p\n", nPtr -= 4);
//	return 0;
//}