#include "test.h"

#define TEN 10.0
static double count = 0.0;
double  FunCheng(int n)
{
	if (0 == n % 10)
	{
		srand((unsigned int)time(NULL));
		int x = rand() % n;
		int y = rand() % n;
		int ret = x * y;
		int c = 3;
		int answer = 0;
		printf("How much is %d times %d？\n", x, y);

		while (c > 0)
		{
			scanf("%d", &answer);
			if (answer == ret)
			{
				count++;
				int t = rand() % 4;
				switch (t)
				{
				case 0:
					printf("Excellent！\n\n");
					break;

				case 1:
					printf("Nice work！\n\n");
					break;

				case 2:
					printf("Very good！\n\n");
					break;

				case 3:
					printf("Keep up the good work！\n\n");
					break;

				default:
					printf("我搞错了，不过基本不可能\n\n");
					break;
				}
				break;
			}
			else
			{
				c--;
				int t = rand() % 4;
				switch (t)
				{
				case 0:
					printf("No.Please try again！\n");
					break;

				case 1:
					printf("Wrong.Try once more！\n");
					break;

				case 2:
					printf("Don't give up！\n");
					break;

				case 3:
					printf("No.Keep trying！\n");
					break;

				default:
					printf("我搞错了，不过基本不可能\n\n");
					break;
				}
			}
		}
		return count / TEN;
	}
}
int main()
{

	int i;
LOOP:
Loop:
	printf("请选择级别（10的整数倍）：-->");
	int n;
	scanf("%d", &n);
	if (0 == n % 10)
	{
		i = TEN;
		int I = i;
		double Ret;
		do {
			Ret = FunCheng(n);
			i--;
		} while (i > 0);
		count = 0;
		if (0.75 > Ret)
		{
			printf("Please ask your instructor for extra help\n\n\n");
			goto LOOP;
		}
		else
		{
			printf("Congratulation,you are ready to go to whe next level！\n\n\n");
			goto LOOP;
		}
	}
	else
	{
		printf("请重新输入\n");
		goto Loop;
	}
	return 0;
}