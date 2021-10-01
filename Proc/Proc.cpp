// Proc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cmath>
#include <iostream>
using namespace std;

void powera3(int a, int& b) {
    b = a * a * a;
}

void powera234(int a, int& b, int& c, int& d) {
    b = a * a;
    c = a * a * a;
    d = a * a * a * a;
}

void triangleps(double a, double& p, double& s) {
    p = 3 * a;
    s = a * a * sqrt(3) / 4;
}

double proc34(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * proc34(n - 1);
    }
}

double proc35(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * proc34(n - 2);
    }
}

int main()
{
    int result;
    powera3(5, result);
    cout << result << endl;
}

