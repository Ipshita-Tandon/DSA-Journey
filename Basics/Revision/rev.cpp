
#include <iostream>
using namespace std;

void strings() {
        
    // STRINGS

    // getline function
    string str;
    getline(cin, str);
    cout<<str<<endl;

    // id before
    cout<<&str<<endl;

    str[0] = 'B';
    cout<<str<<endl;

    // id after
    cout<<&str<<endl;       // same id! changed in place!!


    // manual input
    string s1, s2;
    cin>>s1>>s2;
    cout<<s1<<" "<<s2;

    // .size(), .length()
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;
}

void arrays() {

    // Taking array as input

    // manual way
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << "arr[3]: " << arr[3] << endl;

    // using loops
    int arr2[5];
    for(int i=0; i<5; i++) {
        cin >> arr2[i];
    }

    for(int i=0; i<5; i++) {
        cout << arr2[i] << " ";
    }
}

// Pass by value
void sum1(int num) {
    num += 5;
    cout<< num<<" ";
}

// Reference variable   // Easiest way! :)
void sum2(int &num) {
    num = num+5;
    cout<< num<<" ";
}

// Pass by reference
void sum3(int *num) {   // num becomes a pointer
    *num += 5;
    cout<<*num<<" ";
}

// Passing an array
void sum4(int arr[], int n) {
    arr[0] += 100;
    cout << "Inside function arr[0]: " << arr[0] << endl;
}

int main()
{

    // strings();

    // arrays();

    int num;
    cin>>num;

    // Pass by value
    sum1(num);
    cout<<num<<endl;;

    // Reference variable
    sum2(num);
    cout<<num<<endl;

    // Pass by reference
    sum3(&num);
    cout<<num<<endl;

    int n = 5;
    int arr[n] = {1,2,3,4,5};

    // Passing an array
    sum4(arr, n);
    cout << "Inside int main arr[0]: " << arr[0] << endl;

    return 0;
}

