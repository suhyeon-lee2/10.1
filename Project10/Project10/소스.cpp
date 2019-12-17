
#include <stdio.h>
int main() {
	printf("=== 구구단 출력 ===\n");
	for (int i = 2;i <= 9; i++) {
		printf("%d단 출력\n",i);
		for (int j = 2;j<= 9;j++) {
			printf("%d * %d = %2d", i, j, i * j);
			printf("%\n");
		}
	}


}