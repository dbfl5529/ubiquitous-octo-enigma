/*
   1158 : 특별한 공 던지기 2
   2019.08.03
   신유리
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