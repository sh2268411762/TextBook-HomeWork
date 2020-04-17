//#include "test.h"
//
//int main()
//{
//	int An = 0;
//	double Bb = 0;
//	double Tch = 0;
//	double Tcr = 0;
//	double Cl = 0;
//	LOOP:
//		printf("请输入用户（-1则退出）：-->");
//		scanf("%d", &An);
//	while (An > 0)
//	{
//		printf("请输入月初余额：-->");
//		scanf("%lf", &Bb);
//		printf("请输本月已支付项目：-->");
//		scanf("%lf", &Tch);
//		printf("请输本月已申请贷款：-->");
//		scanf("%lf", &Tcr);
//		printf("请输允许的限贷额度：-->");
//		scanf("%lf", &Cl);
//
//		double Ba = Bb + Tch - Tcr;
//		if (Ba > Cl)
//		{
//			printf("账号：-->     %d\n", An);
//			printf("信贷额度：--> %.2f\n", Cl);
//			printf("新的余额：--> %.2f\n", Ba);
//			printf("Credit Limit Exceede\n");
//			puts("");
//		}
//		else
//		{
//			puts("");
//			puts("");
//		}
//		goto LOOP;
//	}
//	return 0;
//}