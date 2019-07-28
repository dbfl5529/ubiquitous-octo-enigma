#include <stdio.h>

int SUM(int n); // 각자리 수 더하는 함수

int main() {

	int n;

	scanf("%d", &n); 

	do {
		n = SUM(n); // 함수 호출
	} while (n >= 10); // 함수의 리턴 값이 두자리수 이상일 때 반복

	printf("%d", n);

	return 0;

}

int SUM(int n) {

	int res = 0;

	while (1) {
		res = res + (n % 10); // 각 자릿 수 구해서 더하기
		n = n / 10; // 더한 자리수 뺀 값
		if (n == 0) // 몫이 0이면 탈출
			break;
	}

	return res;

}