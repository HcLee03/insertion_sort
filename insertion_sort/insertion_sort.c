//insertion sort

#include <stdio.h>

char Arr[16][13] = { "Sindang", "Wangsimni", "Ttukseom", "Jamsillaru", "Jamsil", "Samseong", "Yeoksam", "Gangnam", "Seocho", "Nakseongdae", "Bangbae", "Bongcheon", "Dangsan", "Hapjeong", "Ahyeon", "Chungjeongno" };

void printchar(void);//문자열 출력
void ascending(void); //오름차순 출력함수
void descending(void); //내림차순 출력함수
void swap(int);
int main(void)
{
	printf("INSERTION SORT \n \n");
	printf("------------------------------------------ \n");
	printf("[Input string] : ");
	printchar(); //문자열 출력
	printf("[Ascending order] : ");
	ascending(); //오름차순 정렬
	printchar(); //문자열 출력
	printf("[Descending order ] : ");
	descending(); //내림차순 정렬
	printchar(); //문자열 출력
	printf("------------------------------------------ \n \n");
	printf("Press \"Enter\" to quit the program...: ");
	//Enter 키 입력 시 프로그램 종료
	char c;
	c = getchar();
	while
		(c != '\n')
		c = getchar();
	return 0;
}

void printchar(void)// 문자열 출력함수
{
	for (int i = 0; i < 16; i++)
	{
		printf("%s", Arr[i]);
		if (i < 15)
			printf(", ");
		else
			printf("\n");
	}
}

void ascending(void) //오름차순 출력함수
{
	return;
}

void descending(void) //내림차순 출력함수
{
	return;
}

void swap(int a) //단어 순서 변경
{
	char temp;
	for (int i = 0; i < 13; i++)
	{
		temp = Arr[a][i];
		Arr[a][i] = Arr[a + 1][i];
		Arr[a + 1][i] = temp;
	}
	return;
}