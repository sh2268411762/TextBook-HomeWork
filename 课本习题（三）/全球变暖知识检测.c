//#include "test.h"
//
//int Judg(int x)
//{
//	static int count = 0;
//	int select = 0;
//	printf("��������Ĵ𰸣�-->A��1  B��2  C��3  D��4\n");
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
//	printf("1��1960-1999��䣬���ǵ����� ��\nA.½���¶���ʱ仯����Ⱥ����¶ȴ�\nB.���绷��Խ��Խ����\nC.1999��½���¶ȱȺ����¶ȸ�\nD.1985������½���뺣���¶ȳ�������\n\n");
//	printf("2�����ں�����ʡ����仯���Ƶ���������ȷ���ǣ� ��\nA���������������2�·�������Ϊ����\nB������������½������İ���\nC��ȫ������¶�������Ϊ����\nD��7 - 9�µĽ�ˮ������\n\n");
//	printf("3������仯�Ժ�����ʡũҵ����������Ӱ������У� ��\n�ٲ��溦�ķ���Ƶ�ȼӴ� ���ļ��ɺ��ķ���Ƶ�ȼӴ�\n��ũ��������Ʒ��������Ըı� �ܶ�����������ʧ�������\nA���٢� B���ۢ�\nC���٢� D���ڢ�\n\n");
//	printf("4�����п�������ȫ��䰵�Ķ��������У�����Ҫ����Ϊԭ���ǣ� ��\nA��̫�����������ڼ���\nB��ʹ�ÿ���ȼ�ϵ��ŷų�����΢����\nC����ɽ�緢�����Ļ�ɽ��\nD���ɻ����в����ķ����Ƽ�\n\n");
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