#include <bits/stdc++.h>
using namespace std;

int explainQueue(){
    queue<int> q;
    q.push(1); //--> push is a member function of queue which is used to add an element at the end of the queue. {1}
    q.push(2);//--> here we are adding 2 at the end of the queue. {1,2}
    q.emplace(3);//--> emplace is a member function of queue which is used to add an element at the end of the queue. It is similar to push but it constructs the element in place. {1,2,3}

    q.back() +=10; //--> back is a member function of queue which is used to access the last element of the queue. here we are adding 10 to the last element of the queue. {1,2,13}
    cout<<q.back()<<endl; //--> output: 13

    cout<<q.front()<<endl; //--> output:1
    q.pop(); //--> pop is a member function of queue which is used to remove the first element of the queue. {2,13} 
    cout<<q.front()<<endl; //--> output:2
    q.pop(); //--> pop is a member function of queue which is used to remove the first element of the queue. {13}
    cout<<q.front()<<endl; //--> output:13
    q.pop(); //--> pop is a member function of queue which is used to remove the first element of the queue. {}

    //size swap empty same as stack and deque
}