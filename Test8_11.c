#include <stdio.h>
#include <ctype.h>

//1.��ĿҪ������ļ��е��ַ�������ʱδѧ��δ��ļ���
//int main(void) {
//	int ch, count;
//	count = 0;
//
//	while ((ch = getchar()) != EOF) {
//		count++;
//	}
//	printf("�ַ���Ϊ��%d", count);
//
//	return 0;
//}

//2.
//int main(void) {
//	int ch, count;
//	count = 0;
//
//	printf("����һ���ַ�������᷵�����Ӧ��ʮ����ASCII�룺\n");
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
//	printf("����һ��ͬʱ����д��Сд��ĸ�Ļ���\n");
//	while ((ch = getchar()) != EOF) {
//		if (ch >= 'A' && ch <= 'Z')
//			capital++;
//		else if (ch >= 'a' && ch <= 'z')
//			lowercase++;
//
//		if (ch == '\n')
//			break;
//	}
//	printf("��д��ĸ����%d��Сд��ĸ����%d", capital, lowercase);
//
//	return 0;
//}

//4.
//int main(void) {
//	int ch, word, count;
//	word = count = 0;
//
//	printf("��Ӣ������һ�λ���");
//	while ((ch = getchar()) != EOF) {
//		if (ch == ' ') {
//			word++;
//			continue;
//		}
//		else if (ispunct(ch)) {
//			continue;
//		}
//		else if (ch == '\n') {
//			word++;
//			break;
//		}
//		else if(isalpha(ch)){
//			count++;
//		}
//	}
//	printf("��������%d����ĸ����%d��ƽ��ÿ�����ʵ��ַ���%0.2f", word, count, (float)count / word);
//
//	return 0;
//}

//5.
//int main(void) {
//	char ch;
//	int guess, min, max;
//	guess = 50, min = 1, max = 100;
//
//	printf("��һ��1-100���������ó���²�������֣��´��˻ظ�big����С�˻ظ�small���¶��˻ظ�yes��\n");
//	printf("���Ȳ���%d\n", guess);
//	while ((ch = getchar()) != 'y') {
//		printf("emmm�Ǿ���");
//		if (ch == 'b') {
//			max = guess;
//			guess = (min + max) / 2;
//			printf("%d\n", guess);
//		}
//		else if (ch == 's') {
//			min = guess;
//			guess = (min + max) / 2;
//			printf("%d\n", guess);
//		}
//		else
//			printf("��������ȷ�ĵ��ʣ�");
//		while ((ch = getchar()) != '\n')
//			continue;
//	}
//	printf("��Ү�����������%d", guess);
//
//	return 0;
//}

//6.