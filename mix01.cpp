#include <iostream>
#include <string.h>
#include <windows.h> //��� ������������� ��-� Sleep
using namespace std;

int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "����� '�����' �����:\t";
    cout << strlen( "�����" );
    cout << '\n';
    cout << "������ '�����' �����:\t";
    cout << sizeof( "�����" );
    cout << endl;
	//Sleep(1000);
	cin.get();
}