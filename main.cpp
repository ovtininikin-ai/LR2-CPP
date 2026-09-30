#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Integer4. Дано цілі додатні числа A і B (A > B).
// Знайти кількість відрізків B, розміщених на відрізку A.

cout << "Integer4." << endl;

int A, B, res; // декларація цілих змінних

// Введення даних
cout << "A = ";
cin >> A;

cout << "B = ";
cin >> B;

// підрахунок
res = A / B;

// Виведення результату
cout << "Number of segments = " << res << endl;
cout << endl;

// Boolean19. Дано три цілих числа A, B, C.
// Перевірити, чи є хоча б одна пара взаємно протилежних чисел.

cout << "Boolean19." << endl;

int A2, B2, C;       // декларація цілих змінних
bool result;         // декларація логічної змінної

// Введення даних
cout << "A = ";
cin >> A2;

cout << "B = ";
cin >> B2;

cout << "C = ";
cin >> C;

// підрахунок
result = (A2 == -B2) || (A2 == -C) || (B2 == -C);

// Виведення результату
cout << "Result = " << result << endl;
cout << endl;

// Math10. Обчислення математичного виразу
cout << "Math10." << endl;

const double pi = 3.141592;
double x, num, denom, y;

// Введення даних
cout << "Real argument x = ";
cin >> x;

// Чисельник
num = cbrt(x * x) + sqrt(abs(x));

// Знаменник
denom = log2(pow(sin(abs(x) + 29 * pi / 180), 2));

// Обчислення функції
y = num / denom + (pi / 2) * abs(tan(x));

// Виведення результату
cout << "Function y = " << y << endl;

    return 0;
}