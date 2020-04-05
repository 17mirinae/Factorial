#include <stdio.h>

int fact(int n);

int main(void)
{
	int n;

	printf("팩토리얼 함수 몇 번까지: ");
	scanf_s("%d", &n);

	printf("팩토리얼 함수의 값: %d\n", fact(n));

	return 0;
}
int fact(int n)
{
	int value;

	if (n <= 1)
	{
		printf("fact(1) 호출!\n");
		printf("fact(1) 1 반환!\n");
		return 1;
	}
	else
	{
		printf("fact(%d) 호출!\n", n);
		value = n * fact(n - 1);
		printf("fact(%d) %d 반환!\n", n, value);
	}
	return value;
}
