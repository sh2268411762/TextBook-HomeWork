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
//		printf("�������û���-1���˳�����-->");
//		scanf("%d", &An);
//	while (An > 0)
//	{
//		printf("�������³���-->");
//		scanf("%lf", &Bb);
//		printf("���䱾����֧����Ŀ��-->");
//		scanf("%lf", &Tch);
//		printf("���䱾����������-->");
//		scanf("%lf", &Tcr);
//		printf("����������޴���ȣ�-->");
//		scanf("%lf", &Cl);
//
//		double Ba = Bb + Tch - Tcr;
//		if (Ba > Cl)
//		{
//			printf("�˺ţ�-->     %d\n", An);
//			printf("�Ŵ���ȣ�--> %.2f\n", Cl);
//			printf("�µ���--> %.2f\n", Ba);
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