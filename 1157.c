#include <stdio.h>

int main() {

	float num;

	scanf("%f", &num);

	if (num >= 50.0 && num <= 60.0) // 50�̻� 60���ϸ� win
		printf("win");
	else
		printf("lose"); // �׷��� ������ lose
	
	return 0;

}