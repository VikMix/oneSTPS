#include <iostream>
#include <string.h>
#include <windows.h> //Для использования фу-и Sleep
using namespace std;

int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Длина 'Улисс' равна:\t";
    cout << strlen( "Улисс" );
    cout << '\n';
    cout << "Размер 'Улисс' равен:\t";
    cout << sizeof( "Улисс" );
    cout << endl;
	//Sleep(1000);
	cin.get();
}