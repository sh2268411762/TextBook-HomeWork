//#include "test.h"
//
//void Encryption(int x);
//void reverse(int arr[], int sz);
//void Decryption(int x);
//
//int main()
//{
//	int key = 0;
//	
//	while (1)
//	{
//		printf("请输入一个加密的4位数：-->");
//		scanf("%d", &key);
//		if (key >= 10000 || key <= 999)
//		{
//			printf("输入有误！！！\n");
//			printf("请重新输入\n\n");
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	Encryption(key);
//
//	int KEY = 0;
//
//	while (1)
//	{
//		printf("请输入一个需要解密4的位数：-->");
//		scanf("%d", &KEY);
//		if (KEY >= 10000 || KEY <= 999)
//		{
//			printf("输入有误！！！\n");
//			printf("请重新输入\n\n");
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	Decryption(KEY);
//	return 0;
//}
//
//void Encryption(int x)//加密程序
//{
//	int arr[4];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		arr[i] = (x % 10 + 7) % 10;
//		x /= 10;
//	}
//	reverse(arr, sz);
//
//	int temp = arr[0];//交换1 3
//	arr[0] = arr[2];
//	arr[2] = temp;
//
//	temp = arr[1];//交换2 4
//	arr[1] = arr[3];
//	arr[3] = temp;
//
//	printf("打印加密后的整数：-->");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	puts("");
//}
//
//void Decryption(int x)//解密
//{
//	int arr[4];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		arr[i] = x % 10 + 3;
//		x /= 10;
//	}
//	reverse(arr, sz);
//
//	int temp = arr[0];//交换1 3
//	arr[0] = arr[2];
//	arr[2] = temp;
//
//	temp = arr[1];//交换2 4
//	arr[1] = arr[3];
//	arr[3] = temp;
//
//	printf("打印解密后的整数：-->");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	puts("");
//}
//
//void reverse(int arr[], int sz)//数组逆置
//{
//	int i = 0;
//	int temp;
//	/*for (i = 0; i < sz/2; i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - i - 1] = temp;
//	}*/
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}