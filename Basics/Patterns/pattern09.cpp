#include <iostream>
using namespace std;

void printDiamond(int n) {
    // top triangle
    for(int i=1; i<=n; i++) {
        // for spaces
        for(int k=n-i; k>0; k--) {
            cout<<" ";
        }
        for(int j=1; j<=i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    // bottom triangle
    for(int i=1; i<=n; i++) {
        // for spaces
        for(int k=1; k<i; k++) {
            cout<<" ";
        }
        for(int j=n+1-i; j>0; j--) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    printDiamond(5);
    return 0;
}