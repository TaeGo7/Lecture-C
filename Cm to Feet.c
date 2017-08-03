#include <stdio.h>

void main()
{
	int cm;
	double feet;

	printf("키(cm)입력 : ");
	scanf("%d", &cm);

	feet = 0.0328084 * cm;

	printf("%d(cm)는 %lffeet", cm, feet);
}
