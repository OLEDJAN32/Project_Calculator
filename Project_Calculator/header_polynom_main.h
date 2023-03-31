#include <iostream>
using namespace std;

struct arr_val;
void outputPolynomials(arr_val new_arr[100], int& k);
void transformPolynomials(arr_val arr[100], arr_val arr2[100], int kol_el, int& b);
void sortPolynomials(arr_val arr2[100], arr_val new_arr[100], int kol_el, int& b);
void sumPolynomials(arr_val new_arr1[100], arr_val new_arr2[100], arr_val new_arr3[100], int x1, int x2, int& x4);
void subPolynomials(arr_val new_arr1[100], arr_val new_arr2[100], arr_val new_arr3[100], int x1, int x2, int& x4);
void multNumPolynomial(arr_val new_arr1[100], int x1, double mult);
void inputPolynomials(arr_val new_arr[100], int& k);
void derivPolynomials(arr_val new_arr1[100], int x1);
void multPolynomials(arr_val new_arr1[100], arr_val new_arr2[100], arr_val new_arr3[100], int x1, int x2, int& x4);
void divPolynomials(arr_val new_arr1[100], arr_val new_arr2[100], arr_val new_arr3[100], int x1, int x2, int& x4);
void Menu_Polynomails();