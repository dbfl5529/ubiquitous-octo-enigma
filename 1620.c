#include <stdio.h>

int SUM(int n); // ���ڸ� �� ���ϴ� �Լ�

int main() {

	int n;

	scanf("%d", &n); 

	do {
		n = SUM(n); // �Լ� ȣ��
	} while (n >= 10); // �Լ��� ���� ���� ���ڸ��� �̻��� �� �ݺ�

	printf("%d", n);

	return 0;

}

int SUM(int n) {

	int res = 0;

	while (1) {
		res = res + (n % 10); // �� �ڸ� �� ���ؼ� ���ϱ�
		n = n / 10; // ���� �ڸ��� �� ��
		if (n == 0) // ���� 0�̸� Ż��
			break;
	}

	return res;

}