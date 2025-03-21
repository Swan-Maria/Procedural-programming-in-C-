/* Laboratory work #1     */
/*  input / output  in C++   */
/*  R - cylinder radius   */
/*  h - cylinder height   */

#include <iostream>
#include <iomanip>//Маніпулятор потоків вводу та виводу даних
#include <math.h>
using namespace std;

#define PI 3.1415

int main()
{
	float R;  //cylinder radius
	float h;   //cylinder height
	float Sb; //lateral surface of the cylinder
	float Sp; //total surface area of a cylinder
	float V;   //volume of cylinder

	cout << " Enter cylinder radius :";
	cin >> R;
	//Створимо умову за доп. оператора if, щоб значення радіуса були лише додатними (див. acode.com.ua урок 67 з мови С++ пункт 2).
	if (R <= 0) {
		cerr << " Radius must be a positive value.";//Виводить повідомлення про помилку в консоль
		return 1; //При виконані умови програма завершиться з помилкою.
	}

	cout << "\n Enter height of cylinder :";
	cin >> h;
	//Створимо умову за доп. оператора if, щоб значення висоти були лише додатними (див. acode.com.ua урок 67 з мови С++ пункт 2).
	if (h <= 0) {
		cerr << " Height must be a positive value.";//Виводить повідомлення про помилку в консоль
		return 1;//При виконані умови програма завершиться з помилкою.
	}

	//Calculation of cylinder parameters:

	Sb = 2 * PI * R * h;  //lateral surface area of the cylinder
	Sp = Sb + 2 * PI * R * R;  //total surface area of a cylinder
	V = PI * R * R * h;  //volume of cylinder

	cout << "\n\t\tResults:" << endl;
	cout << " ---------------------------------------" << endl;
	cout << "  Parameter        |" << " Value" << endl;
	cout << " ---------------------------------------" << endl;
	cout << "  Lateral Surface: | " << left << setw(10) << Sb << endl;
	cout << " ---------------------------------------" << endl;
	cout << "  Total Surface:   | " << left << setw(10) << Sp << endl;
	cout << " ---------------------------------------" << endl;
	cout << "  Volume:          | " << left << setw(10) << V << endl;
	cout << " ---------------------------------------" << endl;

	return 0;
}
