/*
Задание 2. Напишите программу, которая создает двух-
мерный массив и заполняет его по следующему принципу:
пользователь вводит число (например, 3) первый элемент
массива принимает значение этого числа, последующий
элемент массива принимает значение этого числа + 1 (т.е.
4 для нашего примера), третий элемент массива предыду-
щий элемент + 1 (т.е. 5 для нашего примера). Созданный
массив вывести на экран.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    const int numRows = 3;
    const int numCols = 3;
    int arr[numRows][numCols] = { 0 };

    cout << "\nVvedite na4alo massiva  \n\n";
    int n;
    cin >> n;
    cout << "\n";

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            arr[i][j] = n;
            n += 1;
            cout << arr[i][j] << "\t";
        }
        cout << "\n\t\n";
    }

}