//#include "test.h"
//#define SIZE 10
//
//void bubble(int work[], size_t size, int (*compare)(int a, int b));
//int ascending(int a, int b);
//int descending(int a, int b);
//
//int main()
//{
//	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };//�����Լ���������Ԫ��
//	printf("������10��Ԫ�أ�-->");
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("%s", "Enter 1 to sort in ascending order��1 ���򣩣�\nEnter 2 to sort in descending order��2 ���򣩣�\n");
//	int order;
//	scanf("%d", &order);
//
//	puts("\nData items in original");
//
//	for (size_t counter = 0; counter < SIZE; counter++)
//	{
//		printf("%5d", a[counter]);
//	}
//
//	if (1 == order)
//	{
//		bubble(a, SIZE, ascending);
//		puts("\nData items in ascending order������");
//	}
//	else
//	{
//		bubble(a, SIZE, descending);
//		puts("\nData items in descending order������");
//	}
//
//	for (size_t counter = 0; counter < SIZE; counter++)
//	{
//		printf("%5d", a[counter]);
//	}
//
//	puts("");
//	return 0;
//}
//
//void bubble(int work[], size_t size, int(*compare)(int a, int b))//���飬�����С��ָ������ָ��
//{
//	void swap(int* x, int* y);
//
//	for (unsigned int pass = 1; pass < size; pass++)
//	{
//		for (size_t count = 0; count < size - 1; count++)
//		{
//			if ((*compare)(work[count], work[count + 1]))//�Ƚϴ�С
//			{
//				swap(&work[count], &work[count + 1]);
//			}
//		}
//	}
//}
//
//void swap(int* x, int* y)//����
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int ascending(int a, int b)//����
//{
//	return b < a;
//}
//
//int descending(int a, int b)//����
//{
//	return b > a;
//}
