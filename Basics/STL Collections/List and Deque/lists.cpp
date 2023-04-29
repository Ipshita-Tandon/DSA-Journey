#include <bits/stdc++.h>

using namespace std;

void explainList() {
    list<int> ls;

    // push_back
    ls.push_back(3);

    // push_front
    ls.push_front(2);

    // emplace_back
    ls.emplace_back(4);

    // emplace_front
    ls.emplace_front(1);

    // accessing
    for(auto i:ls) {
        cout << i << " ";
    }
    cout << endl;

    // pop_back()
    ls.pop_back();

    // pop_front()
    ls.pop_front();

    for(auto i:ls) {
        cout << i << " ";
    }
    cout << endl;


    // reverse
    ls = {1,2,3,4};
    ls.reverse();

    for(auto i:ls) {
        cout << i << " ";
    }
    cout << endl;


    // sort
    ls.sort();

    for(auto i:ls) {
        cout << i << " ";
    }
    cout << endl;

    // sort and reverse update list in place

}


void explainDeque() {
    deque<int> dq;

    // push_back
    dq.push_back(3);

    // push_front
    dq.push_front(2);

    // emplace_back
    dq.emplace_back(4);

    // emplace_front
    dq.emplace_front(1);

    // accessing
    for(auto i:dq) {
        cout << i << " ";
    }
    cout << endl;

    // pop_back()
    dq.pop_back();

    // pop_front()
    dq.pop_front();

    for(auto i:dq) {
        cout << i << " ";
    }
    cout << endl;

}


int main()
{
    explainList();

    explainDeque();

    return 0;
}

