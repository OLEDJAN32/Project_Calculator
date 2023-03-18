#include"Header_Combinatorica.h"//Аненков О.А.

int choose_comb, k=1;

void Menu_Combinatorica()
{
	do
	{
		printf("Выберете номер действия, которое вы хотите выполнить:\n");
		printf("1) Размещение с повторением\n");
		printf("2) Размещение без повторений\n");
		printf("3) Сочетание с повторением\n");
		printf("4) Сочетание без повторений\n");
		printf("5) Перестановки\n\n");
		printf("Выполнить действие под номером: "); scanf("%d", &choose_comb);

		while ((choose_comb < 1) || (choose_comb > 5))
		{
			printf("Ошибка, калькулятора под данным номером не существует, выберите калькулятор заново\n");
			printf("Использовать калькулятор под номером: "); scanf("%d", &choose_comb);
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
		printf("Чтобы выйти в главное меню нажмите 0   Чтобы продолжить, нажмите 1\n"); scanf("%d", &k); printf("\n"); printf("\n");
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
