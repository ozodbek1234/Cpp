#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, num2;
    cin >> num1;
    cin >> num2;
    cout<<"num1+num2="<<num1+num2<<endl;
    cout << (num1 / (num2)) ;

    try
    {
        if(num2 == 0)
        throw 123;
        cout << num1 / num2 << endl;
    }
    catch(int i)
    {
        cout << "Error&"<< i << "-divide by 0!!!" << '\n';
    }
    cin.get();
    {
        char string[10];
        cout << "Введите стринг:";
        cin >> string;
        cout << string << endl;
    }
    return 0;

}