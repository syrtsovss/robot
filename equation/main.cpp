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
    "x=x0+V0*t+a*(t^2)/2",
    "F_arch=po_fluid*g*h"
};


void get_it(vector<string> &var, string equ); // Функция, закладывающая в ПУСТОЙ вектор, переданный по ссылке, величины, известные в формуле
template<typename T> void out_vec (vector<T>& a); // Функция вывода любого вектора
template<typename T> void out_test (vector<T>& a); // Функция тестового вывода вектора (вывод не распространяется в консоль тестирующей системы, в Сlion подсвечивается красным
inline void get_beauty (string inputt, vector<string>& input);
bool number_test (string s); // Эта функция проверяет,  является ли строка числом. Необходимо для того, чтобы понять, что на самом деле является неизвестным, а что константой
string find_form(vector<vector <string>> tex, vector<string> claims, vector<string> input);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);

    vector<vector<string>> tex; // в этом векторе лежат все данные формул (отсортированные)
    for(int i = 0; i < claims.size(); i++){
        vector <string> var;
        get_it(var, claims[i]);
        sort(var.begin(), var.end());
        tex.push_back(var);
        out_test(tex[i]); // ЗДЕСЬ ЛЕЖИТ ТЕСТОВЫЙ ВЫВОД ВЕКТОРА ФОРМУЛ
    } // Вектор заполнился всеми данными формул

    vector <string> input; // Вектор входных данных
    cin.ignore(); // команда, НЕОБХОДИМАЯ для нормальной работы гетлайна
    string input_full;
    getline(cin, input_full); //  Осторожно, ввод необходимо начинать С ПРОБЕЛА и В ОДНУ СТРОКУ. Используется getline, чтобы программа не зависала при каждом использовании из-за неизвестного количества переменных.
    get_beauty(input_full, input); // теперь в векторе input лежат данные задач
    sort(input.begin(), input.end()); // СОРТИРОВКА ВЕКТОРА ВВОДА, ПРИ ИЗМЕНЕНИИ СПОСОБА ВВОДА ТРЕБУЕТСЯ ОБРАТИТЬ ОСОБОЕ ВНИМАНИЕ
    cout << find_form(tex, claims, input);


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
    if(number_test(period) == false)
    {
        var.push_back(period);
    }
period.clear();
}
}
if(period.empty())
{

} else
{
    if(number_test(period) == false)
    {
        var.push_back(period);
    }
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

bool number_test (string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7' && s[i] != '8' && s[i] != '9' && s[i] != '.')
        {
            return false;
        }
    }
    return true;
}
string find_form(vector<vector <string>> tex, vector<string> claims, vector<string> input)
{
      for(int i = 0; i < tex.size(); i++)
      {
          vector <string> interval = tex[i];
          bool flag = true;
          bool destr = false;
          for(int j = 0; j < interval.size(); j++)
          {
              bool flag2 = false;
              for(int l = 0; l < input.size(); l++)
              {
                  if(interval[j] == input[l])
                  {
                      flag2 = true;
                      break;
                  }
              }
              if(flag2 == false)
              {
                  if(flag == true)
                  {
                      flag = false;
                  }
                  else
                  {
                      destr = true;
                      break;
                  }
              }
          }
          if(destr == true)
          {
              continue;
          }
          return claims[i];
      }
      return "ERROR, now robo can't solve it";
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