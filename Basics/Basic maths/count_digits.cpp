#include <iostream>
using namespace std;

int evenlyDivides(int N){
    int temp = N;
    int rem, count=0;

    // extracting digits
    while (temp != 0) {
        rem = temp%10;
        if (rem == 0) {
            temp /= 10;
            continue;
        } else if (N%rem == 0) {
            count++;
        }
        temp /= 10;
    }
    return count;
    
}

int main()
{
    cout<<evenlyDivides(5);
    return 0;
}