#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	// 배열은 30개의 공간을 가지지만, 문자의 길이는 7
	char str[30] = "MONSTAX";

	// 문자의 길이 구하는 함수 -> strlen
	int len = strlen(str);
	printf("문자열의 길이 : %d \n", len);

	// 문자열 복사 strcpy(복사할 대상, 복사할 문자열)
	char cpy_str[15];
	strcpy(cpy_str, str);
	printf("문자열 복사 : %s \n", cpy_str);

	// 문자열 덧붙이기 strcat(덧붙일 대상, 덧붙일 문자열)
	strcat(cpy_str, "&BEBE");
	printf("문자열 덧붙이기 : %s \n", cpy_str);

	// 문자열 비교하기 strcmp
	// 0일 경우 같다는 의미이다
	if (strcmp(str, cpy_str) == 0)
		printf("같습니다 \n");
	else printf("같지않습니다. \n");
}