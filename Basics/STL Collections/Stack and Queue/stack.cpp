#include <bits/stdc++.h>
using namespace std;

int explainStack() {
    
    // initialize
    stack<int> st;

    // push
    st.push(1);
    st.push(2);

    // emplace
    st.emplace(3);
    st.emplace(4);

    // pop
    st.pop();

    // top
    cout << st.top() << endl;

    // cannot access using for loop

    // size
    cout << st.size() << endl;

    // empty
    cout << st.empty() << endl;

    // swap
    stack<int> st2;
    st2.push(5);
    st.swap(st2);

    cout << st.top() << endl;

}



int explainQueue() {
    
    // initialize
    queue<int> q;

    // push
    q.push(1);
    q.push(2);

    // emplace
    q.emplace(3);
    q.emplace(4);

    // pop - removes the first element (FIFO)
    q.pop();

    // back - returns the last added element
    q.back() += 5;
    cout << q.back() << endl;

    // front - returns first added element
    cout << q.front() << endl;

    // cannot access using for loop

    // size
    cout << q.size() << endl;

    // empty
    cout << q.empty() << endl;

    // swap
    queue<int> q2;
    q2.push(5);
    q.swap(q2);

    cout << q.back() << endl;

}



int explainPQ() {
    
    // By default : Maximum Heap

    // initialize
    priority_queue<int> pq;

    // push
    pq.push(2);
    pq.push(5);

    // emplace
    pq.emplace(3);
    pq.emplace(10);

    // pop - removes 10
    pq.pop();

    // top - returns 5
    cout << pq.top() << endl;

    // cannot access using for loop

    // size
    cout << pq.size() << endl;

    // empty
    cout << pq.empty() << endl;

    // swap
    priority_queue<int> pq2;
    pq2.push(8);
    pq.swap(pq2);

    cout << pq.top() << endl;



    ////////// To arrange elements in descending order ///////////

    // Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq3;

    // push
    pq.push(2);
    pq.push(5);

    // emplace
    pq.emplace(3);
    pq.emplace(10);

    // pop - removes 2
    pq.pop();

    // top - returns 3
    cout << pq.top() << endl;

}


int main()
{
    explainStack();

    explainQueue();

    explainPQ();

    return 0;
}

