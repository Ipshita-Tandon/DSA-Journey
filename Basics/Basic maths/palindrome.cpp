#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    int temp = x;
    long rev=0;

    if (x<0) {
        return false;
    } else {
        while (temp != 0) {
            rev *= 10;
            rev += temp%10;
            temp /= 10;
        }

        return (rev==x);
    }

}

int main()
{
    cout<<isPalindrome(121);
    return 0;
}