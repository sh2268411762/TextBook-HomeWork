//#include "test.h"
//
//#define MaxSize 100
//typedef struct {
//    int N;
//    char A;        //��ʼ��
//    char B;        //������
//    char C;        //Ŀ����
//}ElementType;
//typedef struct {
//    ElementType Data[MaxSize];
//    int top;
//}Stack;//��ŵ������Ľṹ����
//void Push(Stack* PtrS, ElementType item) {
//    //��ջ����
//    if (PtrS->top == MaxSize)
//    {
//        printf("The stack is full!\n");
//        return;
//    }
//    else
//    {
//        PtrS->Data[++(PtrS->top)] = item;
//        return;
//    }
//}
//ElementType Pop(Stack* PtrS) {
//    if (PtrS->top == -1)
//    {
//        printf("The stack is empty!\n");
//        exit(1);   //ֱ����ֹ����һ�㲻������������
//    }
//    else
//    {
//        PtrS->top--;
//        return (PtrS->Data[PtrS->top + 1]);        //������return PtrS->Data[PtrS->top--];
//    }
//}
////����ջ�ķǵݹ�ʵ��
//void Hanoi(int n) {
//    ElementType P, toPush;
//    Stack S;
//
//    P.N = n; P.A = 'a'; P.B = 'b'; P.C = 'c';
//    S.top = -1;
//
//    Push(&S, P);
//    while (S.top != -1)        //����ջ��Ϊ��ʱ
//    {
//        P = Pop(&S);//��ջ
//        if (P.N == 1)//��ֻʣһ������ʱ��ֱ���ɵ�ǰ���ƶ���Ŀ����
//            printf("%c -> %c\n", P.A, P.C);
//        else
//        {
//            toPush.N = P.N - 1;
//            toPush.A = P.B; toPush.B = P.A; toPush.C = P.C;
//            Push(&S, toPush);        //��������(n - 1, b, a, c)��ջ
//            toPush.N = 1;
//            toPush.A = P.A; toPush.B = P.B; toPush.C = P.C;
//            Push(&S, toPush);        //���ڶ���1, a, b, c)��ջ
//            toPush.N = P.N - 1;
//            toPush.A = P.A; toPush.B = P.C; toPush.C = P.B;
//            Push(&S, toPush);        //����һ��(n - 1, a, c, b)��ջ
//        }
//    }
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if (n <= 0)return 0;
//    else Hanoi(n);
//	return 0;
//}