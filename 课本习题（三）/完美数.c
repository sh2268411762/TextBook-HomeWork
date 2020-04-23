//#include "test.h"
//
//void isPerfect(int x)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < x; i++)
//	{
//		if (0 == x % i)
//		{
//			count += i;
//		}
//	}
//	if (count == x)
//	{
//		printf("%d是一个完美数\n", x);
//	}
//	else
//	{
//		printf("%d不是一个完美数\n", x);
//	}
//
//	puts("");
//
//	for (i = 1; i <= 10000; i++)
//	{
//		count = 0;
//		int j = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (0 == i % j)
//			{
//				count += j;
//			}
//		}
//		if (count == i)
//		{
//			int k = 0;
//			printf("完美数：%d  ,因子是：", i);
//			for (k = 1; k < i; k++)
//			{
//				if (i % k == 0)
//				{
//					printf("%d ", k);
//				}
//			}
//			puts("");
//		}
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个操作数：-->");
//	scanf("%d", &num);
//
//	isPerfect(num);
//	return 0;
//}