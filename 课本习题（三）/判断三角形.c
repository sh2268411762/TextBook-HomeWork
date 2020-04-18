//#include "test.h"
//
//int main()
//{
//	int a, b, c;
//	printf("请输入三个非零整数：-->");
//	scanf("%d%d%d", &a, &b, &c);
//
//	int Max = 0;
//	if (a > b && a > c)		
//	{
//		Max = a;
//		if (b + c > Max)
//		{
//			printf("是三角形");
//			if (Max * Max == b * b + c * c)
//			{
//				printf("且是直角三角形\n");
//			}
//		}
//		else
//		{
//			printf("不是三角形\n");
//		}
//	}
//	else if (b > a && b > c)
//	{
//		Max = b;
//		if (a + c > Max)
//		{
//			printf("是三角形");
//			if (Max * Max == a * a + c * c)
//			{
//				printf("且是直角三角形\n");
//			}
//		}
//		else
//		{
//			printf("不是三角形\n");
//		}
//	}
//	else if(c > a && c > b)
//	{
//		Max = c;
//		if (b + a > Max)
//		{
//			printf("是三角形");
//			if (Max * Max == b * b + a * a)
//			{
//				printf("且是直角三角形\n");
//			}
//		}
//		else
//		{
//			printf("不是三角形\n");
//		}
//	}
//	return 0;
//}