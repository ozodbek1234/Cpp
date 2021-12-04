#include<iostream>
#include<string.h>
using namespace std;
int main(){
         char string[] = "Ввыденная строка: ";
            cout << "Введите строку: ";
            char in_string[500];
            gets(in_string);
            cout << string << in_string << endl;
            cout << strlen(in_string) << endl;
            {
                 char s1[6] = "Ozodbek";
                 char s2[5] = "Behruz";
               cout << strcpy(s1) << endl;




            }

            return 0;
}