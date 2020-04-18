//#include "test.h"
//
//int IsPal(int x);
//int Fun(int a);
//int main()
//{
//	int num = 0;
//	printf("请输入一个数字：-->");
//	scanf("%d", &num);
//
//	int ret = IsPal(num);
//	if (1 == ret)
//	{
//		printf("是\n");
//	}
//	else
//	{
//		printf("不是\n");
//	}
//
//	printf("输入的是%d位数\n", Fun(num));
//	return 0;
//}
//int IsPal(int  x)
//{
//	int mid = x;//原数值的拷贝
//	int las = 0;
//	while (mid)
//	{
//		las = las * 10 + mid % 10;
//		mid /= 10;
//	}
//	if (las == x)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int Fun(int a)
//{
//	int i = 0;
//	for (i = 0; a > 1; i++)
//	{
//		a = a / 10;
//	}
//	return i;
//}