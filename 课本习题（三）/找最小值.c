//#include "test.h"
//
//double Fun(double* a, double* b, double* c)
//{
//	if (*a < *b && *a < *c)
//	{
//		return *a;
//	}
//	else if (*b < *a && *b < *c)
//	{
//		return *b;
//	}
//	else if (*c < *b && *c < *a)
//	{
//		return *c;
//	}
//	else
//	{
//		return *a;
//	}
//}
//int main()
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	printf("������3��������\n");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	double ret = Fun(&a, &b, &c);
//	printf("��С����%lf\n", ret);
//	return 0;
//}