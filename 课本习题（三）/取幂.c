//#include "test.h"
//
//int Power(int x, int y);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("���������-->");
//	scanf("%d", &a);
//	printf("����ָ����-->");
//	scanf("%d", &b);
//	int ret = Power(a, b);
//	if (0 == ret)
//	{
//		printf("��������\n");
//	}
//	else
//	{
//		printf("%d��%d������%d\n", a, b, ret);
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