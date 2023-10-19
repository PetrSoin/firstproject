#include <iostream>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int a = 5;
    int b = 3;
    int sum = a + b;// сумма равна 8
    int diff = a - b;// разность равна 2
    int prod = a * b;// произведение равно 15
    int quot = a / b;// частное равно 1
    int ost = a % b;// остаток от деления равен ...
    a ++;// инкремент(увелечение значения на единицу)
    a --;// дигримент(обратно инкрименту)
    double x = 4;
    double x1 = pow(x,2);// возвел во вторую степень
    double x2 = sqrt(x);// нахождение корня из икс
    double x3 = abs(x);
    int MaxValue = max(a,b);// равно 5
    double x4 = 2.6;
    int rounded = round(x4);//округлил до 3
    srand(time(NULL));// инициализация генератора случайных чисел
    int randomNum = rand();//случайное время
}
