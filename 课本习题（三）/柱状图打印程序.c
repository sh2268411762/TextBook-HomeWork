//#include "test.h"
//
//int main()
//{
//	int i = 0;
//	int arr[5] = { 0 };
//LOOP:
//	printf("请输入5个数（介于1和30之间）\n");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		if (arr[i] > 30 || arr[i] < 1)
//		{
//			printf("输入非法，请重新输入！！！\n");
//			goto LOOP;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		printf("|—");
//		for (j = 0; j < arr[i]; j++)
//		{
//			printf("*");
//		}
//		puts("");
//	}
//	return 0;
//}