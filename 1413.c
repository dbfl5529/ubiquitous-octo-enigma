#include <stdio.h>
#include <string.h>

int main() {

	char arr[101], arr_copy[101];
	int i, len;

	gets(arr);

	len = strlen(arr); // �迭 ���� ���ϱ�
	for (i = 0; i < len; i++) {
		arr_copy[i] = arr[len-(i+1)]; // �Է� ���� ���ڿ��� �� ���� ���ο� �迭�� ����
		printf("%c", arr_copy[i]);
	}

	return 0;
}