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
//	printf("�������һ��ʱ��\n");
//	scanf("%d%d%d", &s1, &f1, &m1);
//	printf("��һ�Σ�--> %d:%d:%d��\n",s1,f1,m1);
//
//	int time1 = Count(s1, f1, m1);
//	if (0 == time1)
//	{
//		printf("����ʱ������\n");
//	}
//	else
//	{
//		printf("%d:%d:%d �����ʱ�� %d ��\n", s1, f1, m1, time1);
//	}
//	puts("");
//	int s2 = 0;
//	int f2 = 0;
//	int m2 = 0;
//	printf("������ڶ���ʱ��\n");
//	scanf("%d%d%d", &s2, &f2, &m2);
//	printf("�ڶ��Σ�--> %d:%d:%d��\n", s2, f2, m2);
//
//	int time2 = Count(s2, f2, m2);
//	if (0 == time2)
//	{
//		printf("����ʱ������\n");
//	}
//	else
//	{
//		printf("%d:%d:%d �����ʱ�� %d ��\n", s2, f2, m2, time2);
//	}
//	puts("");
//	if (time2 < time1)
//	{
//		int temp = time1;
//		time1 = time2;
//		time2 = temp;
//	}
//	printf("%d:%d:%d ��%d:%d:%d ֮���ʱ������ %d ��\n", s1, f1, m1, s2, f2, m2, time2 - time1);
//	return 0;
//}