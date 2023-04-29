#include <bits/stdc++.h>

using namespace std;


void explainSet() {

    // initialize
    set<int> st;

    // insert
    st.insert(2);    // {2}
    st.insert(3);    // {2,3}
    st.insert(3);    // {2,3} - no repetition

    // emplace
    st.emplace(6);   // {2,3,6}
    st.emplace(10);  // {2,3,6,10}

    // find
    auto it1 = st.find(3);    // how to print this iterator?
    auto it2 = st.find(6);

    // erase
    st.erase(2);             // argument: ele
    st.erase(it1,it2);       // argument: address

    // accessing
    for(auto i:st) {
        cout << i << " ";
    }  
    cout << endl;

    // count
    cout << st.count(3) << endl;


    // lower and upper bound



    
}


void explainMultiSet() {

    // initialize
    multiset<int> ms = {2,2,3,3,4,5};

    // access
    for (auto i : ms) {
        cout << i << " ";
    }
    cout << endl;

    // insert
    ms.insert(1);   // {1}
    ms.insert(1);   // {1,1}
    ms.insert(1);   // {1,1,1} - repetition allowed

    // count
    cout << ms.count(1) << endl;

    // erase
    ms.erase(ms.find(1));   // iterator is passed - single 1 erased
    ms.erase(1);            // if ele is passed as argument - all occ of 1 are deleted

    // ms.erase(ms.find(2), ms.find(2)+2);      // error?


}


void explainUSet() {

    // initialize
    unordered_set<int> us = {2,1,2,7,5,10};

    // access
    for (auto i : us) {
        cout << i << " ";       // unsorted but unique ele
    }
    cout << endl;

}



int main() {

    explainSet();

    explainMultiSet();

    explainUSet();

    return 0;
}

