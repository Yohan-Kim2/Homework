#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_DATA 10
//이 소스코드는 랜덤으로 숫자 10개를 받아 평균 , 최소, 최대값을 구하는 코드이다.


void get_data(int* p); // 랜덤으로 1~100까지의 정수 10개를 만들어 해당 배열에 저장한다.
void print_data(int* p); // 랜덤으로 받은 데이터를 실행 결과와 같이 출력한다.
void print_SumAvg(int* p); // 합계를 구하고 이를 N_DATA로 나누어 평균을 구한다.
int get_Min(int* p); // 최소점수를 구한다.
int get_Max(int* p); // 최대점수를 구한다


int main()
{
	int data[10];
	double mean;
	srand((unsigned)time(NULL));
	get_data(data);
	print_data(data);
	print_SumAvg(data);
	printf("최고 점수: %d\n", get_Max(data));
	printf("최저 점수: %d\n", get_Min(data));

	return 0;
}

void get_data(int* p)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		p[i] = rand() % 100 + 1;
	}
}

void print_data(int* p)
{
	int i;
	printf("(");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}
	printf(")\n");

}

void print_SumAvg(int* p)
{
	int total = 0;
	int i;

	for (i = 0; i < 10; i++)
		total += p[i];
	printf("총점: %d점, 평균 : %d점\n", total, total / N_DATA);
}

int get_Min(int* p)
{
	int Min = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			Min = p[i];
		}

		if (Min > p[i])
			Min = p[i];
	}

	return Min;


}

int get_Max(int* p)
{
	int Max = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			Max = p[i];
		}

		if (Max < p[i])
			Max = p[i];
	}

	return Max;


}

