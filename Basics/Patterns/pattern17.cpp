#include <iostream>
using namespace std;

void printTriangle(int n) {
    // code here
    int count = 1;
    int asc = 65;
    for(int i=0; i<n; i++) {
        // for spaces
        for(int k=n-i-1; k>0; k--) {
            cout<<" ";
        }
        
        // for alpha
        asc = 65;
        for(int j=0; j<count; j++) {
            if (j>(count-2)/2) {
                printf("%c", asc--);
            } else {
                printf("%c", asc++);
            }
        }
        count = count + 2;
        cout<<endl;

    }
}

int main()
{
    printTriangle(4);
    return 0;
}