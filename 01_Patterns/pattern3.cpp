#include <iostream>
using namespace std;

void printTriangle(int n) {
    // code here
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    printTriangle(5);
    return 0;
}