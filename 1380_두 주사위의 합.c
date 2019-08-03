/*
   1380 : 두 주사위의 합
   2019.08.03
   신유리
 */

#include <stdio.h>

int main() {

	int dice1[6] = { 1,2,3,4,5,6 }; // 첫번째 주사위
	int dice2[6] = { 1,2,3,4,5,6 }; // 두번째 주사위
	int num, sum = 0, i, j;

	scanf("%d", &num); // 두 주사위 합 입력

	for (i = 0; i < 6; i++) { // 첫번째 주사위 숫자 하나마다
		for (j = 0; j < 6; j++) { // 두번째 주사위 수를 더해서
			sum = dice1[i] + dice2[j];
			if (sum == num) // 입력한 값과 같으면
				printf("%d %d\n", dice1[i], dice2[j]); // 주사위 경우 수 출력
		}
		
	}

	return 0;
}