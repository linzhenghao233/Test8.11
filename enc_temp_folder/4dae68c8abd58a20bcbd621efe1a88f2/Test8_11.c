#include <stdio.h>

//1.
int main(void) {
	int ch, count;
	count = 0;

	while ((ch = getchar()) != EOF) {
		count++;
	}
	printf("�ַ���Ϊ��%d", count);

	return 0;
}