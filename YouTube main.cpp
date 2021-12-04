#include<iostream>
#include<string.h>
using namespace std;
    int main(){
        char string[] = "Your name is:" ;
        char in_string[500];
        cout << "Type your name: ";
        gets(in_string);
        cout << string << in_string << endl;
        cout << strlen(in_string) << endl;
        {
                

        }
        return 0;
    }