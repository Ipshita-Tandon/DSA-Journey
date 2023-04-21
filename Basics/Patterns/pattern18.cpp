#include <iostream>
using namespace std;

void printTriangle(int n) {
    // code here
    int asc = 64 + n;
    for(int i=0; i<n; i++) {
        asc = 64 + n;
        for(int j=0; j<=i; j++) {
            printf("%c ", asc--);
        }
        cout<<endl;
    }
}

int main()
{
    printTriangle(5);
    return 0;
}
