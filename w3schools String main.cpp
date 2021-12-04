#include<iostream>
#include<string>
#include<locale>
#include<windows.h>
using namespace std;
int main(){
string name = "Toshpulatov Ozodbek Izzatillayevich";
cout << "Длина сторока " << name.length();
cout << endl;
cout << "Длина сторока2 " << name.size();
cout << endl;

{
    string myString = "Hello";
    cout << myString[0] << endl;

}
{
    setlocale(LC_ALL, "Russian");
    string firstname;
    cout << "Введите какое-то слово";
    cin >> firstname;
    cout << "вы ввелили:" << firstname << endl; 
}
system("chcp 1251");
return 0;
}