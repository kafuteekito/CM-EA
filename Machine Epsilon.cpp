#include <iostream>

using namespace std;

int main()
{
    int n=0;
    float e=1; //n=8
    //double e=1; //n=16
    //long double e=1; //n=20
    while(1+e>1)
    {
        e=e/10;
        n++;
    }
    cout<<n;
    return 0;
}