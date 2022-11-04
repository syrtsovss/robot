#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

map <string, double> form { // Структура данных, отвечающая за значение данной физической величины, в противном случае это 0. В теории, сюда можно закинуть рандомные константы для удобства дебага
        {"VO", 0},
        {"t", 0},
        {"t_end", 0},
        {"V_end", 0},
        {"m", 0},
        {"g", 9.81}
};
map <string, bool> known { // Структура данных, отвечающая за то, знаем ли мы данную физическую величину
        {"VO", false},
        {"t",  false},
        {"t_end", false},
        {"V_end", false},
        {"m", false},
        {"g", true}

};

vector <string> claims { // Вектор, хранящий физические формулы
    "F=m*a",
    "F_g=m*g",
    "p=F/s",
    "x=x0+V0*t+a*t^2/2",
    "F_arch = po_fluid*g*h"
};


void get_it(vector<string> &var, string equ); // Функция, закладывающая в ПУСТОЙ вектор, переданный по ссылке, величины, известные в формуле
template<typename T> void out_vec (vector<T>& a); // Функция вывода любого вектора
template<typename T> void out_test (vector<T>& a); // Функция тестового вывода вектора (вывод не распространяется в консоль тестирующей системы, в Сlion подсвечивается красным
inline void get_beauty (string inputt, vector<string>& input);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);

    vector<vector<string>> tex; // в этом векторе лежат все данные формул
    for(int i = 0; i < claims.size(); i++){
        vector <string> var;
        get_it(var, claims[i]);
        tex.push_back(var);
        out_test(tex[i]); // ЗДЕСЬ ЛЕЖИТ ТЕСТОВЫЙ ВЫВОД ВЕКТОРА ФОРМУЛ
    } // Вектор заполнился всеми данными формул

    vector <string> input; // Вектор входных данных
    cin.ignore(); // команда, НЕОБХОДИМАЯ для нормальной работы гетлайна
    string input_full;
    getline(cin, input_full); //  Осторожно, ввод необходимо начинать С ПРОБЕЛА и В ОДНУ СТРОКУ. Используется getline, чтобы программа не зависала при каждом использовании из-за неизвестного количества переменных.
    get_beauty(input_full, input); // теперь в векторе input лежат данные задачи




    return 0;
}

void get_it(vector<string> &var, string equ)
{
string period;
for(int i = 0; i < equ.size(); i++)
{
char h;
h = equ[i];
if(h != ')' && h != '(' && h != '=' && h != '*' && h != '-' && h != '/' && h != '+')
{
period += h;
}
else {
var.push_back(period);
period.clear();
}
}
if(period.empty())
{

} else
{
var.push_back(period);
period.clear();
}
return;
}

template<typename T> void out_vec (vector<T>& a){
    for(int i = 0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << '\n';
}

template<typename T> void out_test (vector<T>& a){
    for(int i = 0; i < a.size(); ++i){
        cerr << a[i] << " ";
    }
    cerr << '\n';
}

inline void get_beauty (string inputt, vector<string> &input)
{
    string gap;
    for(int i = 0; i < inputt.size(); i++)
    {
        if(inputt[i] == ' ')
        {
            input.push_back(gap);
            gap.clear();
        } else
        {
            gap += inputt[i];
        }
    }
    input.push_back(gap);
    gap.clear();
    return;
}


/*
 string equ;
 cin >> equ;
 string left, right;
 bool flag = true;

 for(int i = 0; i < equ.size(); i++)
 {
     if(equ[i] == '=')
     {
         flag = false;
         continue;
     }
     if(flag == true)
     {
         left = left + equ[i];
     } else
     {
         right = right + equ[i];
     }
 }

*/