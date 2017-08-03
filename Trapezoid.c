#include <stdio.h>

void main()
{
	double x, y, h, T;

	printf("가로 세로 높이 순으로 입력 : ");
	scanf("%lf %lf %lf", &x, &y, &h);

	T = (x + y)*h / 2.0;

	printf("사다리꼴의 넓이 = %lf", T);
}
