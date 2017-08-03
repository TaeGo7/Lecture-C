#include <stdio.h>

void GcdLcm(int a, int b);

void main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	GcdLcm(a, b);
}

void GcdLcm(int a, int b)
{
	int min, max, i, gcd = 0, lcm = 0;

	max = (a>b)?a:b;
	min = (a<b)?a:b;

	for ( i = max ; i <= a*b ; i++ ) {
		if(i%a==0 && i%b==0) { 
			gcd = i;
			break;
		}
	}
	printf("최소공배수 = %d\n", gcd);
	
	for( i = 1 ; i <= min ; i++ ) {
		if(a%i == 0 && b%i == 0) {
			lcm = i;
		}
	}
	printf("최대공약수 = %d\n", lcm);
}
