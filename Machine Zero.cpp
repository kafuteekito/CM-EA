#include <iostream>

using namespace std;

int main()
{
    int n;
    float z=1; // n=46
    //double z=1; // n=324
    //long double z=1; //n=4951
    while (2*z > z)
    {
        z /= 10;
        n++;
    }
    cout<<n;
    return 0;
}