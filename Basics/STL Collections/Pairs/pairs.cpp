#include <bits/stdc++.h>

using namespace std;

void explainPair() {

    // datatype: int, tuple, string, array
    // p1 cannot be directly printed

    // Declaration
    pair<int, int> p1 = {1,3};

    // Access
    cout << p1.first << " " << p1.second << endl;

    // Update
    p1.first = 100;
    cout << p1.first << endl;

    // Nested Pairs
    pair<int, pair<int, int>> p2 = {1,{3,4}};
    cout << p2.second.first << " " << p2.second.second << endl;

    // Pair Array
    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[1].second << endl;

    // Comparison
    pair<int, int> p3 = {1,3};
    pair<int, int> p4 = {2,2};
    cout << (p3 <= p4) << endl;     // Value by value comparison

}


void methodFunctions() {

    // make_pair()

    pair<int, char> p1;
    p1 = make_pair(1,'A');      // round brackets!
    cout << p1.first << endl;

    // swap

    pair<double, string> p2 = {3.5, "Pair 2"};
    pair<double, string> p3 = {4.5, "Pair 3"};

    p2.swap(p3);

    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second << endl;

    // tie

    int a;
    char b;
    tie(a,b) = p1;
    cout << a << " " << b << endl;

}

int main() {

    explainPair();

    methodFunctions();
    
    return 0;
}

