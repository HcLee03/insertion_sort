//insertion sort

#include <stdio.h>

char Arr[16][13] = { "Sindang", "Wangsimni", "Ttukseom", "Jamsillaru", "Jamsil", "Samseong", "Yeoksam", "Gangnam", "Seocho", "Nakseongdae", "Bangbae", "Bongcheon", "Dangsan", "Hapjeong", "Ahyeon", "Chungjeongno" };

void printchar(void);//���ڿ� ���
void ascending(void); //�������� ����Լ�
void descending(void); //�������� ����Լ�
void swap(int);
int main(void)
{
	printf("INSERTION SORT \n \n");
	printf("------------------------------------------ \n");
	printf("[Input string] : ");
	printchar(); //���ڿ� ���
	printf("[Ascending order] : ");
	ascending(); //�������� ����
	printchar(); //���ڿ� ���
	printf("[Descending order ] : ");
	descending(); //�������� ����
	printchar(); //���ڿ� ���
	printf("------------------------------------------ \n \n");
	printf("Press \"Enter\" to quit the program...: ");
	//Enter Ű �Է� �� ���α׷� ����
	char c;
	c = getchar();
	while
		(c != '\n')
		c = getchar();
	return 0;
}

void printchar(void)// ���ڿ� ����Լ�
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

void ascending(void) //�������� ����Լ�
{
	return;
}

void descending(void) //�������� ����Լ�
{
	return;
}

void swap(int a) //�ܾ� ���� ����
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