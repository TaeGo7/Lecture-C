#include <stdio.h>

void main()
{
	int x, y, B, S, i, sum = 0;

	printf("두 수 입력 : ");
	scanf("%d %d", &x, &y);

	B = (x > y) ? x : y;
	S = (x < y) ? x : y;

	for (i = x; i <= B; i++) {
		sum += i;
	}
	printf("%d ~ %d 까지의 합 = %d\n", x, y, sum);
}
