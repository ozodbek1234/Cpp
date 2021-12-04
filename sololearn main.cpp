#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "n="; cin >> n;
    for(int i = n; i >=1; i--){
    cout << i << "\n";
    if(i%5==0){
        cout << "Веер" << endl;
    }
    }
    return 0;

}