/* 
   1417: 범인을 잡아라2
   2019.08.03
   신유리
 */

#include <stdio.h>

int main() {

	int arr[10]; //입력받을 배열 선언
	int i,j, tmp;

	for (i = 0; i < 10; i++) { //10명의 키 입력 받기
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < 9; i++) { 
		for (j = 0; j < 9-i; j++) { // 한번 정렬이 되면 비교하는 경우가 줄어든다.
			if (arr[j] < arr[j + 1]) { //내림차순 정렬
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tmp;
			}
		}
	}

	printf("%d", arr[2]);

	return 0;
}