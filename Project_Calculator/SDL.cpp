#include "HeaderSDL.h"
#include <Windows.h>
const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;
SDL_Window* window = NULL;
bool init();

bool init()
{
	bool success = true;
	if (SDL_Init(SDL_INIT_EVERYTHING < 0))
	{
		printf("SDL �� ���� �����������! SDL_Error: %s\n", SDL_GetError());
		success = false;
	}
	else
	{
		window = SDL_CreateWindow(u8"LAB �20", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL)
		{
			printf("���� �� ����� ���� �������! SDL_Error: %s\n", SDL_GetError());
			success = false;
		}
	}
	return success;
}

void FuncSetka(SDL_Renderer* renderer) {
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
	SDL_RenderDrawLine(renderer, 300, 0, 300, 600);
	SDL_RenderDrawLine(renderer, 0, 300, 600, 300);
	SDL_RenderDrawLine(renderer, 300, 0, 290, 15);
	SDL_RenderDrawLine(renderer, 300, 0, 310, 15);
	SDL_RenderDrawLine(renderer, 600, 300, 590, 310);
	SDL_RenderDrawLine(renderer, 600, 300, 590, 290);

	SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0); 
	for (int i = 0; i < 600; i += 20) 
		SDL_RenderDrawLine(renderer, 295, i , 305, i  );
	for (int i = 18; i < 580;i += 20)
		SDL_RenderDrawLine(renderer, i+22, 295, i+22, 305);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
	for (int x = 0; x < 600; x += 5)
		for (int y = 0; y < 600; y += 20) {
			SDL_RenderDrawPoint(renderer, x, y);
		}
	for (int y = 0; y < 600; y += 5)
		for (int x = 0; x < 600; x += 20)
			SDL_RenderDrawPoint(renderer, x, y);
}
void Stepen() {
	double a, b, c;
	cout << "������� �����������" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	double y;
	if (!(init()))
	{
		printf("������ ������������� ����\n");
	}
	
	else {
		SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
		SDL_RenderClear(renderer);
		FuncSetka(renderer);
	

		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
		for (double x = -1000;x < 1000;x += 0.001) {
			y = -(a * pow(x, b)) * 0.1;
			SDL_RenderDrawPoint(renderer, 300 + x, ((300 + y)-(c*20)));
		}
		SDL_RenderPresent(renderer);
		SDL_Delay(7000);
		SDL_DestroyRenderer(renderer);



	}
	SDL_DestroyWindow(window);
	SDL_Quit();
	


}
void Pocazat() {
	

	double a;
	double b;
	double c;
	double d;
	cout << "������� �����������" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;
	double y;
	if (!(init()))
	{
		printf("������ ������������� ����\n");
	}

	else {
		SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
		SDL_RenderClear(renderer);
		FuncSetka(renderer);


		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
		for (double x = -1000;x < 1000;x += 0.001) {
			y = -(a * pow(b, c * x) + d) * 0.1;
			SDL_RenderDrawPoint(renderer, 300 + x, (300 + y) - d*20);
		}
		SDL_RenderPresent(renderer);
		SDL_Delay(7000);
		SDL_DestroyRenderer(renderer);



	}
	SDL_DestroyWindow(window);
	SDL_Quit();
}
void Logf() {
	double a, b, c;
	while (true) {
		cout << "������� ����������� (b>0)" << endl;
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;
		cout << "c = "; cin >> c;
		if (b < 0)
			cout << "������, ���������� �����" << endl;
		else
			break;
	}
	double y;
	if (!(init()))
	{
		printf("������ ������������� ����\n");
	}

	else {
		SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
		SDL_RenderClear(renderer);
		FuncSetka(renderer);


		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
		for (double x = -1000;x < 1000;x += 0.01) {
			y = -(a*log(b*x));
			SDL_RenderDrawPoint(renderer, 300 + x, ((300 + y) - (c * 20)));
		}
		SDL_RenderPresent(renderer);
		SDL_Delay(7000);
		SDL_DestroyRenderer(renderer);



	}
	SDL_DestroyWindow(window);
	SDL_Quit();
}
void sinusoid() {
	double a, b, c;
	int d;
	cout << "������� ����������� (b>0)" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;
	double y;
	if (!(init())) printf("������ ������������� ����\n");
	else {
		SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
		SDL_RenderClear(renderer);
		FuncSetka(renderer);


		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
		for (double x = -1000; x < 1000; x += 0.01) {
			y = a * (sin(b * x + c));
			SDL_RenderDrawPoint(renderer, 300 + x, ((300 + y) - (d * 20)));
		}
		SDL_RenderPresent(renderer);
		SDL_Delay(7000);
		SDL_DestroyRenderer(renderer);


	}
	SDL_DestroyWindow(window);
	SDL_Quit();
}

