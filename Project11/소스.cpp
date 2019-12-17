#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	int intpow(int m, int n);
	int n1, n2;

	printf("두 개의 정수를 입력: ");
	scanf("%d %d", &n1, &n2);
	printf("%d 의 %d제곱 = %d", n1, n2, intpow(n1, n2));

}

int intpow(int m, int n)
{
	int output = 1;
	for (int i = 0; i < n; i++)
	{
		output *= m;
	}

	return output;
}