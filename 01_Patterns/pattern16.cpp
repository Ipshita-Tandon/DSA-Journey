#include <iostream>
using namespace std;

void printTriangle(int n) {
    // code here
    int asc = 65;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            printf("%c" , asc+i);
        }
        cout<<endl;
    }
}

int main()
{
    printTriangle(5);
    return 0;
}