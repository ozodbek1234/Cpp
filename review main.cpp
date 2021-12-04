#include<iostream>
#include<locale.h>
#include<windows.h>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
setlocale(LC_CTYPE, "rus");// русский консоль
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
/*
//char string[100];
string firstName = "Hp";
string lastName = "Computer";
string fullName = firstName.append(+ " "+lastName) ;
cout << fullName << endl;
{
string work = "Hp computer";
cout << work.length() << endl;
cout << work.size() << endl;
}
{
        string myWord = "Abduaziz";
        cout << myWord[1,2] << "\n";
        string myCentense = "Telephone";
        myCentense[0] = 'P';
        cout << myCentense << endl;
}
{
        string firstname ;
        cout << "Type your first name: ";
        cin >> firstname;
        cout << "your name is: "<< firstname << endl;
}
{
      cout << round(2.6)<< "\n";
      cout << log(2) << "\n";
      cout << ceil(3.5) << "\n";
      cout << floor(4.6);
      cout << endl;
        */
      {
            char string[] = {'H','e','l','l','o','\0'};
           cout << "line = " << strlen(string) << endl;
      }
}
return 0;
}