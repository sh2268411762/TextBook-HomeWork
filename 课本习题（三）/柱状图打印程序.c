//#include "test.h"
//
//int main()
//{
//	int i = 0;
//	int arr[5] = { 0 };
//LOOP:
//	printf("������5����������1��30֮�䣩\n");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		if (arr[i] > 30 || arr[i] < 1)
//		{
//			printf("����Ƿ������������룡����\n");
//			goto LOOP;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		printf("|��");
//		for (j = 0; j < arr[i]; j++)
//		{
//			printf("*");
//		}
//		puts("");
//	}
//	return 0;
//}