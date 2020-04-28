//#include "test.h"
//
//
//void exchange(double* const z,double* const y);
//int evaluate(int x, int (*poly)(int a));
//int poly(int _y);
//
//int main()
//{
//	double num1 = 12.9;
//	double num2 = 13.2;
//
//	printf("before£º\n\tnum1 = %lf\n\tnum2 = %lf\n", num1, num2);
//	exchange(&num1, &num2);
//	printf("after£º\n\tnum1 = %lf\n\tnum2 = %lf\n", num1, num2);
//
//	int num3 = 10;
//	int ret1 = evaluate(num3, poly);
//	printf("%d\n", ret1);
//	int num4 = -3;
//	int ret2 = evaluate(num4, poly);
//	printf("%d\n", ret2);
//
//
//	return 0;
//}
//
//void exchange(double* const z,double* const y)
//{
//	double temp = *z;
//	*z = *y;
//	*y = temp;
//}
//
//int evaluate(int x, int(*poly)(int a))
//{
//	if (x >= 0)
//	{
//		return x + 1;
//	}
//	else
//	{
//		return poly(x);
//	}
//	return 0;
//}
//int poly(int _y)
//{
//	return _y + 2;
//}