//#define _CRT_SECURE_NO_WARNINGS
#include "header_polynom_main.h"
#include <Windows.h>
//#include <windows.h>


struct arr_val {
	double kof;
	double degree;
};

void outputPolynomials(arr_val new_arr[100], int& k) {
	int z = 0;
	for (int i = 0; i < k; i++) {
		if (new_arr[i].kof == 0) {
			z++;
			continue;
		}
		cout << "Коэффицент " << i + 1 << " одночлена: " << new_arr[i].kof << endl;
		cout << "Степень " << i + 1 << " одночлена: " << new_arr[i].degree << endl;
	}
	if (z == k) cout << "0" << endl;
}

void transformPolynomials(arr_val arr[100], arr_val arr2[100], int kol_el, int& b) {
	bool check = true;
	for (int i = 0; i < kol_el; i++) {
		for (int j = 0; j < b; j++) {
			if (arr[i].degree == arr2[j].degree) {
				check = false;
				arr2[j].kof += arr[i].kof;
				break;
			}
		}
		if (check) {
			arr2[b].degree = arr[i].degree;
			arr2[b].kof = arr[i].kof;
			b++;
		}
		check = true;
	}
}
void sortPolynomials(arr_val arr2[100], arr_val new_arr[100], int kol_el, int& b) {
	double min_el = INT_MAX;
	int min_kof;
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < b; j++) {
			if (min_el > arr2[j].degree) {
				min_el = arr2[j].degree;
				min_kof = j;
			}
		}

		new_arr[i].degree = min_el;
		new_arr[i].kof = arr2[min_kof].kof;
		arr2[min_kof].degree = INT_MAX;
		min_el = INT_MAX;
	}
}

void sumPolynomials(arr_val new_arr1[100], arr_val new_arr2[100], arr_val new_arr3[100], int x1, int x2, int& x4) {
	int x3, x5 = 0;
	arr_val new_arr[100];
	x3 = x1 + x2;
	for (int i = x1; i < x1 + x2; i++) {
		new_arr1[i].degree = new_arr2[i - x1].degree;
		new_arr1[i].kof = new_arr2[i - x1].kof;
	}
	transformPolynomials(new_arr1, new_arr, x3, x4);
	sortPolynomials(new_arr, new_arr3, 0, x4);
	cout << "Результат: " << endl;
	outputPolynomials(new_arr3, x4);
}

void subPolynomials(arr_val new_arr1[100], arr_val new_arr2[100], arr_val new_arr3[100], int x1, int x2, int& x4) {
	int x3, x5 = 0;
	arr_val new_arr[100];
	x3 = x1 + x2;
	for (int i = x1; i < x1 + x2; i++) {
		new_arr1[i].degree = new_arr2[i - x1].degree;
		new_arr1[i].kof = -1 * new_arr2[i - x1].kof;
	}
	transformPolynomials(new_arr1, new_arr, x3, x4);
	sortPolynomials(new_arr, new_arr3, 0, x4);
	cout << "Результат: " << endl;
	outputPolynomials(new_arr3, x4);
}

void multNumPolynomial(arr_val new_arr1[100], int x1, double mult) {
	for (int i = 0; i < x1; i++) {
		new_arr1[i].kof *= mult;
	}
	cout << "Результат: " << endl;
	outputPolynomials(new_arr1, x1);
}

void inputPolynomials(arr_val new_arr[100], int& k) {
	arr_val new_arr1[100];
	int k1;
	cout << "Введите количество одночленов многочлена: ";
	cin >> k1;
	if (k1 <= 0) {
		cout << "Количество одночленов должно быть больше 0." << endl;
		return;
	}
	for (int i = 0; i < k1; i++) {
		cout << "Введите коэффицент " << i + 1 << " одночлена: ";
		cin >> new_arr[i].kof;
		cout << "Введите степень " << i + 1 << " одночлена: ";
		cin >> new_arr[i].degree;
	}
	transformPolynomials(new_arr, new_arr1, k1, k);
	sortPolynomials(new_arr1, new_arr, 0, k);
}

void derivPolynomials(arr_val new_arr1[100], int x1) {
	for (int i = 0; i < x1; i++) {
		if (new_arr1[i].degree == 0) new_arr1[i].kof = 0;
		new_arr1[i].kof *= new_arr1[i].degree;
		new_arr1[i].degree--;
	}
	cout << "Результат: " << endl;
	outputPolynomials(new_arr1, x1);
}

void multPolynomials(arr_val new_arr1[100], arr_val new_arr2[100], arr_val new_arr3[100], int x1, int x2, int& x4) {
	int x3 = 0;
	arr_val new_arr[100];
	for (int i = 0; i < x1; i++) {
		for (int j = 0; j < x2; j++) {
			new_arr3[x3].kof = new_arr1[i].kof * new_arr2[j].kof;
			new_arr3[x3].degree = new_arr1[i].degree + new_arr2[j].degree;
			x3 += 1;
		}
	}
	transformPolynomials(new_arr3, new_arr, x3, x4);
	sortPolynomials(new_arr, new_arr3, 0, x4);
	cout << "Результат: " << endl;
	outputPolynomials(new_arr3, x4);
}

