//#include "test.h"
//
////int main()//һ�����"*" " "  �е�һ��
////{
////	int flag = 1;
////	int i = 0;
////	for (i = 0; i < 8; i++)
////	{
////		if (0 == i % 2)
////		{
////			int j = 0;
////			for (j = 0; j < 16; j++)
////			{
////				if (1 == flag)
////				{
////					printf("%s", "*");
////				}
////				if (-1 == flag)
////				{
////					printf("%s", " ");
////				}
////				flag = -flag;
////			}
////		}
////		else
////		{
////			int j = 0;
////			for (j = 0; j < 16; j++)
////			{
////				if (1 == flag)
////				{
////					printf("%s", " ");
////				}
////				if (-1 == flag)
////				{
////					printf("%s", "*");
////				}
////				flag = -flag;
////			}
////		}
////		puts(" ");
////	}
////	return 0;
////}
//
//int main()//һ�����һ�� "* " ���
//{
//	int flag = 1;
//	int i = 0;
//	for (i = 0; i < 8; i++)
//	{
//		if (0 == i % 2)
//		{
//			int j = 0;
//			for (j = 0; j < 8; j++)
//			{
//				if (1 == flag)
//				{
//					printf("%s", "*");
//					flag = 0;
//				}
//				if (0 == flag)
//				{
//					printf("%s", " ");
//					flag = 1;
//				}
//			}
//		}
//		else
//		{
//			int j = 0;
//			for (j = 0; j < 8; j++)
//			{
//				if (1 == flag)
//				{
//					printf("%s", " ");
//					flag = 0;
//				}
//				if (0 == flag)
//				{
//					printf("%s", "*");
//					flag = 1;
//				}
//			}
//		}
//		puts(" ");
//	}
//	return 0;
//}