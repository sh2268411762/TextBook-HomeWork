//#include "test.h"
//
//int main()
//{
//	double p = 1000.0;//本金
//	double r = .05;//年利率
//	for (r = .05; r <= .1; r = r + .01)
//	{
//		printf("%4s%21s\n", "Year", "Amount on deposit");
//		for (unsigned int year = 1; year <= 10; year++)
//		{
//			double a = p * pow(1.0 + r, year);//总额
//			printf("%4u%21.2f\n", year, a);
//			puts("");
//		}
//		puts("");
//	}
//	return 0;
//}