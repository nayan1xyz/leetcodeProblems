#include <bits/stdc++.h>
using namespace std;
 
int Add(int x, int y){
    while (y != 0){
        unsigned carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

int main()
{
    cout << Add(15, 32);
    return 0;
}
