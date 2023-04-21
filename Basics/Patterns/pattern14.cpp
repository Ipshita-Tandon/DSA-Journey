#include <iostream>
using namespace std;

void printTriangle(int n) {
    // code here
    int asc = 65;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            printf("%c" , asc+j);
        }
        cout<<endl;
    }
}

// OR

void printTriangle2(int n) {
    for(int i=0; i<n; i++) {
        for(char ch='A'; ch<='A'+i; ch++) {
            cout<<ch;
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