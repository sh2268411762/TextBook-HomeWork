//#include "test.h"
//
//int power(int x, int y)
//{
//	if (1 == x)
//	{
//		return 1;
//	}
//	if (0 == y)
//	{
//		return 1;
//	}
//	return x * power(x, y - 1);
//}
//int main()
//{
//	int b = 0;
//	int e = 0;
//	printf("请输入两个操作数：-->");
//	scanf("%d%d", &b, &e);
//
//	int ret = power(b, e);
//	printf("%d的%d次方是%d\n",b,e, ret);
//	return 0;
//}