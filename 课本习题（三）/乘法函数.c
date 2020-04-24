//#include "test.h"
//
//int mystery(int a, int b)
//{
//	if (1 == b)
//	{
//		return a;
//	}
//	else if (-1 == b)
//	{
//		return -a;
//	}
//	else if (b > 0)
//	{
//		return a + mystery(a, b - 1);
//	}
//	else if (b < 0)
//	{
//		return -a + mystery(a, b + 1);
//	}
//}
//int main()
//{
//	printf("请输入两个操作数：-->");
//	int x;
//	int y;
//	scanf("%d%d", &x, &y);
//
//	printf("结果是 %d\n", mystery(x, y));
//	return 0;
//}