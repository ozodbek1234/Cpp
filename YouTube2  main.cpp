#include<iostream>
#include<string>
using namespace std;
int main(){
        string name_1, name_2;
        cout << "Enter your name_1: ";
        getline(cin, name_1);
        cout << "Enter your name_2: ";
        getline(cin, name_2);
        cout << name_1 + name_2 << endl;

        return 0;
}