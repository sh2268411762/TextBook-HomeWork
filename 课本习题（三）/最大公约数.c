//#include "test.h"
//
//
//int gcd(int x, int y)
//{
//	if (x < y)
//	{
//		int temp = x;
//		x = y;
//		y = temp;
//	}
//	int i = 0;
//	int count = 0;
//	for (i = y; i > 1; i--)
//	{
//		if (0 == x % i && 0 == y % i)
//		{
//			count = i;
//			break;
//		}
//	}
//	if (count != 0)
//	{
//		return count;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("������������������-->");
//	scanf("%d%d", &num1, &num2);
//
//	int ret = gcd(num1, num2);
//	if (0 == ret)
//	{
//		printf("%d��%d����\n", num1, num2);
//	}
//	else
//	{
//		printf("���Լ����%d\n", ret);
//	}
//	return 0;
//}