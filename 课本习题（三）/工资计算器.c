//#include "test.h"
//
//int main()
//{
//	int hours = 0;
//	double hourly = 0;
//
//	LOOP:
//	printf("�����빤��ʱ�䣨-1 ������\nEnter # of hours worked (-1 to end)��-->");
//	scanf("%d", &hours);
//
//	while (hours > 0)
//	{
//		printf("������ÿ��Сʱ����\nEnter hourly rate of the worker��-->");
//		scanf("%lf", &hourly);
//
//		double ret = 0;
//		if (hours <= 40)
//		{
//			ret = hours * hourly;
//		}
//		else
//		{
//			ret = 40 * hourly + (hours - 40.0) * 1.5 * hourly;
//		}
//
//		printf("������\nSalary is $%.2f\n", ret);
//		puts("");
//		goto LOOP;
//	}
//	return 0;
//}