#include <iostream>
using namespace std;

void printTriangle(int n) {
    // top triangle
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    // bottom triangle
    for(int i=1; i<=n; i++) {
        for(int j=n-i; j>0; j--) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

// OR

void printTriangle2(int n) {
    for(int i=1; i<=2*n-1; i++) {
        int stars = i;
        if (i>n) stars = 2*n-i;
        for(int j=1; j<=stars; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    printTriangle(2);
    printTriangle2(10);
    return 0;
}