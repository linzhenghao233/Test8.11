#include <stdio.h>
#include <ctype.h>

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
//int main(void) {
//	int ch, count;
//	count = 0;
//
//	printf("输入一段字符，程序会返回其对应的十进制ASCII码：\n");
//	while ((ch = getchar()) != EOF) {
//		if (ch == '\n') {
//			printf("\\n:%d\t", ch);
//			count++;
//			if (count % 10 == 0)
//				printf("\n");
//			continue;
//		}
//		else if (ch == '\t') {
//			printf("\\t:%d\t", ch);
//			count++;
//			if (count % 10 == 0)
//				printf("\n");
//			continue;
//		}
//
//		putchar(ch);
//		printf(":%d\t", ch);
//
//		count++;
//		if (count % 10 == 0) {
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//3.
//int main(void) {
//	int ch, capital, lowercase;
//	capital = lowercase = 0;
//
//	printf("输入一段同时含大写和小写字母的话：\n");
//	while ((ch = getchar()) != EOF) {
//		if (ch >= 'A' && ch <= 'Z')
//			capital++;
//		else if (ch >= 'a' && ch <= 'z')
//			lowercase++;
//
//		if (ch == '\n')
//			break;
//	}
//	printf("大写字母数：%d，小写字母数：%d", capital, lowercase);
//
//	return 0;
//}

//4.
int main(void) {
	int ch, word, count;
	word = count = 0;

	while ((ch = getchar()) != EOF) {
		if (ch == ' ') {
			word++;
			continue;
		}
		else if (ispunct(ch)) {
			continue;
		}
		else if (ch == '\n') {
			word++;
			break;
		}
		else if(isalpha(ch)){
			count++;
		}
	}
	printf("单词数：%d，字母数：%d，平均每个单词的字符数%0.2f", word, count, (float)count / word);

	return 0;
}