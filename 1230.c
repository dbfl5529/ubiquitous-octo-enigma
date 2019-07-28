#include <stdio.h>

int main() {

	int num[3];	// 터널 높이 3개를 입력하기 위해 배열 선언
	int i;

	for (i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 3; i++) {
		if (num[i] <= 170) {	// 터덜 높이가 170이하이면 
			printf("CRASH %d", num[i]);	// 충돌
			break;
		}
	}
	
	if (i == 3)	//터널 3개 모두 통과 시
		printf("PASS");	//패스
	
	return 0;

}