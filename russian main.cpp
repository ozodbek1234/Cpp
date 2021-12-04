#include<iostream>
#include<locale.h>
#include<windows.h>
using namespace std;
int main(){
      setlocale(LC_ALL, "Russian");
    cout << "Русский язык в консоли!"<< endl;
    getchar();
    return 0;
}