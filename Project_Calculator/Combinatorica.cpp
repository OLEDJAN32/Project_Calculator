#include"Header_Combinatorica.h"//������� �.�.

int choose_comb, k=1;

void Menu_Combinatorica()
{
	do
	{
		printf("�������� ����� ��������, ������� �� ������ ���������:\n");
		printf("1) ���������� � �����������\n");
		printf("2) ���������� ��� ����������\n");
		printf("3) ��������� � �����������\n");
		printf("4) ��������� ��� ����������\n");
		printf("5) ������������\n\n");
		printf("��������� �������� ��� �������: "); scanf("%d", &choose_comb);

		while ((choose_comb < 1) || (choose_comb > 5))
		{
			printf("������, ������������ ��� ������ ������� �� ����������, �������� ����������� ������\n");
			printf("������������ ����������� ��� �������: "); scanf("%d", &choose_comb);
			printf("\n");
		}

		switch (choose_comb)
		{
		case 1: razm_povt(); break;
		case 2: razm_no_povt(); break;
		case 3: soch_povt(); break;
		case 4: soch_no_povt(); break;
		case 5: perestanovki(); break;
		}
		printf("����� ����� � ������� ���� ������� 0   ����� ����������, ������� 1\n"); scanf("%d", &k); printf("\n"); printf("\n");
	} while (k == 1);
}

void input()
{

}

void razm_povt()
{

}

void razm_no_povt()
{

}

void soch_povt()
{

}

void soch_no_povt()
{

}

void perestanovki()
{

}
