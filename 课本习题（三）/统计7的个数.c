//#include  "test.h"
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个数：-->");
//	scanf("%d", &num);
//	int count = 0;
//	int mid = num;
//	while (mid)
//	{
//		int i = mid % 10;
//		mid /= 10;
//		count++;
//		if (7 == i)
//		{
//			switch (count)
//			{
//			case 1:
//				printf("个位数是7\n");
//				break;
//
//			case 2:
//				printf("十位数是7\n");
//				break;
//			case 3:
//				printf("百位数是7\n");
//				break;
//
//			case 4:
//				printf("千位数是7\n");
//				break;
//			
//			case 5:
//				printf("万位数是7\n");
//				break;
//
//			case 6:
//				printf("十万位数是7\n");
//				break;
//
//			case 7:
//				printf("百万位数是7\n");
//				break;
//
//			case 8:
//				printf("千万位数是7\n");
//				break;
//
//			case 9:
//				printf("亿位数是7\n");
//				break;
//
//			case 10:
//				printf("十亿位数是7\n");
//				break;
//
//			deault:
//				printf("数字太大了\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}