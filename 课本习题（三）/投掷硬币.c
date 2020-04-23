//#include "test.h"
//
//int flip(void)
//{
//	int x = rand() % 2 ;
//	if (0 == x)
//	{
//		return 0;
//	}
//	if (1 == x)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int count1 = 0;
//	for (i = 0; i < 100; i++)
//	{
//		srand((unsigned int)time(NULL));
//		Sleep(1000);
//		int ret = flip();
//		if (1 == ret)
//		{
//			printf("Heads ");
//			count++;
//		}
//		if (0 == ret)
//		{
//			printf("Tails ");
//			count1++;
//		}
//	}
//	puts("");
//	printf("正面：%d次\n", count);
//	printf("反面：%d次\n", count1);
//	return 0;
//}