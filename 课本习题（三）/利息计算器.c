//#include "test.h"
//
//int main()
//{
//	double principal = 0;
//	double rate = 0;//年利率
//	int days = 0;
//
//	LOOP:
//	printf("请输入本金（-1 结束）\nEnter loan principal (-1 to end)：-->");
//	scanf("%lf", &principal);
//	while (principal > 0)
//	{
//		printf("请输入年利率\nEnter interest rate：-->");
//		scanf("%lf", &rate);
//		printf("请输入贷款天数\nEnter term of the loan in days：-->");
//		scanf("%d", &days);
//		double interest = principal * rate * days / 365;
//		printf("利息是\nThe interest charge is $%.2f\n\n", interest);
//		goto LOOP;
//	}
//	return 0;
//}