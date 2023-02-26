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
//int main(void) {
//	int ch, word, count;
//	word = count = 0;
//
//	printf("用英语输入一段话：");
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
//	printf("单词数：%d，字母数：%d，平均每个单词的字符数%0.2f", word, count, (float)count / word);
//
//	return 0;
//}

//5.
//int main(void) {
//	char ch;
//	int guess, min, max;
//	guess = 50, min = 1, max = 100;
//
//	printf("想一个1-100的整数，让程序猜测这个数字，猜大了回复big，猜小了回复small，猜对了回复yes。\n");
//	printf("我先猜是%d\n", guess);
//	while ((ch = getchar()) != 'y') {
//		printf("emmm那就是");
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
//			printf("请输入正确的单词！");
//		while ((ch = getchar()) != '\n')
//			continue;
//	}
//	printf("好耶！你想的数是%d", guess);
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

	printf("请输入你的选择：\n");
	printf("a.加法     b.减法\n");
	printf("c.乘法     d.除法\n");
	printf("q.退出程序\n");
	
	while ((ch = getchar()) != 'q') {
		if (ch == 'a') {
			printf("输入第一个数字：");
			while (!scanf_s("%f", &num1)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("不是数字，请再次输入：");
				continue;
			}

			printf("输入第二个数字：");
			while (!scanf_s("%f", &num2)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("不是数字，请再次输入：");
				continue;
			}

			printf("%g + %g = %g\n", num1, num2, (double)num1 + num2);

			printf("请再次输入你的选择：\n");
			printf("a.加法     b.减法\n");
			printf("c.乘法     d.除法\n");
			printf("q.退出程序\n");

			while ((ch = getchar()) != '\n')		//去除回车的影响
				continue;
		}
		else if (ch == 'b') {
			printf("输入第一个数字：");
			while (!scanf_s("%f", &num1)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("不是数字，请再次输入：");
				continue;
			}

			printf("输入第二个数字：");
			while (!scanf_s("%f", &num2)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("不是数字，请再次输入：");
				continue;
			}

			printf("%g - %g = %g\n", num1, num2, (double)num1 - num2);

			printf("请再次输入你的选择：\n");
			printf("a.加法     b.减法\n");
			printf("c.乘法     d.除法\n");
			printf("q.退出程序\n");

			while ((ch = getchar()) != '\n')		//去除回车的影响
				continue;
		}
		else if (ch == 'c') {
			printf("输入第一个数字：");
			while (!scanf_s("%f", &num1)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("不是数字，请再次输入：");
				continue;
			}

			printf("输入第二个数字：");
			while (!scanf_s("%f", &num2)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("不是数字，请再次输入：");
				continue;
			}

			printf("%g * %g = %g\n", num1, num2, (double)num1 * num2);

			printf("请再次输入你的选择：\n");
			printf("a.加法     b.减法\n");
			printf("c.乘法     d.除法\n");
			printf("q.退出程序\n");

			while ((ch = getchar()) != '\n')		//去除回车的影响
				continue;
		}
		else if (ch == 'd') {
			printf("输入第一个数字：");
			while (!scanf_s("%f", &num1)) {
				while ((ch = getchar()) != '\n')
					putchar(ch);
				printf("不是数字，请再次输入：");
				continue;
			}

			printf("输入第二个数字：");
			while (!scanf_s("%f", &num2) || num2 == 0) {
				if (num2 == 0) {
					printf("0不能作为除数，请再次输入：");
					num2++;		//改变num2的值，使其不影响判断。
				}	
				else {
					while ((ch = getchar()) != '\n')
						putchar(ch);	
					printf("不是数字，请再次输入：");
					continue;
				}
			}

			printf("%g / %g = %g\n", num1, num2, (double)num1 / num2);

			printf("请再次输入你的选择：\n");
			printf("a.加法     b.减法\n");
			printf("c.乘法     d.除法\n");
			printf("q.退出程序\n");

			while ((ch = getchar()) != '\n')		//去除回车的影响
				continue;
		}
		else {
			printf("请输入正确的选项（a、b、c、d、q）:\n");
			printf("请输入你的选择：\n");
			printf("a.加法     b.减法\n");
			printf("c.乘法     d.除法\n");
			printf("q.退出程序\n");
			continue;
		}	
	}
	printf("结束。");

	return 0;
}