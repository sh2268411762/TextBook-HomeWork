//#include "test.h"
//
//int Print1(int x);
//double Print2(void);
//double Print3(double x);
//int main()
//{
//	int num = 0;
//	printf("������һ������-->");
//	scanf("%d", &num);
//
//	int ret = Print1(num);
//	if (-1 == ret)
//	{
//		printf("����������\n");
//		printf("ERROR!!!\n");
//	}
//	else
//	{
//		printf("[%d]�Ľ׳���%d\n", num, ret);
//	}
//
//	double e = Print2();
//	printf("e��ֵ��%lf\n", e);
//
//	double x = 0;
//	printf("������x����������e��x�η���-->");
//	scanf("%lf", &x);
//	double e_x = Print3(x);
//	printf("e��x�η��ǣ�-->%lf\n", e_x);
//	return 0;
//}
//
//int Print1(int x)
//{
//	if (0 == x || 1 == x)
//	{
//		return 1;
//	}
//	else if (x < 0)
//	{
//		return -1;
//	}
//	else
//	{
//		return Print1(x - 1) * x;
//	}
//}
//
//double Print2(void)
//{
//	double i = 0;
//	double j = 1.0;
//	for (i = 1.0;i<15.0; i++)
//	{
//		j += (1.0 / (Print1(i)));
//	}
//	return j;
//}
//
//double Print3(double x)
//{
//	double i = 0;
//	double j = 1.0;
//	for (i = 1.0; i < 15.0; i++)
//	{
//		j += (pow(x, i) / Print1(i));
//	}
//	return j;
//}