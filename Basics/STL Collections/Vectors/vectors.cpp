#include <bits/stdc++.h>
using namespace std;

void declareVectors() {
    
    vector<int> v;

    // Adding elements
    v.push_back(1);
    v.emplace_back(2);

    // Adding pairs
    vector <pair<int,int>> v2;

    // Adding arrays
    v2.push_back({3,4});
    v2.emplace_back(5,6);

    // Size, default and copy
    vector<int> v3(5,20);       // {100,100,100,100,100} created
    vector<int> v4(5);          // vector with 0 or garbage values is created
    vector<int> v5(v);          // creates a copy of v

    // Accessing
    cout << v[1] << endl;
}

void iterators() {

    // Points to the memory address
    // i++ moves to the contiguous memory locations

    vector<int> v{1,2,3};
    vector<int>::iterator it = v.begin();

    cout << *(it) << " ";
    it++;
    cout << *(it) << " ";
    it++;
    cout << *(it) << endl;


    // Iterating via for loop
    for(vector<int>::iterator i = v.begin(); i != v.end(); i++) {
        cout << *(i) << " ";
    }
    cout << endl;


    // Auto: Datatype is automatically assigned depending on the datatype
    for(auto i = v.begin(); i != v.end(); i++) {
        cout << *(i) << " ";
    }
    cout << endl;


    // For each loop
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;

}


int methods() {

    // initialize
    vector<int> v{1,2,3};


    // erase
    v.erase(v.begin() + 1);
    cout << v[0] << " " << v[1] << endl;


    // pop_back
    v.pop_back();

    for(auto i:v) {
        cout << i << " ";
    }


    // clear
    v.clear();

    for(auto i:v) {
        cout << i << " ";
    }


    // empty
    cout << endl << v.empty() << endl;


    // insert
    v = {1,2,3};      
    v.insert(v.end(),2,4);      // index is always written in terms of v.begin()

    for(auto i:v) {
        cout << i << " ";
    }


    // size
    cout << endl << v.size() << endl;

}




int main()
{
    declareVectors();

    iterators();

    methods();

    return 0;
}