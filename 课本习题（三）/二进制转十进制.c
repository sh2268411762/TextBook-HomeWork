//#include "test.h"
//
//int main()
//{
//	int num = 0;
//	printf("请输入二进制数字：-->");
//	scanf("%d", &num);
//
//	int mid = num;
//	int las = 0;
//	int count = 0;
//	while (mid)
//	{
//		las = (mid % 10) * pow(2, count) + las;
//		count++;
//		mid /= 10;
//	}
//	printf("%d\n", las);
//	return 0;
//}