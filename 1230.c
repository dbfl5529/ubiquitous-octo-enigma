#include <stdio.h>

int main() {

	int num[3];	// �ͳ� ���� 3���� �Է��ϱ� ���� �迭 ����
	int i;

	for (i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 3; i++) {
		if (num[i] <= 170) {	// �ʹ� ���̰� 170�����̸� 
			printf("CRASH %d", num[i]);	// �浹
			break;
		}
	}
	
	if (i == 3)	//�ͳ� 3�� ��� ��� ��
		printf("PASS");	//�н�
	
	return 0;

}