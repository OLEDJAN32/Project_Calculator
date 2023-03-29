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
		printf("Выберете номер калькулятора, который вы хотите использовать:\n");
		printf("1) Матричный калькулятор\n");
		printf("2) Калькулятор формул комбинаторики\n");
		printf("3) Калькулятор многочленов\n");
		printf("4) Калькулятор вероятностей и математической статистики\n");
		printf("5) Калькулятор для работы с функциями\n");
		printf("6) Калькулятор обыкновенных дробей\n\n");
		printf("Использовать калькулятор под номером: "); scanf("%d", &choose);

		while ((choose < 1) || (choose > 6))
		{
			printf("Ошибка, калькулятора под данным номером не существует, выберите калькулятор заново\n");
			printf("Использовать калькулятор под номером: "); scanf("%d", &choose);
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
		
		printf("Выйти из программы?\n");
		printf("Чтобы выйти нажмите 0   Чтобы продолжить работу, нажмите 1\n"); scanf("%d", &again); printf("\n\n");
	} while (again == 1);
	
	return 0;
}
