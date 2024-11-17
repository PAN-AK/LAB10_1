#include <stdio.h>
#include <locale.h>
#include <math.h>

double Func1(double x) {
	if (x <= 3)
		return (pow(x, 2) - 3 * x + 9);
	else
		return (1 / (pow(x, 3) + 3));

}

double Func2(double x) {
	return x * exp(sin(pow(x, 2)));

}

double sin_N(double x, int N) {
	double sinn = 0;
	for (int i = 0; i < N; i++)
		sinn += (pow(-1, i) * pow(x, (2 * i + 1)) / tgamma((2 * i + 1) + 1));
	return sinn;
}

void main() {
	double x;
	int N;
	setlocale(LC_ALL, "RUS");
	printf("Введите х:");
	scanf_s("%lf", &x);
	printf("\nПервая функция = %lf", Func1(x));
	printf("\nВторая функция = %lf", Func2(x));
	printf("\nПроизведение функций = %lf", (Func1(x) * Func2(x)));
	printf("\nРазность квадратов функций = %lf", (pow(Func1(x), 2) - pow(Func2(x), 2)));
	printf("\nУдвоенная сумма функций = %lf", ((Func1(x) + Func2(x)) * 2));
	printf("\n Синус стандартной библиотеки: %lf", sin(x));
	printf("\n\nВведите кол-во членов ряда для 2-го способа: ");
	scanf_s(" %d", &N);
	printf("\n2) sin(x) = %lf", sin_N(x, N));


}