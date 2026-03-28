/* 1️⃣ Containers in STL

->Containers ka kaam hai data ko store karna.

>>3 types ke containers important hote hain:

>.Sequence Containers
>.Associative Containers
>.Unordered Containers */


//-------------1.1: Pair: -----------------------------

// It is part of utility library , it store 2 value together to create pair.
#include<bits/stdc++.h>
using namespace std;

void pairExample(){
 //Syntax:
  pair<int, int>p; //--> int indicates the type of data stored in pair, p is the name of pair variable.
  p.first = 10; //--> first is a member of pair which stores the first value.
  p.second = 20; //--> second is a member of pair which stores the second value.
  cout<<p.first<<" "<<p.second<<endl; //--> output: 10 20 //we can access the values stored in pair using first and second member.

  pair<int, int>p1(30, 40); //--> we can also initialize pair using constructor.
  cout<<p1.first<<" "<<p1.second<<endl; //--> output: 30 40


  //pair of more than 2 values using nested pair:
  pair<int, pair<int, int>>p2(23, {45, 67}); //--> here we are creating a pair which contains an integer and another pair.
  cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl; //--> output: 23 45 67


  //we can also create a pair of string and integer:
  pair<string, int>p3("Hello", 100);
  cout<<p3.first<<" "<<p3.second<<endl; //--> output: Hello 100 

  //we can also create array of pairs:
  pair<int, int>arr[] = {{1,2}, {3,4}, {5,6}};
  cout<<arr[0].first<<" "<<arr[0].second<<endl; //--> output: 1 2
  cout<<arr[1].first<<" "<<arr[1].second<<endl; //--> output: 3 4
  cout<<arr[2].first<<" "<<arr[2].second<<endl; //--> output: 5 6   


}

int main(){
    pairExample();
    return 0;
}