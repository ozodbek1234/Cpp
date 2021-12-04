#include<iostream>
#include <string>
using namespace std;
int main(){
string firstName = "Ozodbek";
string lastName = "Toshpulatov";
string fullName = firstName + " " + lastName;
cout << fullName << " "<< "\n";
{
    string txt = "Ozodbek Toshpulatov Izzatillayevich";
    cout << "длина ряда = " << txt.length();
cout << endl;
     cout << "длина ряда 2 = " << txt.size() << "\n";

}
{
    string name = "Ozodbek";
    cout << name[1];

}
cout << endl;
{
    string myString = "Kompyuter";
    myString[0] = 'S';
    cout << myString << endl;
}
return 0;
}

