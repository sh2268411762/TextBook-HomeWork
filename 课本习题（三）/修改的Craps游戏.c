//#include "test.h"
//
//enum Status{CONTINUE,WON,LOST};
//int rollDice(void)
//{
//	int die1 = 1 + (rand() % 6);
//	int die2 = 1 + (rand() % 6);
//
//	printf("Player rolled %d + %d = %d\n",die1, die2, die1 + die2);
//	return die1 + die2;
//}
//int main()
//{
//	int bankBalance = 1000;
//	int wager = 0;
//	LOOP:
//	srand((unsigned int)time(NULL));
//	int myPoint;
//	enum Status gameStatus;
//
//
//	do {
//		printf("请下注：-->");
//		scanf("%d", &wager);
//		if (wager > bankBalance)
//		{
//			printf("大爷，你没有这么多筹码哦\n");
//			printf("再来");
//		}
//	} while (wager > bankBalance);
//	int sum = rollDice();
//
//	switch (sum)
//	{
//	case 7:
//	case 11:
//		gameStatus = WON;
//		break;
//
//	case 2:
//	case 3:
//	case 12:
//		gameStatus = LOST;
//		break;
//
//	default:
//		gameStatus = CONTINUE;
//		myPoint = sum;
//		printf("Point is %d\n", myPoint);
//		break;
//	}
//
//	while (CONTINUE == gameStatus)
//	{
//		sum = rollDice();
//		if (sum == myPoint)
//		{
//			gameStatus = WON;
//		}
//		else
//		{
//			if (7 == sum)
//			{
//				gameStatus = LOST;
//			}
//		}
//	}
//
//	if (WON == gameStatus)
//	{
//		bankBalance += wager;
//		puts("Player wins");
//		printf("新的余额%d\n", bankBalance);
//	}
//	else
//	{
//		bankBalance -= wager;
//		puts("Player loses");
//		printf("新的余额%d\n", bankBalance);
//	}
//
//	if (0 == bankBalance)
//	{
//		printf("你已经破产了，滚蛋吧\n");
//	}
//	else if (bankBalance > 0 && bankBalance <= 400)
//	{
//		printf("你快要破产了\n");
//		goto LOOP;
//	}
//	else if (bankBalance > 400 && bankBalance < 20000)
//	{
//		int i = rand() % 3;
//		if (0 == i)
//		{
//			printf("继续快活啊\n\n");
//			goto LOOP;
//		}
//		else if(1 == i)
//		{
//			printf("继续啊，大爷\n\n");
//			goto LOOP;
//		}
//		else
//		{
//			printf("跟上，压死\n\n");
//			goto LOOP;
//		}
//	}
//	else if(bankBalance>=20000)
//	{
//		printf("你发了，收手不玩了\n");
//	}
//	return 0;
//}