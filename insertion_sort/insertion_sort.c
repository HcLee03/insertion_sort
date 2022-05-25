//insertion sort

#include <stdio.h>

char Arr[16][13] = { "Sindang", "Wangsimni", "Ttukseom", "Jamsillaru", "Jamsil", "Samseong", "Yeoksam", "Gangnam", "Seocho", "Nakseongdae", "Bangbae", "Bongcheon", "Dangsan", "Hapjeong", "Ahyeon", "Chungjeongno" };

void printchar(void);//문자열 출력
void ascending(void); //오름차순 정렬함수
void descending(void); //내림차순 정렬함수
void back(int);//단어 순서 변경
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

void ascending(void) //오름차순 정렬함수
{
	char TempArr[1][13];
	for (int i = 1; i < 16; i++)
	{
		for (int k = 0; k < 13; k++)
		{
		TempArr[0][k] = Arr[i][k];
		}
		printf("%s \n", TempArr[0]);
		for (int x = 0, a = i- 1; (x < 13 && a>=-1); x++)
		{
		printf("%d \n", a);
		if (a == -1)
		{
		for (int p = 0; p < 13; p++)
		{
		Arr[a + 1][p] = TempArr[0][p];
		}
		break;
		}
		else if (Arr[a][x] > TempArr[0][x])
		{
		back(a);
		a--;
		x = -1;
		}
		else if (Arr[a][x] == TempArr[0][x])
		continue;
		else
		{
		for (int p = 0; p < 13; p++)
		{
		Arr[a + 1][p] = TempArr[0][p];
		}
		printf("%s임 \n", Arr[a + 1]);
		break;
		}

		}

	}
	return;
}

void descending(void) //내림차순 정렬함수
{
	return;
}

void back(int a) //단어 뒤로 이동
{
	for (int i = 0; i < 13; i++)
	{
		Arr[a + 1][i] = Arr[a][i];
	}
	return;
}
