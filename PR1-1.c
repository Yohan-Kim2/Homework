#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_DATA 10
//�� �ҽ��ڵ�� �������� ���� 10���� �޾� ��� , �ּ�, �ִ밪�� ���ϴ� �ڵ��̴�.


void get_data(int* p); // �������� 1~100������ ���� 10���� ����� �ش� �迭�� �����Ѵ�.
void print_data(int* p); // �������� ���� �����͸� ���� ����� ���� ����Ѵ�.
void print_SumAvg(int* p); // �հ踦 ���ϰ� �̸� N_DATA�� ������ ����� ���Ѵ�.
int get_Min(int* p); // �ּ������� ���Ѵ�.
int get_Max(int* p); // �ִ������� ���Ѵ�


int main()
{
	int data[10];
	double mean;
	srand((unsigned)time(NULL));
	get_data(data);
	print_data(data);
	print_SumAvg(data);
	printf("�ְ� ����: %d\n", get_Max(data));
	printf("���� ����: %d\n", get_Min(data));

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
	printf("����: %d��, ��� : %d��\n", total, total / N_DATA);
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

