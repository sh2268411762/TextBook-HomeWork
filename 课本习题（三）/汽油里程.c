//#include "test.h"
//
//int main()
//{
//	double x = 0;
//	double y = 0;
//	double ret = 0.0;
//	double X = 0;
//	double Y = 0;
//	LOOP:printf("请输入燃料数（单位：加仑）：-->");
//	scanf("%lf", &x);
//
//	while (x >= 0)
//	{
//		printf("请输入行驶里程（单位英里）：-->");
//		scanf("%lf", &y);
//		printf("每加仑行驶英里数：-->%lf\n", y / x);
//
//		X += x;
//		Y += y;
//		puts("");
//		goto LOOP;
//	}
//	ret = Y / X;
//	printf("每加仑行驶英里数：-->%lf\n", ret);
//
//	return 0;
//}