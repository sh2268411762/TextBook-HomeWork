//#include "test.h"
//
//int main()
//{
//	int a, b, c;
//	printf("��������������������-->");
//	scanf("%d%d%d", &a, &b, &c);
//
//	int Max = 0;
//	if (a > b && a > c)		
//	{
//		Max = a;
//		if (b + c > Max)
//		{
//			printf("��������");
//			if (Max * Max == b * b + c * c)
//			{
//				printf("����ֱ��������\n");
//			}
//		}
//		else
//		{
//			printf("����������\n");
//		}
//	}
//	else if (b > a && b > c)
//	{
//		Max = b;
//		if (a + c > Max)
//		{
//			printf("��������");
//			if (Max * Max == a * a + c * c)
//			{
//				printf("����ֱ��������\n");
//			}
//		}
//		else
//		{
//			printf("����������\n");
//		}
//	}
//	else if(c > a && c > b)
//	{
//		Max = c;
//		if (b + a > Max)
//		{
//			printf("��������");
//			if (Max * Max == b * b + a * a)
//			{
//				printf("����ֱ��������\n");
//			}
//		}
//		else
//		{
//			printf("����������\n");
//		}
//	}
//	return 0;
//}