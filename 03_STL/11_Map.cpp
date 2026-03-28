//Core Properties:

//Keys are unique and always sorted (ascending by default)
//Each key maps to exactly one value
//All operations run in O(log n) time
//Iteration goes in sorted key order

#include <bits/stdc++.h>
using namespace std;

void explainMap(){
    map<int, int> mp1; // it key and value inside the container
    map<int, pair<int, int>> mp2; // here int is key and pair<int, int> is value
    map<pair<int, int>, int> mp3; // same here pair<int, int> is key and <int> is value.

    mp1[1] =2;
    mp1.insert({3, 1});
    mp1.emplace(2, 4);

    mp3[{2,3}] = 10;
    mp3.insert({{5,6}, 30});

    for(auto it: mp1){
        cout << it.first <<" "<< it.second<<endl; // [{1,2} {2,3} {3,1}]
    }

    // [{1,2} {2,3} {3,1}]
    cout<< mp1[1]; // 2
    cout<<mp1[5]; // null

    auto it = mp1.find(3);
    if(it!=mp1.end()){
        cout << it->first <<" " << it->second<< endl;
    }
     

}