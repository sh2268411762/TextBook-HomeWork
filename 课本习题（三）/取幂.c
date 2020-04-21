//#include "test.h"
//
//int Power(int x, int y);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("输入底数：-->");
//	scanf("%d", &a);
//	printf("输入指数：-->");
//	scanf("%d", &b);
//	int ret = Power(a, b);
//	if (0 == ret)
//	{
//		printf("输入有误\n");
//	}
//	else
//	{
//		printf("%d的%d次幂是%d\n", a, b, ret);
//	}
//	return 0;
//}
//
//int Power(int x, int y)
//{
//	int ret = 1;
//	if (0 == y || y < 0)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 1; i <= y; i++)
//		{
//			if (i != 1)
//			{
//				ret = x * ret;
//			}
//			else
//			{
//				ret = x;
//			}
//		}
//	}
//	return ret;
//}