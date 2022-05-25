//insertion sort

#include <stdio.h>

char Arr[16][13] = { "Sindang", "Wangsimni", "Ttukseom", "Jamsillaru", "Jamsil", "Samseong", "Yeoksam", "Gangnam", "Seocho", "Nakseongdae", "Bangbae", "Bongcheon", "Dangsan", "Hapjeong", "Ahyeon", "Chungjeongno" };

void printchar(void);//문자열 출력
void ascending(void); //오름차순 정렬함수
void descending(void); //내림차순 정렬함수
void back(int); //문자열을 현재 위치에서 한 칸 뒤로 이동
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

void printchar(void) // 문자열 출력함수
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
	for (int a = 1; a < 16; a++)
	{
		for (int k = 0; k < 13; k++) //현재 삽입할 문자열을 TempArr에 저장
		{
			TempArr[0][k] = Arr[a][k];
		}

		//TempArr에 저장된 문자열이 있던 위치에서부터 앞으로 순차적으로 비교
		//앞의 문자열이 더 작으면 그 문자열 뒤에 삽입
		//반대일 경우, 앞의 문자열을 뒤로 한 칸 이동시키고 다음 문자열 비교
		for (int step = 0, num = a - 1; (step < 13 && num>=-1); step++)
		{
			if (num == -1)
			{
				for (int p = 0; p < 13; p++)
				{
					Arr[num + 1][p] = TempArr[0][p];
				}
				break;
			}
			else if (Arr[num][step] > TempArr[0][step])
			{
				back(num);
				num--;
				step = -1;
			}
			else if (Arr[num][step] == TempArr[0][step])
				continue;
			else
			{
				for (int p = 0; p < 13; p++)
				{
					Arr[num + 1][p] = TempArr[0][p];
				}
				break;
			}
		}
	}
	return;
}

void descending(void) //내림차순 정렬함수
{
	char TempArr[1][13];
	for (int a = 1; a < 16; a++)
	{
		for (int k = 0; k < 13; k++) //현재 삽입할 문자열을 TempArr에 저장
		{
			TempArr[0][k] = Arr[a][k];
		}

		//TempArr에 저장된 문자열이 있던 위치에서부터 앞으로 순차적으로 비교
		//앞의 문자열이 더 크면 그 문자열 뒤에 삽입
		//반대일 경우, 앞의 문자열을 뒤로 한 칸 이동시키고 다음 문자열 비교
		for (int step = 0, num = a - 1; (step < 13 && num >= -1); step++)
		{
			if (num == -1)
			{
				for (int p = 0; p < 13; p++)
				{
					Arr[num + 1][p] = TempArr[0][p];
				}
				break;
			}
			else if (Arr[num][step] < TempArr[0][step])
			{
				back(num);
				num--;
				step = -1;
			}
			else if (Arr[num][step] == TempArr[0][step])
				continue;
			else
			{
				for (int p = 0; p < 13; p++)
				{
					Arr[num + 1][p] = TempArr[0][p];
				}
				break;
			}
		}
	}
	return;
}

void back(int num) //문자열을 현재 위치에서 한 칸 뒤로 이동
{
	for (int step = 0; step < 13; step++)
	{
		Arr[num + 1][step] = Arr[num][step];
	}
	return;
}
