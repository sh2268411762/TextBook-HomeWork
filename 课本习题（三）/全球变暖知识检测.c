//#include "test.h"
//
//int Judg(int x)
//{
//	static int count = 0;
//	int select = 0;
//	printf("请输入你的答案：-->A：1  B：2  C：3  D：4\n");
//	scanf("%d", &select);
//	switch (x)
//	{
//	case 1:
//		if (1 == select)
//		{
//			count++;
//		}
//		break;
//
//	case 2:
//		if (3 == select)
//		{
//			count++;
//		}
//		break;
//
//	case 3:
//		if (1 == select)
//		{
//			count++;
//		}
//		break;
//
//	case 4:
//		if (2 == select)
//		{
//			count++;
//		}
//		break;
//
//	default:
//		break;
//	}
//
//	return count;
//
//}
//int fun(void)
//{
//	int Ret;
//	int i = 1;
//	printf("1．1960-1999年间，东亚地区（ ）\nA.陆表温度年际变化总体比海表温度大\nB.季风环流越来越显著\nC.1999年陆表温度比海表温度高\nD.1985年以来陆表与海表温度持续上升\n\n");
//	printf("2．关于黑龙江省气候变化趋势的叙述，正确的是（ ）\nA．所有年份气温在2月份升高最为显著\nB．冬半年的气温将高于夏半年\nC．全年最低温度上升最为明显\nD．7 - 9月的降水量最少\n\n");
//	printf("3．气候变化对黑龙江省农业生产产生的影响可能有（ ）\n①病虫害的发生频度加大 ②夏季干旱的发生频度加大\n③农作物的熟制发生根本性改变 ④冬季冻害的损失大幅增加\nA．①② B．③④\nC．①③ D．②④\n\n");
//	printf("4．下列可能引起全球变暗的多种因素中，最主要的人为原因是（ ）\nA．太阳辐射能力在减弱\nB．使用矿物燃料等排放出大量微粒物\nC．火山喷发产生的火山灰\nD．飞机飞行产生的飞行云迹\n\n");
//
//	while (i <= 4)
//	{
//		Ret = Judg(i);
//		i++;
//	}
//	return Ret;
//}
//
//int main()
//{
//	int ret = fun();
//	if (4 == ret)
//	{
//		printf("Excellent\n");
//	}
//	else
//	{
//		printf("Time to brush up on your knowledge of g;obal warming\n");
//	}
//	return 0;
//}