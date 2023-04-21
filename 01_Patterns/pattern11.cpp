#include <iostream>
using namespace std;

void printTriangle(int n) {
    // code here
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            if ((i+j)%2 == 0) {     // (row + column) even or odd
                cout<<1<<" ";
            } else {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}

// OR

void printTriangle2(int n) {
    int start = 1;
    for(int i=0; i<n; i++) {
        if (i%2==0) start = 1;      // even or odd row
        else start = 0;
        for(int j=0; j<=i; j++) {
            cout<<start<<" ";
            start = 1 - start;      // nice logic
        }
        cout<<endl;
    }
}

int main()
{
    printTriangle(5);
    printTriangle2(5);
    return 0;
}