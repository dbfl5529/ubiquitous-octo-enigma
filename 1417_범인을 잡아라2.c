/* 
   1417: ������ ��ƶ�2
   2019.08.03
   ������
 */

#include <stdio.h>

int main() {

	int arr[10]; //�Է¹��� �迭 ����
	int i,j, tmp;

	for (i = 0; i < 10; i++) { //10���� Ű �Է� �ޱ�
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < 9; i++) { 
		for (j = 0; j < 9-i; j++) { // �ѹ� ������ �Ǹ� ���ϴ� ��찡 �پ���.
			if (arr[j] < arr[j + 1]) { //�������� ����
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tmp;
			}
		}
	}

	printf("%d", arr[2]);

	return 0;
}