/*
 Amerike university
 Author: Julio López
 Practica #: 8
 Fecha: 04/03/25
 Description: This program shall ask the user a number above 0, and display that times of numbers following the fibbonacci sequence 
 */

 #include <iostream>
using namespace std;
int main(){

    int N;
    int num1 = 1;
    int num2 = 1;
    int res1;
    int res2;

    cout << "Type a number above 0 ";
    cin >> N;
    
    if (N == 1)
    {
        cout << "1";
    }        
    else if (N == 2)
    {
        cout << "1 1 ";
    }
    else if (N>2)
    { 
        cout << "1 1 ";
    for (int i = 2; i < N; i++)
    {
        res1 = num1+num2;
        cout << res1 << " ";
        num1 = num2;
        num2 = res1;
    }
    }

    
}
