#include <stdio.h>

//1.题目要求计算文件中的字符数，此时未学如何打开文件。
//int main(void) {
//	int ch, count;
//	count = 0;
//
//	while ((ch = getchar()) != EOF) {
//		count++;
//	}
//	printf("字符数为：%d", count);
//
//	return 0;
//}

//2.
int main(void) {
	int ch, count;
	count = 0;

	printf("输入一段字符，程序会返回其对应的十进制ASCII码：\n");
	while ((ch = getchar()) != EOF) {
		if (ch == '\n') {
			printf("\\n:%d\t", ch);
			count++;
			if (count % 10 == 0)
				printf("\n");
			continue;
		}
		else if (ch == '\t') {
			printf("\\t:%d\t", ch);
			count++;
			if (count % 10 == 0)
				printf("\n");
			continue;
		}

		putchar(ch);
		printf(":%d\t", ch);

		count++;
		if (count % 10 == 0) {
			printf("\n");
		}
	}

	return 0;
}