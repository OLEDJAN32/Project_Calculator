#include "Header_Functions.h"
#include "HeaderSDL.h"
#include "KorenY.h"
#include "HeaderIntegral.h"

void Menu_Functions() {
	
	//setlocale(LC_ALL, "rus");
	int check; bool flag = true;
	do {
		cout << " 0) Чтобы перейти в главное меню калькулятора" << endl;
		cout << "Выберите действие над функцией" << endl;
		cout << "1) для вычисления определенного интеграла на отрезке" << endl;
		cout << "2) для построения графика функции " << endl;
		cout << "3) для поиска корня Y = 0 на отрезке" << endl;
		cout << "4) для поиска экстремумов на отрезке" << endl;
		cout << "Ввод: "; cin >> check;
		switch (check) {
		case 1:
			integral(); break;
		case 2:
			ChooseFunctionSDL(); break;
		case 3:
			ChooseFunctionKoren(); break;
		case 4:
			//integral(); break;
		case 0:
			flag = false; break;
		default:
			cout << "Вы ввели неверное значение, попробуйте снова!" << endl;
		}
		

	} while (flag == true);
	//return;
}
