//#include "test.h"
//
//int main()
//{
//	char  ch = 0;
//	int n = 0;
//LOOP:
//	printf("I have a number between 1 and 1000.\n");
//	printf("Can you guess my number?\n");
//	printf("Please type your first guess.\n");
//	srand((unsigned int)time(NULL));
//	int num = rand() % 1000 + 1;
//	printf("%d\n", num);
//	while (1)
//	{
//		scanf("%d", &n);
//		if (n == num)
//		{
//			printf("Excellent! You guessed the number!\n");
//			printf("Would you like to play again (y or n)\n");
//			ch = getchar();
//			scanf("%c", &ch);
//			if ('y' == ch)
//			{
//				goto LOOP;
//			}
//			else
//			{
//				break;
//			}
//		}
//		else if (n > num)
//		{
//			printf("Too high. Tyr again.\n");
//		}
//		else
//		{
//			printf("Too low. Try again.\n");
//		}
//	}
//	return 0;
//}