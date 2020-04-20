//#include "test.h"
//
//int main()
//{
//	int Num = 0;
//	double Sa = 0;
//
//	double count = 0.0;
//
//	while (1)
//	{
//		printf("\n请输入数对<x,y>(0 < x < 5)：");
//		scanf("%d%lf", &Num, &Sa);
//		if (Num < 1 || Num>5)
//		{
//			break;
//		}
//		switch (Num)
//		{
//		case 1:
//			count += 2.98 * Sa * 7;
//			break;
//
//		case 2:
//			count += 4.50 * Sa * 7;
//			break;
//
//		case 3:
//			count += 9.98 * Sa * 7;
//			break;
//
//		case 4:
//			count += 4.49 * Sa * 7;
//			break;
//
//		case 5:
//			count += 6.87 * Sa * 7;
//			break;
//
//		deault:
//			printf("输入有误！！！\n");
//			printf("请重新输入\n");
//			break;
//		}
//	}
//	printf("上周零售总额为：%lf\n", count);
//	return 0;
//}