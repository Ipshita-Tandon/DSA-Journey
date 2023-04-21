#include <iostream>
#include <cmath>
using namespace std;

int reverse(int x) {
    long long rev = 0;
    int temp = x;

    // reversing num
    while (temp!=0) {
        rev *= 10;
        rev += temp%10;
        temp /= 10;
    }

    // check if rev lies in the int range
    if (rev > pow(-2,31) && rev < pow(2,31)-1) {
        return rev;
    } else {
        return 0;
    }
}

int main()
{
    cout<<reverse(-321);
    return 0;
}