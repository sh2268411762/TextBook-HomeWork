//#include "test.h"
//
//int main()
//{
//	double principal = 0;
//	double rate = 0;//������
//	int days = 0;
//
//	LOOP:
//	printf("�����뱾��-1 ������\nEnter loan principal (-1 to end)��-->");
//	scanf("%lf", &principal);
//	while (principal > 0)
//	{
//		printf("������������\nEnter interest rate��-->");
//		scanf("%lf", &rate);
//		printf("�������������\nEnter term of the loan in days��-->");
//		scanf("%d", &days);
//		double interest = principal * rate * days / 365;
//		printf("��Ϣ��\nThe interest charge is $%.2f\n\n", interest);
//		goto LOOP;
//	}
//	return 0;
//}