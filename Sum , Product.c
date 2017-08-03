#include <stdio.h>

void sum(int a, int b);
void product(int a, int b);

void main()
{
	int n, a, b;

	printf("1 = 덧셈 \n2 = 곱셈 \n선택 : ");
	scanf("%d", &n);

	printf("두 수 입력 : ");
	scanf("%d %d", &a, &b);

	if (n == 1)
		sum(a, b);
	else if (n == 2)
		product(a, b);

}

void sum(int a, int b)
{
	printf("%d\n", a + b);
}

void product(int a, int b)
{
	printf("%d\n", a * b);
}
