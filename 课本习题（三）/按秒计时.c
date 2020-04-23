//#include "test.h"
//
//int Count(int s, int f, int m)
//{
//	if (s > 12 || f > 60 || m > 60)
//	{
//		return 0;
//	}
//	else
//	{
//		return m + f * 60 + s * 3600;
//	}
//}
//int main()
//{
//	int s1 = 0;
//	int f1 = 0;
//	int m1 = 0;
//	printf("请输入第一次时间\n");
//	scanf("%d%d%d", &s1, &f1, &m1);
//	printf("第一次：--> %d:%d:%d：\n",s1,f1,m1);
//
//	int time1 = Count(s1, f1, m1);
//	if (0 == time1)
//	{
//		printf("输入时间有误\n");
//	}
//	else
//	{
//		printf("%d:%d:%d 按秒计时是 %d 秒\n", s1, f1, m1, time1);
//	}
//	puts("");
//	int s2 = 0;
//	int f2 = 0;
//	int m2 = 0;
//	printf("请输入第二次时间\n");
//	scanf("%d%d%d", &s2, &f2, &m2);
//	printf("第二次：--> %d:%d:%d：\n", s2, f2, m2);
//
//	int time2 = Count(s2, f2, m2);
//	if (0 == time2)
//	{
//		printf("输入时间有误\n");
//	}
//	else
//	{
//		printf("%d:%d:%d 按秒计时是 %d 秒\n", s2, f2, m2, time2);
//	}
//	puts("");
//	if (time2 < time1)
//	{
//		int temp = time1;
//		time1 = time2;
//		time2 = temp;
//	}
//	printf("%d:%d:%d 与%d:%d:%d 之间的时间间隔是 %d 秒\n", s1, f1, m1, s2, f2, m2, time2 - time1);
//	return 0;
//}