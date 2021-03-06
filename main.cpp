#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    //Фокина Полина
    //Даны катеты прямоугольного треугольника, найти его гипотенузу и периметр
    cout << "Задание 12" << endl;
    cout << "Введите катеты: ";
    int a;
    int b;
    cin >> a >> b;
    float c = sqrt(a * a + b * b);
    float P = a + b + c;
    cout << "Гипотенуза: " << c << ", периметр: " << P << endl;
    
    //Даны два круга с общим центром и разными радиусами, найти их площади и площадь образованного кольца
    cout << "Задание 13" << endl;
    cout << "Введите радиусы: ";
    int R1;
    int R2;
    cin >> R1 >> R2;
    float S1 = 3.14 * R1 * R1;
    float S2 = 3.14 * R2 * R2;
    float S3 = S2 - S1;
    cout << "Площадь первого: " << S1 << ", второго: " << S2 << ", кольца: " << S3 << endl;
    
    //Дана длина окружности, найти её радиус и площадь
    cout << "Задание 14" << endl;
    cout << "Введите длину окружности: ";
    int L;
    cin >> L;
    float R = L / (2 * 3.14);
    float S = 3.14 * R * R;
    cout << "Радиус: " << R << ", площадь: " << S << endl;
    
    //Дана длина окружности, найти её радиус и площадь
    cout << "Задание 15" << endl;
    cout << "Введите площадь круга: ";
    cin >> S;
    float D = sqrt(4 * S / 3.14);
    L = 3.14 * D;
    cout << "Диаметр: " << D << ", длина: " << L << endl;
    
    //Даны две точки, найти расстояние между ними (точки на одной координатной оси)
    cout << "Задание 16" << endl;
    cout << "Введите точки: ";
    int x1;
    int x2;
    cin >> x1 >> x2;
    int x = fabs(x2 - x1);
    cout << "Расстояние: " << x << endl;
    
    //Даны три точки на числовой оси A, B, C; найти длины AC и BC и их сумму
    cout << "Задание 17" << endl;
    cout << "Введите точки: ";
    int A;
    int B;
    int C;
    cin >> A >> B >> C;
    int AC = fabs(C - A);
    int BC = fabs(B - C);
    int sum = AC + BC;
    cout << "AC: " << AC << ", BC: " << BC << ", их сумма: " << sum << endl;
    
    //Даны три точки на числовой оси A, B, C; точка C меджу A и B, найти произведение AC и BC
    cout << "Задание 18" << endl;
    cout << "Введите точки: ";
    cin >> A >> B >> C;
    AC = C - A;
    BC = B - C;
    int proizv = AC * BC;
    cout << "Произведение: " << proizv << endl;
    
    //Даны координаты двух противополжных вершин прямоугольника, найти его площадь и периметр
    cout << "Задание 19" << endl;
    cout << "Введите точки (x1, y1, x2, y2): ";
    int y1;
    int y2;
    int y;
    cin >> x1 >> y1 >> x2 >> y2;
    x = fabs(x1 - x2);
    y = fabs(y1 - y2);
    P = 2 * (x + y);
    S = x * y;
    cout << "Периметр: " << P << ", площадь: " << S << endl;
    
    //Даны две точки, найти расстояние между ними 
    cout << "Задание 20" << endl;
    cout << "Введите точки (x1, y1, x2, y2): ";
    cin >> x1 >> y1 >> x2 >> y2;
    x = (x2 - x1) * (x2 - x1);
    y = (y2 - y1) * (y2 - y1);
    int l = sqrt(x + y);
    cout << "Расстояние между точками: " << l << endl;
    
}