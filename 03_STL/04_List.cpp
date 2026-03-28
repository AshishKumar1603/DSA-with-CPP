#include <bits/stdc++.h>
using namespace std;

//--->List in C++ STL is a doubly linked list where elements are not stored in contiguous memory. It allows efficient insertion and deletion operations but does not support random access.

//-->Vector → reading fast
//-->List → insertion/deletion fast

void explainList(){
    list<int> ls; 

    ls.push_back(10); //--> push_back is a member function of list which is used to add an element at the end of the list.{10}
    ls.push_front(20); //--> push_front is a member function of list which is used to add an element at the beginning of the list. {20,10}

    ls.emplace_back(30); //{20, 10, 30}
    ls.emplace_front(40); //{40, 20, 10, 30}

    //rest of the functions are same as vector except for insert function. list me insert function ka use karke hum kisi bhi position par element insert kar sakte hain. list me insert function ka syntax hai:
    list<int>::iterator it = ls.begin(); //--> here we are creating an iterator it which points to the first element of list ls. begin() is a member function of list which returns an iterator pointing to the memory address of the first element of the list.
    ls.insert(it, 50); //--> here we are inserting 50 at the position of iterator it. {50, 40, 20, 10, 30} //list me insert function ka syntax hai: insert(iterator position, value)
}