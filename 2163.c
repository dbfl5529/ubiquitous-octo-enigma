#include <stdio.h>

int main() {

	int n, m, cnt;

	scanf("%d %d", &n, &m); // n*m 크기

	cnt = n * m - 1; // 최소 횟수를 구하는 식

	printf("%d", cnt);

	return 0;
}