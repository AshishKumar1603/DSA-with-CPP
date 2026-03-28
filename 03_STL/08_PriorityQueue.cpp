#include <bits/stdc++.h>
using namespace std;

int explainPQ(){
    priority_queue<int> pq; //--> priority_queue is a container adaptor which provides constant time lookup of the largest (by default) element, at the expense of logarithmic insertion and extraction. It is implemented as a binary heap.

    
    pq.push(10); //{10}
    pq.push(5); //{10,5}
    pq.push(15); //{15, 10, 5}
    pq.emplace(20); //{20, 15, 10, 5}

    cout<< pq.top(); //--> top is a member function of priority_queue which is used to access the largest element of the priority_queue. output: 20

    pq.pop(); //--> pop is a member function of priority_queue which is used to remove the largest element of the priority_queue. {15, 10, 5}
    cout<<pq.top(); //--> output: 15

    //sizeswap empty function same as other containers

    //Minimum Heap: to create a minimum heap we can use the greater<int> comparator as the third template argument of priority_queue.

    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(10); //{10}
    minHeap.push(8); //{8,10}
    minHeap.push(12); //{8,10,12}
    minHeap.emplace(5); //{5,8,10,12}

    cout<< minHeap.top(); //--> output: 5
}