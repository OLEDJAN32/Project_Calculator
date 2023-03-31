#include "Header_Functions.h"
#include "HeaderSDL.h"

void Menu_Functions() {
	
	//setlocale(LC_ALL, "rus");
	int check; bool flag = true;
	do {
		cout << "Введите 0, чтобы перейти в главное меню калькулятора" << endl;
		cout << "Выберите действие над функцией" << endl;
		cout << "Введите 1 для вычисления определенного интеграла на отрезке" << endl;
		cout << "Введите 2 для построения графика функции " << endl;
		cout << "Введите 3 для поиска корня Y = 0 на отрезке" << endl;
		cout << "Введите 4 для поиска экстремумов на отрезке" << endl;
		cout << "Ввод: "; cin >> check;
		switch (check) {
		case 1:
			cout << endl; break;
		case 2:
			ChooseFunctionSDL(); break;
		case 3:
			cout << endl; break;
		case 4:
			cout << endl; break;
		case 0:
			flag = false; break;
		default:
			cout << "Вы ввели неверное значение, попробуйте снова!" << endl;
		}
		

	} while (flag == true);
	//return;
}
