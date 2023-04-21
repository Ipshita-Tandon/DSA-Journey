#include <iostream>
using namespace std;

void printTriangle(int n) {
    // code here
    int count = -1;
    for(int i=n; i>0; i--) {
        // for spaces
        for(int k=i-1; k>0; k--) {
        cout<<" ";                
        }
        // for stars
        count += 2;
        for(int j=1; j<=count; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    printTriangle(5);
    return 0;
}