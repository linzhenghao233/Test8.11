#include <stdio.h>

//1.
int main(void) {
	int ch, count;
	count = 0;

	while ((ch = getchar()) != EOF) {
		count++;
	}
	printf("×Ö·ûÊıÎª£º%d", count);

	return 0;
}