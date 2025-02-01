#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    float z;

    cout << "input nilai a: ";
    cin >> a;
    cout << "input nilai b: ";
    cin >> b;
    
    z = static_cast<float>(a) / static_cast<float>(b);

    printf("hasil z = %.2f\n", z);
 
} 
