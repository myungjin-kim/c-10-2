#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	int intpow(int m, int n);
	int n1, n2;

	printf("�� ���� ������ �Է�: ");
	scanf("%d %d", &n1, &n2);
	printf("%d �� %d���� = %d", n1, n2, intpow(n1, n2));

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