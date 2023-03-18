#include "HeaderMatrices.h"

void PrintMatrix() {
	return;
}

void AdditionMatrix() {
	int N1, M1;
	while (true) {
		cout << "Введите размер первой матрицы (Числа больше 0 и не более 10)" << endl;
		cout << "N = "; cin >> N1; cout << "M = "; cin >> M1;
		if ((N1 < 1 && N1 > 10) || (M1 < 1 && M1 > 10)) {
			cout << "Вы ввели неверное значение, попробуйте снова!" << endl;
		}
		else
			break;
	}
	int count1 = 1;
	int** MatrixOne = new int* [N1]; // Инициализация первой матрицы
	for (int i = 0; i < N1; i++)
		MatrixOne[i] = new int[M1];
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < M1; j++) {
			cout << "Введите элемент " << count1 << ": "; cin >> MatrixOne[i][j];
			count1++;
		}
	}
	cout << "Первая введенная матрица: " << endl << endl;
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < M1; j++) {
			cout << MatrixOne[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "Производит сложение матриц\n" << endl;
}

void SubtractionMatrix() {
	cout << "Производит вычитание матриц\n" << endl;
}

void MultiplicationMatrix() {
	cout << "Производит умножение двух матриц\n" << endl;
}

void MultiplicationMatrixOnNumber() {
	cout << "Производит умножение матрицы на число\n" << endl;
}

void AdditionMatrixWithNumber() {
	cout << "Сложение матрицы с числом\n" << endl;
}

void MatrixTranposition() {
	cout << "Вывод транспонированной матрицы\n" << endl;
}

void InverseMatrix() {
	cout << "Выводит матрицу, обратную данной\n" << endl;
}

void DeterminantMatrix() {
	cout << "Считает определитель матрицы NxN\n" << endl;
}

void Menu_Matrix() {
	setlocale(LC_ALL, "rus");
	bool flag = true; int check;
	do {
		cout << "Введите 1 для сложения матриц" << endl;
		cout << "Введите 2 для вычитания матриц" << endl;
		cout << "Введите 3 для  умножения матриц" << endl;
		cout << "Введите 4 для  умножения матрицы на число" << endl;
		cout << "Введите 5 для  сложения или вычитания числа из матрицы" << endl;
		cout << "Введите 6 для  транспонирования матрицы" << endl;
		cout << "Введите 7 для нахождения определителя матрицы вида NxN" << endl;
		cout << endl;
		cout << "Введите 0 для возврата в главное меню программы" << endl;
		cout << endl;
		cout << "Ввод: "; cin >> check;
		switch (check) {
		case 1:
			AdditionMatrix(); break;
		case 2:
			SubtractionMatrix(); break;
		case 3:
			MultiplicationMatrix(); break;
		case 4:
			MultiplicationMatrixOnNumber(); break;
		case 5:
			AdditionMatrixWithNumber(); break;
		case 6:
			MatrixTranposition(); break;
		case 7:
			InverseMatrix(); break;
		case 0:
			cout << "Вы вернулись к главному меню" << endl << endl; flag = false; break;
		default:
			cout << "Вы ввели неверное значение, попробуйте снова" << endl << endl;
		}
	} while (flag == true);
}
