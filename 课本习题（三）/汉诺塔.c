//#include "test.h"
//
//void Move(char x, char y)
//{
//	printf("��%c-->%c ", x, y);
//}
//void HanoiT(int n, char A, char B, char C)
//{
//	if (n == 1)Move(A, C);       //	/*�ݹ����*/
//	else
//	{
//		HanoiT(n - 1, A, C, B);      //��n-1�����Ӵ�Aͨ��C�ƶ���B
//		Move(A, C);    //����������Ҳ����n-��n-1��=1�������ƶ���C
//		HanoiT(n - 1, B, A, C);   //��n-1�����Ӵ�Bͨ��A�ƶ���C
//	}
//}
//int  main()
//{
//	int n;
//	printf("���������Բ������");
//	scanf("%d", &n);
//	HanoiT(n, 'A', 'B', 'C');
//	return 0;
//}