#include <iostream>
using namespace std;

void printTriangle(int n) {
    // code here
    int spaces=2*(n-2)+1;
    for(int i=1; i<=n; i++) {
        // left number triangle
        for(int j=1; j<=i; j++) {
            cout<<j<<" ";
        }
        
        // middle spaces
        for(int j=0; j<=spaces; j++) {
            cout<<"  ";
        }
        spaces = spaces - 2;
        
        // right number triangle
        for(int k=i; k>0; k--) {
            cout<<k<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    printTriangle(5);
    return 0;
}