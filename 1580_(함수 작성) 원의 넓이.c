/*
   1580 : (�Լ� �ۼ�) ���� ����
   2019.08.03
   ������
 */

#include <stdio.h>

float circle(int r);


int main() {

	int r;

	scanf("%d", &r);
	printf("%.2f", circle(r));

	return 0;
}

float circle(int r) {

	return 3.14*r*r;

}