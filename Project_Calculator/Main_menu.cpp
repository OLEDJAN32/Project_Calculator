#include<stdio.h>
#include<Windows.h>
#include"Header_Combinatorica.h"
#include "HeaderMatrices.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int again = 1, choose;
	do
	{
		printf("�������� ����� ������������, ������� �� ������ ������������:\n");
		printf("1) ��������� �����������\n");
		printf("2) ����������� ������ �������������\n");
		printf("3) ����������� �����������\n");
		printf("4) ����������� ������������ � �������������� ����������\n");
		printf("5) ����������� ��� ������ � ���������\n");
		printf("6) ����������� ������������ ������\n\n");
		printf("������������ ����������� ��� �������: "); scanf("%d", &choose);

		while ((choose < 1) || (choose > 6))
		{
			printf("������, ������������ ��� ������ ������� �� ����������, �������� ����������� ������\n");
			printf("������������ ����������� ��� �������: "); scanf("%d", &choose);
			printf("\n");
		}
		
		switch (choose)
		{
		case 1: Menu_Matrix(); break;
		case 2: Menu_Combinatorica(); break;
		//case 3: Menu_Polynomails(); break;
		//case 4: 
		//case 5: Menu_Function(); break;
		//case 6: Menu_Drobi(); break;
		}

		printf("����� ����� ������� 0   ����� ����������, ������� 1\n"); scanf("%d", &again); printf("\n"); printf("\n");
	} while (again == 1);
	
	return 0;
}