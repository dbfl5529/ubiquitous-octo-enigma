#include <stdio.h>

int main() {

	float num;

	scanf("%f", &num);

	if (num >= 50.0 && num <= 60.0) // 50이상 60이하면 win
		printf("win");
	else
		printf("lose"); // 그렇지 않으면 lose
	
	return 0;

}