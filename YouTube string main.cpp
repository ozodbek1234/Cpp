#include<iostream>
#include<string>
using namespace std;
int main(){
    char *str[] = {'Hello', 'world','Hp'};
    for(int i = 1; i < 3; i++)
    cout << str[i] << endl;
    return 0;
}