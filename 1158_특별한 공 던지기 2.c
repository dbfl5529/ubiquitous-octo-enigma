/*
   1158 : Ư���� �� ������ 2
   2019.08.03
   ������
 */

#include <stdio.h>

int main() {

	int n;

	scanf("%d", &n);

	if ((n >= 30 && n <= 40) || (n >= 60 && n <= 70))
		printf("win");
	else
		printf("lose");

	return 0;
}