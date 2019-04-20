/*
 * Автор Ромащенко Николай Андреевич
 * e-mail: kolya.romashenko@yandex.ru
 *
 * Вариант 12
 * Минимизировать функцию методом покоординатного спуска
 * F = ( x1 - x2 )^2 + ( ( x1 + x2 - 10 ) / 3 )^2
*/

#include <iostream>
#include <cmath>

using namespace std;

/*
 * Структура с нашими переменными
 */
struct Point
{
	float x1;
	float x2;
};

float f(Point M);
float methodGolgenRatio();

/*
 * Точка входа в программу
 */
int main() {
	Point pM0;
	uint32_t uiShag = 0;

	cout << "Input X0 (X1, X2): ";
	cin >> pM0.x1 >> pM0.x2;

	//Hello)

	cout << "Resualt: " << f(pM0) << '\n';

	return 0;
}

/*
 * Вычисление функции по варианту
 */
float f(Point M)
{
	return (pow(M.x1 - M.x2, 2) + pow((M.x1 + M.x2 - 10) / 3, 2));
}

/*
 * Метод золотого сечения
 */
float methodGolgenRatio()
{
	float fResualt = 0;

	

	return fResualt;
}
