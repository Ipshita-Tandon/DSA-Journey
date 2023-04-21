#include <iostream>
#include <cmath>
using namespace std;

string armstrongNumber(int n){
    // code here
    int num = 0;
    int temp = n;
    int d = 0;
    
    // count number of digits
    while(temp!=0) {
        d++;
        temp /= 10;
    }
    
    temp = n;
    // armstrong num
    while (temp!=0) {
        num += pow(temp%10,d);
        temp /= 10;
    }
    
    if (num == n) {
        cout<<"Yes";
    } else {
        cout<<"No";
    }
    
    
}

int main()
{
    armstrongNumber(370);
    return 0;
}