//#include "test.h"
////
////
////int main()
////{
////	int i = 0;
////	double arr[SIZE] = { 0 };
////	int n;
////	printf("������Ҫ��������ݸ��������س���������-->");
////	scanf("%d", &n);
////
////	printf("������Ҫ��������ݣ�-->");
////	for (i = 0; i < n; i++)
////	{
////		scanf("%lf", &arr[i]);
////	}
////
////	for (i = 0; i < n; i++)
////	{
////		printf("%lf\t%d\n", arr[i], (int)floor(arr[i] + .5));
////	}
////	return 0;
////}
//
//
//int  roundToInteger(double x);
//double  roundToTenths(double x);
//double  roundToHundreths(double x);
//double  roundToThousandths(double x);
//
//int main()
//{
//	double x = 0;
//	printf("���������ݣ�-->");
//	scanf("%lf", &x);
//	printf("��λ��%d\tʮλ��%lf\t��λ��%lf\tǧλ��%lf\n", roundToInteger(x), roundToTenths(x), roundToHundreths(x), roundToThousandths(x));
//	return 0;
//}
//
//int  roundToInteger(double x)
//{
//	return (int)floor(x + .5);
//}
//double  roundToTenths(double x)
//{
//	return floor(x * 10 + .5) / 10;
//}
//double  roundToHundreths(double x)
//{
//	return floor(x * 100 + .5) / 100;
//}
//double  roundToThousandths(double x)
//{
//	return floor(x * 1000 + .5) / 1000;
//}