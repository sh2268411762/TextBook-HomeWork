//#include "test.h"
//
//double calculateCharges(double t);
//
//int main()
//{
//	double Hours = 0;
//	int i = 0;
//	double ret = 0;
//	double H = 0;
//	double arr[3] = { 0 };
//LOOP:
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%lf", &arr[i]);
//	}
//	Hours = arr[0] + arr[1] + arr[2];
//
//	printf("Car\tHours\tChange\n");
//	for (i = 1; i <= 3; i++)
//	{
//		ret += calculateCharges(arr[i-1]);
//		printf("%d\t%.1f\t%.2f\n", i, arr[i-1], calculateCharges(arr[i-1]));
//		if (0 == calculateCharges(arr[i - 1]))
//		{
//			printf("输入有误，重新输入！！！\n");
//			goto LOOP;
//		}
//	}
//	printf("TOTAL\t%.1f\t%.2f\n",Hours,ret );
//	return 0;
//}
//double calculateCharges(double t)
//{
//	if (t <= 3.0)
//	{
//		return 2.00;
//	}
//	else if (t > 3.0 && t <= 18.0)
//	{
//		return (2 + (t - 3.0) * 0.5);
//	}
//	else if (t > 18.0 && t <= 24.0)
//	{
//		return 10.0;
//	}
//	else
//	{
//		return 0;
//	}
//}