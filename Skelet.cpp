// ForGit.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "funcs.h"
using namespace std;


int main()
{
    int count;
    double a, b, result;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "What do you want?\n";
    cout << "1-Summation\n";
    cout << "2-Subtraction\n";
    cout << "3-Multiplication\n";
    cout << "4-Division\n";
    cin >> count;
    switch (count)
    {
    case 1: { result=Sum(a,b); break; }
    case 2: { result=Sub(a,b); break; }
    case 3: { result=Mul(a,b); break; }
    case 4: { result=Div(a,b); break; }
    default:
        cout << "Wrong enter" << endl;
    }
    cout << "Your result: " << result << endl;
    system("pause");
    return 0;
}


