#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	// �迭�� 30���� ������ ��������, ������ ���̴� 7
	char str[30] = "MONSTAX";

	// ������ ���� ���ϴ� �Լ� -> strlen
	int len = strlen(str);
	printf("���ڿ��� ���� : %d \n", len);

	// ���ڿ� ���� strcpy(������ ���, ������ ���ڿ�)
	char cpy_str[15];
	strcpy(cpy_str, str);
	printf("���ڿ� ���� : %s \n", cpy_str);

	// ���ڿ� �����̱� strcat(������ ���, ������ ���ڿ�)
	strcat(cpy_str, "&BEBE");
	printf("���ڿ� �����̱� : %s \n", cpy_str);

	// ���ڿ� ���ϱ� strcmp
	// 0�� ��� ���ٴ� �ǹ��̴�
	if (strcmp(str, cpy_str) == 0)
		printf("�����ϴ� \n");
	else printf("�����ʽ��ϴ�. \n");
}