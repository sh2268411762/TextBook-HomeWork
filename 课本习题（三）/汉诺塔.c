//#include "test.h"
//
//void Move(char x, char y)
//{
//	printf("由%c-->%c ", x, y);
//}
//void HanoiT(int n, char A, char B, char C)
//{
//	if (n == 1)Move(A, C);       //	/*递归出口*/
//	else
//	{
//		HanoiT(n - 1, A, C, B);      //将n-1个盘子从A通过C移动到B
//		Move(A, C);    //将最大的盘子也就是n-（n-1）=1个盘子移动到C
//		HanoiT(n - 1, B, A, C);   //将n-1个盘子从B通过A移动到C
//	}
//}
//int  main()
//{
//	int n;
//	printf("请输入你的圆盘数：");
//	scanf("%d", &n);
//	HanoiT(n, 'A', 'B', 'C');
//	return 0;
//}