#pragma once
//#include "SDL.h"
#include<malloc.h>
#include<iostream>
using namespace std;
#define E 10000000

void Menu_Functions();
double F_polynom(double x, int* a, int& N);
void polynom();
double F_stepen(double x, double a, double b, double c);
void stepen();
double F_pokazatel(double x, double a, double b, double c, double d);
void pokazatel();
double F_log(double x, double a, double b, double c);
void log();
double F_sin(double x, double a, double b, double c, double d);
void sin();
double F_cos(double x, double a, double b, double c, double d);
void cos();
void integral();