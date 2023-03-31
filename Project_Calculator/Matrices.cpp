#include "HeaderMatrices.h"

void DeleteRowCol(int** Matrix, int size, int N, int M, int** NewMatrix) {
	int offsetRow = 0;
	int offsetCol = 0;
	for (int i = 0; i < size - 1;i++) {
		if (i == N) {
			offsetRow = 1;
		}
		offsetCol = 0;
		for (int j = 0; j < size - 1;j++) {
			if (j == M) {
				offsetCol = 1;
			}
			NewMatrix[i][j] = Matrix[i + offsetRow][j + offsetCol];
		}
	}
}
int Function_Determinant(int** Matrix, int size) {
	int Det = 0;
	int degree = 1;

	if (size == 1) {
		return Matrix[0][0];
	}
	if (size == 2) {
		return Matrix[0][0] * Matrix[1][1] - Matrix[0][1] * Matrix[1][0];
	}

	int** NewMatrix = new int* [size - 1];
	for (int i = 0; i < size - 1;i++) {
		NewMatrix[i] = new int[size - 1];
	}

	for (int j = 0;j < size;j++) {
		DeleteRowCol(Matrix, size, 0, j, NewMatrix);
		Det = Det + degree * Matrix[0][j] * Function_Determinant(NewMatrix, size - 1);
		degree = -degree;
	}

	for (int i = 0; i < size - 1;i++) {
		delete[] NewMatrix[i];
	}
	delete[] NewMatrix;
	return Det;
}
//-----------------------------------------------------------
void AdditionMatrix() {
	int N1, M1;
	while (true) {
		cout << "Введите размер первой матрицы (Числа больше 0 и меньше 11)" << endl;
		cout << "Число строк =  "; cin >> N1; cout << "Число столбцов = "; cin >> M1;
		if ((N1 < 1 || N1 > 10) || (M1 < 1  || M1 > 10)) {
			cout << "Вы ввели неверное значение, попробуйте снова!" << endl;
		}
		else
			break;
	}
	int count1 = 1;
	int** MatrixOne = new int* [N1]; // Инициализация ПЕРВОЙ матрицы
	for (int i = 0; i < N1; i++)
		MatrixOne[i] = new int[M1];
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < M1; j++) {
			cout << "Введите элемент " << count1 << ": "; cin >> MatrixOne[i][j];
			count1++;
		}
	}
	cout << "Первая введенная матрица: " << endl;
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < M1; j++) {
			cout << MatrixOne[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << endl;
	//----------------------------------------------------------------------------------
	cout << "Вторая матрица имеет такой же размер, как и первая\nВведите её элементы" << endl << endl;
	int count2 = 1;
	int** MatrixTwo = new int* [N1]; // Инициализация ВТОРОЙ матрицы
	for (int i = 0; i < N1; i++)
		MatrixTwo[i] = new int[M1];
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < M1; j++) {
			cout << "Введите элемент " << count2 << ": "; cin >> MatrixTwo[i][j];
			count2++;
		}
	}
	cout << "Вторая введенная матрица: " << endl;
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < M1; j++) {
			cout << MatrixTwo[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << endl;

	for (int i = 0; i < N1;i++)
		for (int j = 0;j < M1;j++)
			MatrixOne[i][j] += MatrixTwo[i][j];
	cout << "Результат сложения: " << endl;
	for (int i = 0; i < N1;i++) {
		for (int j = 0;j < M1;j++)
			cout << MatrixOne[i][j] << "\t";
		cout << "\n";
	}
	cout << endl;
	for (int i = 0; i < N1;i++) {
		delete[] MatrixOne[i]; delete[] MatrixTwo[i];
	}
	delete[]MatrixOne;
	delete[]MatrixTwo;
	cout << endl;
}

void SubtractionMatrix() {
	int N1, M1;
	while (true) {
		cout << "Введите размер первой матрицы (Числа больше 0 и меньше 11)" << endl;
		cout << "Число строк = "; cin >> N1; cout << "Число столбцов = "; cin >> M1;
		if ((N1 < 1 || N1 > 10) || (M1 < 1 || M1 > 10)) {
			cout << "Вы ввели неверное значение, попробуйте снова!" << endl;
		}
		else
			break;
	}
	int count1 = 1;
	int** MatrixOne = new int* [N1]; // Инициализация ПЕРВОЙ матрицы
	for (int i = 0; i < N1; i++)
		MatrixOne[i] = new int[M1];
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < M1; j++) {
			cout << "Введите элемент " << count1 << ": "; cin >> MatrixOne[i][j];
			count1++;
		}
	}
	cout << "Первая введенная матрица: " << endl;
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < M1; j++) {
			cout << MatrixOne[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << endl;
	//----------------------------------------------------------------------------------
	cout << "Вторая матрица имеет такой же размер, как и первая\nВведите её элементы" << endl << endl;
	int count2 = 1;
	int** MatrixTwo = new int* [N1]; // Инициализация ВТОРОЙ матрицы
	for (int i = 0; i < N1; i++)
		MatrixTwo[i] = new int[M1];
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < M1; j++) {
			cout << "Введите элемент " << count2 << ": "; cin >> MatrixTwo[i][j];
			count2++;
		}
	}
	cout << "Вторая введенная матрица: " << endl;
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < M1; j++) {
			cout << MatrixTwo[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << endl;
	for (int i = 0; i < N1;i++)
		for (int j = 0;j < M1;j++)
			MatrixOne[i][j] -= MatrixTwo[i][j];
	cout << "Результат вычитания: " << endl;
	for (int i = 0; i < N1;i++) {
		for (int j = 0;j < M1;j++)
			cout << MatrixOne[i][j] << "\t";
		cout << "\n";
	}
	cout << endl;
	for (int i = 0; i < N1;i++) {
		delete[] MatrixOne[i]; delete[] MatrixTwo[i];
	}
	delete[]MatrixOne;
	delete[]MatrixTwo;
	cout << endl;
}

void MultiplicationMatrix() {
	int N1, M1;
	while (true) {
		cout << "Введите размер первой матрицы (Числа больше 0 и не более 10)" << endl;
		cout << "Число строк =  "; cin >> N1; cout << "Число столбцов = "; cin >> M1;
		if ((N1 < 1 || N1 > 10) || (M1 < 1 || M1 > 10)) {
			cout << "Вы ввели неверное значение, попробуйте снова!" << endl;
		}
		else
			break;
	}
	int count1 = 1;
	int** MatrixOne = new int* [N1]; // Инициализация ПЕРВОЙ матрицы
	for (int i = 0; i < N1; i++)
		MatrixOne[i] = new int[M1];
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < M1; j++) {
			cout << "Введите элемент " << count1 << ": "; cin >> MatrixOne[i][j];
			count1++;
		}
	}
	cout << "Первая введенная матрица: " << endl;
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < M1; j++) {
			cout << MatrixOne[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << endl;
	//----------------------------------------------------------------------------------
	int N2, M2;
	cout << "Количество столбцов первой матрицы должно быть равно количеству строк во второй матрице! (N и M не более 10)" << endl;
	while (true) {
		cout << "Введите число строк: "; cin >> N2;
		cout << "Введите число столбцов: "; cin >> M2;
		if ((M1 != N2) || ((N2 < 1 || N2 > 10) || (M2 < 1 || M2 > 10))) {
			cout << "Вы ввели неверные значения, попробуйте снова!" << endl;
		}
		else
			break;
	}
	int count2 = 1;
	int** MatrixTwo = new int* [N2]; // Инициализация ВТОРОЙ матрицы
	for (int i = 0; i < N2; i++)
		MatrixTwo[i] = new int[M2];
	for (int i = 0; i < N2; i++) {
		for (int j = 0; j < M2; j++) {
			cout << "Введите элемент " << count2 << ": "; cin >> MatrixTwo[i][j];
			count2++;
		}
	}
	cout << "Вторая введенная матрица: " << endl;
	for (int i = 0; i < N2; i++) {
		for (int j = 0; j < M2; j++) {
			cout << MatrixTwo[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << endl;
	cout << "Результат умножения матриц: " << endl;
	int** MatrixThree = new int* [N1];
	for (int i = 0; i < N1;i++) {
		MatrixThree[i] = new int[M2];
		for (int j = 0; j < M2;j++) {
			MatrixThree[i][j] = 0;
			for (int k = 0; k < M1;k++)
				MatrixThree[i][j] += MatrixOne[i][k] * MatrixTwo[k][j];
		}
	}
	for (int i = 0; i < N1;i++) {
		for (int j = 0; j < M2;j++)
			cout << MatrixThree[i][j] << "\t";
		cout << "\n";
	}
	for (int i = 0; i < N1;i++) {
		delete[] MatrixOne[i];
	}
	for (int i = 0; i < M1;i++) {
		delete[] MatrixTwo[i];
	}
	delete[]MatrixOne;
	delete[]MatrixTwo;
	cout << endl;
}

void MultiplicationMatrixOnNumber() {
	int N, M;
	while (true) {
		cout << "Введите размер первой матрицы (Числа больше 0 и меньше 11)" << endl;
		cout << "Число строк =  "; cin >> N; cout << "Число столбцов = "; cin >> M;
		if ((N < 1 || N > 10) || (M < 1 || M > 10)) {
			cout << "Вы ввели неверное значение, попробуйте снова!" << endl;
		}
		else
			break;
	}
	int count1 = 1;
	int** MatrixOne = new int* [N]; // Инициализация матрицы
	for (int i = 0; i < N; i++)
		MatrixOne[i] = new int[M];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << "Введите элемент " << count1 << ": "; cin >> MatrixOne[i][j];
			count1++;
		}
	}
	cout << "Введенная матрица: " << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << MatrixOne[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << endl;
	int Number;
	cout << "Введите целое число, на которое хотели бы умножить заданную матрицу" << endl;
	cout << "Ввод: "; cin >> Number;
	cout << "Полученная матрица: " << endl;
	for (int i = 0;i < N;i++)
		for (int j = 0; j < M;j++)
			MatrixOne[i][j] *= Number;
	for (int i = 0;i < N;i++) {
		for (int j = 0; j < M;j++)
			cout << MatrixOne[i][j] << "\t";
		cout << "\n";
	}
}

void AdditionMatrixWithNumber() {
	cout << "Сложение матрицы с числом и вычитание числа из матрицы невозможно, программа найдет определитель матрицы и сделает указанное действие с ним" << endl;
	int size;
	while (true) {
		cout << "Введите размерность матрицы (Не более 5): "; cin >> size;
		if (size < 1 || size > 5)
			cout << "Вы ввели неверное значение, попробуйте снова" << endl;
		else
			break;
	}
	int** Matrix = new int* [size];
	int count = 0;
	for (int i = 0;i < size;i++)
		Matrix[i] = new int[size];
	for (int i = 0; i < size;i++)
		for (int j = 0; j < size;j++) {
			count++; cout << "Введите элемент №" << count << " : "; cin >> Matrix[i][j];
		}
	cout << "Введенная матрица: " << endl;
	for (int i = 0; i < size;i++) {
		for (int j = 0; j < size;j++)
			cout << Matrix[i][j] << "\t";
		cout << "\n";
	}
	cout << "Определитель матрицы = " << Function_Determinant(Matrix, size) << endl;

	int Number;
	int check;
	cout << "Введите целое число с которым будет проводиться операция" << endl; cin >> Number;
	do {
		cout << "Введите 1 чтобы сложить заданное число с определителем" << endl;
		cout << "Введите 2 чтобы вычесть из определителя заданное число" << endl;
		cout << "Ввод: "; cin >> check;
		switch (check) {
		case 1:
			cout << "Результат сложения: " << Function_Determinant(Matrix, size) + Number << endl; return;
		case 2:
			cout << "Результат вычитания: " << Function_Determinant(Matrix, size) - Number << endl; return;
		default:
			cout << "Вы сделали что-то не так, попробуйте снова" << endl;
		}
	} while (true);
	for (int i = 0; i < size;i++)
		delete[] Matrix[i];
	delete[] Matrix;
	return;
}

void MatrixTranposition() {
	int N, M;
	while (true) {
		cout << "Введите размер матрицы (Числа больше 0 и меньше 11)" << endl;
		cout << "Число строк =  "; cin >> N; cout << "Число столбцов = "; cin >> M;
		if ((N < 1 || N > 10) || (M < 1 || M > 10)) {
			cout << "Вы ввели неверное значение, попробуйте снова!" << endl;
		}
		else
			break;
	}
	int count1 = 1;
	int** MatrixOne = new int* [N]; // Инициализация матрицы
	for (int i = 0; i < N; i++)
		MatrixOne[i] = new int[M];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << "Введите элемент " << count1 << ": "; cin >> MatrixOne[i][j];
			count1++;
		}
	}
	cout << "Введенная матрица: " << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << MatrixOne[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << endl;
	cout << "Результат транспонирования: " << endl;
	for (int i = 0; i < M;i++) {
		for (int j = 0; j < N;j++)
			cout << MatrixOne[j][i] << "\t";
		cout << "\n";
	}
	for (int i = 0; i < N;i++)
		delete[] MatrixOne[i];
	delete[] MatrixOne;
}

void InverseMatrix() {
	int N;

	cout << "Введите размер матрицы (Не больше 5): ";
	cin >> N;

	double** matrix = new double* [N];

	for (int i = 0; i < N; i++)
		matrix[i] = new double[N];
	int count = 1;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			cout << "Введите элемент №" << count << ": ";
			count++;
			cin >> matrix[i][j];
		}

	double temp;

	double** E = new double* [N];

	for (int i = 0; i < N; i++)
		E[i] = new double[N];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			E[i][j] = 0.0;

			if (i == j)
				E[i][j] = 1.0;
		}

	for (int k = 0; k < N; k++)
	{
		temp = matrix[k][k];

		for (int j = 0; j < N; j++)
		{
			matrix[k][j] /= temp;
			E[k][j] /= temp;
		}

		for (int i = k + 1; i < N; i++)
		{
			temp = matrix[i][k];

			for (int j = 0; j < N; j++)
			{
				matrix[i][j] -= matrix[k][j] * temp;
				E[i][j] -= E[k][j] * temp;
			}
		}
	}

	for (int k = N - 1; k > 0; k--)
	{
		for (int i = k - 1; i >= 0; i--)
		{
			temp = matrix[i][k];

			for (int j = 0; j < N; j++)
			{
				matrix[i][j] -= matrix[k][j] * temp;
				E[i][j] -= E[k][j] * temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			matrix[i][j] = E[i][j];

	for (int i = 0; i < N; i++)
		delete[] E[i];

	delete[] E;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) {
			if ((int(matrix[i][j]) > -9999999) && (int(matrix[i][j] < 9999999))) {
				cout << matrix[i][j] << " \t";
			}
			else {
				cout << "Данная матрица не имеет обратной!" << endl; return;
			}
		}
		cout << "\n"<<endl;
	}

	for (int i = 0; i < N; i++)
		delete[] matrix[i];

	delete[] matrix;

}

void DetMatrix() {
	int size;
	while (true) {
		cout << "Введите размерность матрицы (Не более 5): "; cin >> size;
		if (size < 1 && size > 5)
			cout << "Вы ввели неверное значение, попробуйте снова" << endl;
		else
			break;
	}
	int** Matrix = new int* [size];
	int count = 0;
	for (int i = 0;i < size;i++)
		Matrix[i] = new int[size];
	for (int i = 0; i < size;i++)
		for (int j = 0; j < size;j++) {
			count++; cout << "Введите элемент №" << count << " : "; cin >> Matrix[i][j];
		}
	cout << "Введенная матрица: " << endl;
	for (int i = 0; i < size;i++) {
		for (int j = 0; j < size;j++)
			cout << Matrix[i][j] << "\t";
		cout << "\n";
	}
	cout << "Определитель матрицы = " << Function_Determinant(Matrix, size) << endl << endl;
}

void Menu_Matrix() {
	//setlocale(LC_ALL, "rus");
	cout << "Калькулятор поддерживает работу только с ЦЕЛЫМИ числами!" << endl << endl;
	bool flag = true; int check;
	do {
		cout << "1) для сложения матриц" << endl; //done
		cout << "2) для вычитания матриц" << endl;//done
		cout << "3) для умножения матриц" << endl;//done
		cout << "4) для умножения матрицы на число" << endl;//done
		cout << "5) для сложения или вычитания числа из матрицы" << endl;//done
		cout << "6) для транспонирования матрицы" << endl; //done
		cout << "7) для нахождения обратной матрицы вида NxN" << endl;//done
		cout << "8) для нахождения определителя матрицы размерности N" << endl; //done
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
		case 8:
			DetMatrix(); break;
		case 0:
			cout << "Вы вернулись к главному меню" << endl << endl; flag = false; break;
		default:
			cout << "Вы ввели неверное значение, попробуйте снова" << endl << endl;
		}
	} while (flag == true);
}
