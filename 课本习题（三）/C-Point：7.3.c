//#include "test.h"
//#define SIZE 10//在头文件中已定义
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
//	printf("数组下标访问法：num[4] = %.1f\n", num[4]);
//	printf("数组名为指针的指针/偏移量表示法：*(num + 4) = %.1f\n", *(num + 4));
//	printf("指针下标表示法：nPtr[4] = %.1f\n", nPtr[4]);
//	printf("基于指针-->指针/偏移量表示法：*(nPtr + 4) = %.1f\n", *(nPtr + 4));
//	puts("");
//
//	for (size_t i = 0; i < SIZE; i++)
//	{
//		printf("(nPtr + %u)的地址：0x%p\n", i, (nPtr + i));
//	}
//
//	printf("0x%p\n", nPtr + 8);
//	nPtr = &num[5];
//	printf("0x%p\n", nPtr -= 4);
//	return 0;
//}