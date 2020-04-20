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
//		printf("二进制：");					//int类型表示的最小值 	
//		for (i = 0x80000000; i; i >>= 1) 		//0x80000000实际代表的二进制值是1000,0000,0000,0000,0000,0000,0000,0000 		
//												//是在把十六进制表示的0x80000000和传递过来的num 的值进行位运算 &; 		
//		{
//			tmp = ((j & i) == i);
//			printf("%d", tmp);
//		}
//		printf("\t八进制：%o\t十进制：%d\t十六进制：%X\n", j, j, j);
//	}
//	return 0;
//}
//
