//#include "test.h"
//
//int main()
//{
//	int n = 0;
//	int arr[SIZE] = { 0 };
//	printf("请输入数据：-->");
//	scanf("%d", &n);
//	int i = 0;
//	int Min= 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (0 == Min)//防止Min被重复赋值为arr[0]
//		{
//			Min = arr[0];
//		}
//		if (arr[i] < Min)//改变Min的值
//		{
//			Min = arr[i];
//		}
//	}
//
//	printf("最小数字Min是：-->%d\n", Min);
//	return 0;
//}