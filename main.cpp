#include<iostream>
#include<vector>
#include<string>
#include<ctime>
#include<algorithm>
#include<cmath>
using namespace std;

long double g = 9.8298785762;
long double PI = 3.141592653589793238462643383279;
inline void text_out(string s); // эта функция отвечает за удобный вывод данных в консоль пользователя
inline long double gradrad(long double a); // эта функция переводит градусы в радианы
inline long double radgrad(long double a); // эта функция переводит радианы в градусы
int main()
{
    system("chcp 65001");
    long double V0;
    text_out("Введите начальную скорость (м/c):");
    cin >> V0;
    long double corner;
    text_out("Введите угол броска (в радианах):");
    cin >> corner;

    long double up_time = V0 * sin(corner) / g;

    cout << "Время подъема равно: " << '\t' << '\t' << up_time << " секунд" << endl;

    long double all_time = V0 * V0 * sin(corner) * sin(corner) / (2 * g);

    cout << "Общее время полета равно: " << '\t' <<  all_time << " секунд" << endl;

    long double L_max = (V0 * V0) * sin(2 * corner) / g;

    cout << "Дальность полета равна:" << '\t' << '\t' << L_max << " метров" << endl;


}

// System functions
void text_out(string s)
{
    cout << s << endl;
}

// Math functions
inline long double gradrad(long double a)
{
    return a * PI / 180;
}
inline long double radgrad(long double a)
{
    return a * 180/PI;
}

// Phys
