/*
   1288 : nCr(Tiny)
   2019.08.03
   신유리
 */

#include <stdio.h>

int main() {

	int n, r, i;
	int res1 = 1, res2 = 1, res3 = 1;
	scanf("%d %d", &n, &r);

	for (i = n; i > 0; i--) {
		res1 *= i;
	}

	for (i = n - r; i > 0; i--) {
		res2 *= i;
	}

	for (i = r; i > 0; i--) {
		res3 *= i;
	}

	printf("%d", res1 / (res2*res3));

	return 0;
}

// 재귀함수로 소스 코드 작성해보기