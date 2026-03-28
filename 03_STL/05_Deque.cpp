#include <bits/stdc++.h>
using namespace std;

void explaindeque(){
    deque<int> dq; //--> deque is a double ended queue which allows insertion and deletion of elements from both ends. It is implemented as a dynamic array of fixed size blocks. It provides fast insertion and deletion at both ends but does not support random access.

    dq.push_back(10); //--> push_back is a member function of deque which is used to add an element at the end of the deque. {10}
    dq.push_front(20); //--> push_front is a member function of deque which is used to add an element at the beginning of the deque. {20,10}

    dq.emplace_back(30); //{20, 10, 30}
    dq.emplace_front(40); //{40, 20, 10, 30}

    //-->rest of the functions are same as vector except for insert function. deque me insert function ka use karke hum kisi bhi position par element insert kar sakte hain. deque me insert function ka syntax hai:
    deque<int>::iterator it = dq.begin(); //--> here we are creating an iterator it which points to the first element of deque dq. begin() is a member function of deque which returns an iterator pointing to the memory address of the first element of the deque.
    dq.insert(it, 50); //--> here we are inserting 50 at the position of iterator it. {50, 40, 20, 10, 30} //deque me insert function ka syntax hai: insert(iterator position, value)
}