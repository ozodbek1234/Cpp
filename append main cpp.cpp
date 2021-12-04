#include<iostream>
#include <string>
using namespace std;
int main(){
string firstName = "Ozodbek";
string lastName = "Toshpulatov";
string fullName = firstName.append(lastName);
cout << fullName << " "<< "\n";
{

    string x = "10";
    string y = "20";
    string z = x + y;
    cout << z << "\n";
}
{
    string Name1 = "NDKI";
    string Name2 = "NKMK";
    string Name3 = Name1.append(Name2);
    cout << Name3 << " "<< "\n";
}
return 0;
}