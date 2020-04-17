//#include "test.h"
//
//int main()
//{
//	int hours = 0;
//	double hourly = 0;
//
//	LOOP:
//	printf("请输入工作时间（-1 结束）\nEnter # of hours worked (-1 to end)：-->");
//	scanf("%d", &hours);
//
//	while (hours > 0)
//	{
//		printf("请输入每个小时工资\nEnter hourly rate of the worker：-->");
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
//		printf("工资是\nSalary is $%.2f\n", ret);
//		puts("");
//		goto LOOP;
//	}
//	return 0;
//}