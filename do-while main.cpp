#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int i = 1;
    float h;
    setlocale(LC_ALL,"");
    do
    {
        
        h += i;
        i++;
        /* code */
        
    } while (i <= 10);
  cout << h << "\n";

    return 0;
}