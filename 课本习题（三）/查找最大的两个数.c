//#include "test.h"
//
//int main()
//{
//	int arr[TEN] = { 0 };
//	int i = 0;
//	printf("������10����\n");
//	for (i = 0; i < TEN; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	puts("����ǰ��");
//	for (i = 0; i < TEN; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int j = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		int k = 0;
//		for (k = 0; k < sz - j - 1; k++)
//		{
//			if (arr[k] > arr[k + 1])
//			{
//				int temp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = temp;
//			}
//		}
//	}
//
//	puts("\n�����");
//	for (i = 0; i < TEN; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("������ǣ�-->%d,����ǣ�-->%d\n", arr[TEN-1], arr[TEN-2]);
//	return 0;
//}