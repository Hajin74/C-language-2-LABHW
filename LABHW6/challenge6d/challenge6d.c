// 컴퓨터학과 20200988 유하진
#include <stdio.h>
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0
BOOL isPalindrome(char str[]);

int main(void) {
	char str[MAX_STRING];

	printf("* Palindrome 체크\n\n");
	printf("문자열 입력(문자수 %d 이하): ", MAX_STRING);
	scanf_s("%s", str, MAX_STRING);

	if (isPalindrome(str))
		printf("\"%s\" is a Palindrome\n\n", str); 
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);
	return 0;
}

BOOL isPalindrome(char s[]) {
	int i, index;

	for (i = 0; s[i] != '\0'; i++);
	index = i;

	for (i = 0; i < index / 2; i++) {
		if (s[i] != s[index - i - 1]) {
			return FALSE;
		}
	}

	return TRUE;
}