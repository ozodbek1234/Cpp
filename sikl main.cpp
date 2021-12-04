#include<iostream>
using namespace std;
int main()
{
        int i = 0;
        while(i < 10){
            i++;
    
            if(i == 3)
            continue;
            if(i == 6)
            break;
            cout << i << "\t" ;
        }

}
