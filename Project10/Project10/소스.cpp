
#include <stdio.h>
int main() {
	printf("=== ������ ��� ===\n");
	for (int i = 2;i <= 9; i++) {
		printf("%d�� ���\n",i);
		for (int j = 2;j<= 9;j++) {
			printf("%d * %d = %2d", i, j, i * j);
			printf("%\n");
		}
	}


}