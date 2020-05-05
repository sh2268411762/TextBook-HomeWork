//#include "test.h"
//
//int main()
//{
//	int counters[9];
//	size_t input = 200;
//
//	int size = sizeof(counters) / sizeof(counters[0]);
//	size_t i = 0;
//
//	while (i < 9)
//	{
//		if (input >= 200 && input <= 299)
//		{
//			counters[i] = 200 + (int)input * .09;
//			input += 100;
//			i++;
//		}
//		if (input >= 300 && input <= 399)
//		{
//			counters[i] = 200 + (int)input * .09;
//			input += 100;
//			i++;
//		}
//		if (input >= 400 && input <= 499)
//		{
//			counters[i] = 200 + (int)input * .09;
//			input += 100;
//			i++;
//		}
//		if (input >= 500 && input <= 599)
//		{
//			counters[i] = 200 + (int)input * .09;
//			input += 100;
//			i++;
//		}
//		if (input >= 600 && input <= 699)
//		{
//			counters[i] = 200 + (int)input * .09;
//			input += 100;
//			i++;
//		}
//		if (input >= 700 && input <= 799)
//		{
//			counters[i] = 200 + (int)input * .09;
//			input += 100;
//			i++;
//		}
//		if (input >= 800 && input <= 899)
//		{
//			counters[i] = 200 + (int)input * .09;
//			input += 100;
//			i++;
//		}
//		if (input >= 900 && input <= 999)
//		{
//			counters[i] = 200 + (int)input * .09;
//			input += 100;
//			i++;
//		}
//		if (input >= 1000 )
//		{
//			counters[i] = 200 + (int)input * .09;
//			input += 100;
//			i++;
//		}
//	}
//
//	input = 200;
//	for (i = 0; i < size; i++)
//	{
//		printf("$ %d µ½ %d£º%d\n", input, input + 99, counters[i]);
//		input += 100;
//	}
//	return 0;
//}