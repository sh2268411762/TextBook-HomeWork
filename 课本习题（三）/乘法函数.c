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
//	printf("������������������-->");
//	int x;
//	int y;
//	scanf("%d%d", &x, &y);
//
//	printf("����� %d\n", mystery(x, y));
//	return 0;
//}