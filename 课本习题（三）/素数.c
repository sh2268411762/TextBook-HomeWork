//#include "test.h"
//
//int isPrime(const int x)
//{
//	int i = 1;
//	if (1 == x)
//	{
//		return 0;
//	}
//	for (i = 2; i <= x/2 ; i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	//for (i = 2; i <= sqrt(x); i++)
//	//{
//	//	if (x % i == 0)
//	//	{
//	//		return 0;
//	//	}
//	//}
//	return x;
//}
//int main()
//{
//	int num = 0;
//	printf("�������������-->");
//	scanf("%d", &num);
//
//	int s = GetTickCount();
//	int ret = isPrime(num);
//	if (ret == num)
//	{
//		printf("%d��һ������\n",num);
//	}
//	else
//	{
//		printf("%d����һ������\n",num);
//	}
//	puts("");
//	for (num = 1; num <= 10000; num++)
//	{
//		ret = isPrime(num);
//		if (ret == num)
//		{
//			printf("%d ", num);
//		}
//	}
//	int e = GetTickCount();
//	printf("\n\n%d\n\n", e - s);
//	return 0;
//}