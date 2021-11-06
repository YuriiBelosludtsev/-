#include <iostream>
#include <cmath>
using namespace std;
int a(0), t(0);
int main ()
{
    while (a<100) 
    {
       a+=2;
       t+=a;
    }
    cout <<"Summ: "<< t<<endl; 
    return 0;
}