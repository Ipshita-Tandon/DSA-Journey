#include <iostream>
using namespace std;

void printTriangle(int n) {
    // code here
    int count = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

int main()
{
    printTriangle(5);
    return 0;
}