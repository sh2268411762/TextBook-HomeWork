//#include "test.h"
//
//
//int Fib(unsigned int x)
//{
//	if (1 == x || 2 == x)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(x - 1) + Fib(x - 2);
//	}
//}
//
//int fib(int x)
//{
//	//����,Ч�ʸߣ�-->û�е��ú�����˼·���Ѷ�
//	int first = 1;
//	int second = 1;
//	int third = 1;
//
//	while ( x > 2 )
//	{
//		third = first + second;
//		first = second;
//		second = third;
//		x--;
//	}
//	return third;
//
//}
//int main()
//{
//	int n = 0;
//	printf("����������쳲��������е�λ����-->");
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//	printf("��%dΪ쳲�����������%d\n",n, ret);
//	int ret1 = fib(n);
//	printf("��%dΪ쳲�����������%d\n", n, ret1);
//	return 0;
//}