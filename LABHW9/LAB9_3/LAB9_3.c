// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str1[15] = "ABCDED";
	char str2[15] = "abcde";
	char str3[15] = "1234";
	int n;
	char s[] = "Life is short, but art is long";
	char delimiters[] = " ,\n\0"; // �� ���� �и� ���ڵ�(����,�޸�,�ٹٲ�,�ι���) �����Ѵ�
	char* token;

	printf("��)str1 �� ���� = %d\n", strlen(str1)); // 6
	printf(" str2 �� ���� = %d\n", strlen(str2)); // 5

	strcpy(str1, str2);// str2�� str1�� ����
	printf("��)str1 = %s\t\tstr2 = %s\n", str1, str2); // abcde abcde

	strncpy(str1, str3, 2); // strncpy �� �ڵ����� ��\0���� ���� ������ ��������!
	printf("��)str1 = %s\t\tstr3 = %s\n", str1, str3); // 12cde 1234

	strcat(str1, str2);
	printf("��)str1 = %s\tstr2 = %s\n", str1, str2); // 12cdeabcde abcde

	strncat(str1, str3, 2); // strncat �� ��\0���� �ڵ����� �ִ´�! 
	printf("��)str1 = %s\tstr3 = %s\n", str1, str3); // 12cdeabcde12 1234

	printf("��)%d %d %d\n", strcmp("aaa", "abc"), strcmp("aaa", "aaa"), strcmp("ddd", "ccc", str3)); // - 0 +

	strcpy(str1, "111"); // "111"�� str1�� ���� ������
	n = atoi(str1) * 7;
	printf("��)str1 �� 7 �� �� ���� %d\n", n); // 777

	printf("��)\n"); // �߿�!!
	n = 1;
	token = strtok(s, delimiters);

	
	while (token != NULL)
	{
		printf("%d ��° ��ū�� %s\n", n++, token);
		token = strtok(NULL, delimiters);
	}
	
}