//#include "test.h"
//
//int main()
//{
//	int j = 1;
//	for (j = 1; j <= 256; j++)
//	{
//		int arr1[50] = { 0 };
//		int tmp = 0;
//		unsigned int i;
//		//printf("The Binary number is :"); 
//		printf("�����ƣ�");					//int���ͱ�ʾ����Сֵ 	
//		for (i = 0x80000000; i; i >>= 1) 		//0x80000000ʵ�ʴ���Ķ�����ֵ��1000,0000,0000,0000,0000,0000,0000,0000 		
//												//���ڰ�ʮ�����Ʊ�ʾ��0x80000000�ʹ��ݹ�����num ��ֵ����λ���� &; 		
//		{
//			tmp = ((j & i) == i);
//			printf("%d", tmp);
//		}
//		printf("\t�˽��ƣ�%o\tʮ���ƣ�%d\tʮ�����ƣ�%X\n", j, j, j);
//	}
//	return 0;
//}
//
