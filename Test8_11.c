#include <stdio.h>

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
int main(void) {
	int ch, count;
	count = 0;

	printf("����һ���ַ�������᷵�����Ӧ��ʮ����ASCII�룺\n");
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