//#include "test.h"
//
//int gcd(int x, int y)
//{
//	if (0 == y)
//	{
//		return x;
//	}
//	else
//	{
//		return gcd(y, x % y);
//	}
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：-->");
//	scanf("%d%d", &x, &y);
//
//	int ret = gcd(x, y);
//	printf("%d和%d的最大公约数是：-->%d\n", x, y, ret);
//	return 0;
//}