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
//char get_first(void) {
//	int ch, first_word = 0;
//
//	ch = getchar();
//	if (!isspace(ch))
//		first_word = ch;
//	while (getchar() != '\n')
//		continue;
//
//	return first_word;
//}

//7.

//8.
int main(void) {
	float num1, num2;
	int ch;

	printf("���������ѡ��\n");
	printf("a.�ӷ�     b.����\n");
	printf("c.�˷�     d.����\n");
	printf("q.�˳�����\n");
	
	while ((ch = getchar()) != 'q') {
		if (ch == 'a') {
			printf("�����һ�����֣�");
			while (!scanf_s("%f", &num1)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("�������֣����ٴ����룺");
				continue;
			}

			printf("����ڶ������֣�");
			while (!scanf_s("%f", &num2)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("�������֣����ٴ����룺");
				continue;
			}

			printf("%g + %g = %g\n", num1, num2, (double)num1 + num2);

			printf("���ٴ��������ѡ��\n");
			printf("a.�ӷ�     b.����\n");
			printf("c.�˷�     d.����\n");
			printf("q.�˳�����\n");

			while ((ch = getchar()) != '\n')		//ȥ���س���Ӱ��
				continue;
		}
		else if (ch == 'b') {
			printf("�����һ�����֣�");
			while (!scanf_s("%f", &num1)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("�������֣����ٴ����룺");
				continue;
			}

			printf("����ڶ������֣�");
			while (!scanf_s("%f", &num2)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("�������֣����ٴ����룺");
				continue;
			}

			printf("%g - %g = %g\n", num1, num2, (double)num1 - num2);

			printf("���ٴ��������ѡ��\n");
			printf("a.�ӷ�     b.����\n");
			printf("c.�˷�     d.����\n");
			printf("q.�˳�����\n");

			while ((ch = getchar()) != '\n')		//ȥ���س���Ӱ��
				continue;
		}
		else if (ch == 'c') {
			printf("�����һ�����֣�");
			while (!scanf_s("%f", &num1)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("�������֣����ٴ����룺");
				continue;
			}

			printf("����ڶ������֣�");
			while (!scanf_s("%f", &num2)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("�������֣����ٴ����룺");
				continue;
			}

			printf("%g * %g = %g\n", num1, num2, (double)num1 * num2);

			printf("���ٴ��������ѡ��\n");
			printf("a.�ӷ�     b.����\n");
			printf("c.�˷�     d.����\n");
			printf("q.�˳�����\n");

			while ((ch = getchar()) != '\n')		//ȥ���س���Ӱ��
				continue;
		}
		else if (ch == 'd') {
			printf("�����һ�����֣�");
			while (!scanf_s("%f", &num1)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("�������֣����ٴ����룺");
				continue;
			}

			printf("����ڶ������֣�");
			while (!scanf_s("%f", &num2) || num2 == 0) {
				if (num2 == 0) {
					printf("0������Ϊ���������ٴ����룺");
					num2++;		//�ı�num2��ֵ��ʹ�䲻Ӱ���жϡ�
				}	
				else {
					while ((ch = getchar()) != '\n')
						putchar(ch);	
					printf("�������֣����ٴ����룺");
					continue;
				}
			}

			printf("%g / %g = %g\n", num1, num2, (double)num1 / num2);

			printf("���ٴ��������ѡ��\n");
			printf("a.�ӷ�     b.����\n");
			printf("c.�˷�     d.����\n");
			printf("q.�˳�����\n");

			while ((ch = getchar()) != '\n')		//ȥ���س���Ӱ��
				continue;
		}
		else {
			printf("��������ȷ��ѡ�a��b��c��d��q��:\n");
			printf("���������ѡ��\n");
			printf("a.�ӷ�     b.����\n");
			printf("c.�˷�     d.����\n");
			printf("q.�˳�����\n");
			continue;
		}	
	}
	printf("������");

	return 0;
}