#include <stdio.h>
#include <string.h>

int main() {

	char arr[101], arr_copy[101];
	int i, len;

	gets(arr);

	len = strlen(arr); // 배열 길이 구하기
	for (i = 0; i < len; i++) {
		arr_copy[i] = arr[len-(i+1)]; // 입력 받은 문자열이 끝 부터 새로운 배열에 저장
		printf("%c", arr_copy[i]);
	}

	return 0;
}