void cosinusoid() {
	double a, b, c;
	int d;
	cout << "������� ����������� (b>0)" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;
	double y;
	if (!(init())) printf("������ ������������� ����\n");
	else {
		SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
		SDL_RenderClear(renderer);
		FuncSetka(renderer);


		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
		for (double x = -1000; x < 1000; x += 0.01) {
			y = a * (cos(b * x + c));
			SDL_RenderDrawPoint(renderer, 300 + x, ((300 + y) - (d * 20)));
		}
		SDL_RenderPresent(renderer);
		SDL_Delay(7000);
		SDL_DestroyRenderer(renderer);


	}
	SDL_DestroyWindow(window);
	SDL_Quit();
}

void polynom() {
	int n;
	double arr[100];
	cout << "������� �������: ";
	cin >> n;
	if (n <= 0) {
		cout << "������� ������ ���� ������ 0.";
		return;
	}
	for (int i = 0; i <= n; i++) {
		cout << "������� ����������, ������� � ������� �������" << i + 1 << " ����������: ";
		cin >> arr[i];
	}
	double y = 0;
	if (!(init())) printf("������ ������������� ����\n");
	else {
		SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
		SDL_RenderClear(renderer);
		FuncSetka(renderer);


		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
		for (double x = -40; x < 40; x += 0.001) {
			y = 0;
			for (int i = 0; i <= n; i++) {
				y += arr[i] * (pow(x, i));
			}
			SDL_RenderDrawPoint(renderer, 300 + x * 20, 300 + -y * 20);
		}
		SDL_RenderPresent(renderer);
		SDL_Delay(7000);
		SDL_DestroyRenderer(renderer);


	}
	SDL_DestroyWindow(window);
	SDL_Quit();
}
void ChooseFunctionSDL() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int check; bool flag = true;
	do {
		cout << "�������� ��� ������� �������" << endl;
		cout << "������� 1 ��� ���������� ������� ��������� ������� ���� a*x^b+c" << endl;
		cout << "������� 2 ��� ���������� ������� ������������� ������� ���� a*b^(c*x)+d" << endl;
		cout << "������� 3 ��� ���������� ������� ��������������� ������� ���� a*ln(b*x)+c" << endl;
		cout << "������� 4 ��� ���������� ������� ��������� a*sin(b*x+c)+d" << endl;
		cout << "������� 5 ��� ���������� ������� ����������� a*cos(b*x+c)+d" << endl;
		cout << "������� 6 ��� ���������� ������� �������� ������� N" << endl;
		cout << "������� 0, ����� ��������� �� ���������� ����" << endl;
		cout << "����: "; cin >> check;
		switch (check) {
		case 0:
			SetConsoleCP(65001);
			SetConsoleOutputCP(65001);
			flag = false; break;
		case 1:
			Stepen(); break;
		case 2:
			Pocazat(); break;
		case 3:
			Logf(); break;
		case 4:
			sinusoid();
		case 5:
			cosinusoid();
		case 6:
			polynom();

		}
	} while (flag == true);
}