//#include "test.h"
//
//
//int Fib(unsigned int x)
//{
//	if (1 == x || 2 == x)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(x - 1) + Fib(x - 2);
//	}
//}
//
//int fib(int x)
//{
//	//迭代,效率高：-->没有调用函数，思路较难懂
//	int first = 1;
//	int second = 1;
//	int third = 1;
//
//	while ( x > 2 )
//	{
//		third = first + second;
//		first = second;
//		second = third;
//		x--;
//	}
//	return third;
//
//}
//int main()
//{
//	int n = 0;
//	printf("请输入所求斐波那契数列的位数：-->");
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//	printf("第%d为斐波那契数列是%d\n",n, ret);
//	int ret1 = fib(n);
//	printf("第%d为斐波那契数列是%d\n", n, ret1);
//	return 0;
//}