void divPolynomials(arr_val new_arr1[100], arr_val new_arr2[100], arr_val new_arr3[100], int x1, int x2, int& x4) {
	arr_val new_arr[100], new_arr4[100];
	int i = 0, x3, x5 = 0;
	if (new_arr1[x1 - 1].degree < new_arr2[x2 - 1].degree) {
		cout << "Наибольшая степень делителя должна быть меньше наибольшей степени делимого." << endl;
		return;
	}
	while (new_arr1[x1 - 1].degree >= new_arr2[x2 - 1].degree) {
		new_arr3[i].degree = new_arr1[x1 - 1].degree - new_arr2[x2 - 1].degree;
		new_arr3[i].kof = new_arr1[x1 - 1].kof / new_arr2[x2 - 1].kof;
		for (int j = 0; j < x2; j++) {
			new_arr[j].kof = new_arr2[j].kof * new_arr3[i].kof;
			new_arr[j].degree = new_arr2[j].degree + new_arr3[i].degree;
		}
		for (int z = x1; z < x1 + x2; z++) {
			new_arr1[z].degree = new_arr[z - x1].degree;
			new_arr1[z].kof = -1 * new_arr[z - x1].kof;
		}
		x3 = x1 + x2;
		transformPolynomials(new_arr1, new_arr4, x3, x5);
		sortPolynomials(new_arr4, new_arr1, 0, x5);
		x1 = x5 - 1;
		x5 = 0;
		i++;

	}
	cout << "Частное: " << endl;
	outputPolynomials(new_arr3, i);
	cout << "Остаток: " << endl;
	outputPolynomials(new_arr1, x1);
}


void Menu_Polynomails() {
	//setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	do {
		int k1 = 0, k2 = 0, k = 0, num_func;
		double mult;
		arr_val new_arr1[100], new_arr2[100], new_arr3[100];
		cout << "Для возвращения в главное меню введите 0" << endl;
		printf("Выберите функцию:\n");
		printf("1) Деление многочленов в столбик.\n");
		printf("2) Сложение многочленов.\n");
		printf("3) Вычитание многочленов.\n");
		printf("4) Умножение многочленов.\n");
		printf("5) Умножение многочленов на число.\n");
		printf("6) Вычисление производной от многочлена.\n");
		cin >> num_func;
		switch (num_func) {
		case 1:
			cout << "Введите первый многочлен." << endl;
			inputPolynomials(new_arr1, k1);
			if (k1 <= 0) break;
			cout << endl;
			cout << "Введите второй многочлен." << endl;
			inputPolynomials(new_arr2, k2);
			if (k2 <= 0) break;
			divPolynomials(new_arr1, new_arr2, new_arr3, k1, k2, k);
			break;
		case 2:
			cout << "Введите первый многочлен." << endl;
			inputPolynomials(new_arr1, k1);
			if (k1 <= 0) break;
			cout << endl;
			cout << "Введите второй многочлен." << endl;
			inputPolynomials(new_arr2, k2);
			if (k2 <= 0) break;
			sumPolynomials(new_arr1, new_arr2, new_arr3, k1, k2, k);
			break;
		case 3:
			cout << "Введите первый многочлен." << endl;
			inputPolynomials(new_arr1, k1);
			if (k1 <= 0) break;
			cout << endl;
			cout << "Введите второй многочлен." << endl;
			inputPolynomials(new_arr2, k2);
			if (k2 <= 0) break;
			subPolynomials(new_arr1, new_arr2, new_arr3, k1, k2, k);
			break;
		case 4:
			cout << "Введите первый многочлен." << endl;
			inputPolynomials(new_arr1, k1);
			if (k1 <= 0) break;
			cout << endl;
			cout << "Введите второй многочлен." << endl;
			inputPolynomials(new_arr2, k2);
			if (k2 <= 0) break;
			multPolynomials(new_arr1, new_arr2, new_arr3, k1, k2, k);
			break;
		case 5:
			cout << "Введите многочлен." << endl;
			inputPolynomials(new_arr1, k1);
			if (k1 <= 0) break;
			cout << endl;
			cout << "Введите число: " << endl;
			cin >> mult;
			multNumPolynomial(new_arr1, k1, mult);
			break;
		case 6:
			cout << "Введите многочлен." << endl;
			inputPolynomials(new_arr1, k1);
			if (k1 <= 0) break;
			derivPolynomials(new_arr1, k1);
			break;
		case 0:
			SetConsoleCP(65001);
			SetConsoleOutputCP(65001);
			return;
		default: printf("Такой функции не существует.\n"); continue;
		}
	} while (1);
	//SetConsoleCP(65001);
	//SetConsoleOutputCP(65001);
}