#include <bits/stdc++.h>
using namespace std;

//--> it store duplicate element multitime.
void explainMultiSet(){
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1, 1}
    ms.insert(1); //{1, 1, 1}

    ms.erase(1); // all 1's erased
    
    int cnt= ms.count(1);

    //only a single one erase
    ms.erase(ms.find(1));

    //ms.erase(ms.find(1), ms.find(1)+2);

    //rest all are same as set

}

//------------------ UnorderSet ------------------------

    void explainUSet(){
        unordered_set<int> st; // time complexity is Big O(1) and worst case complexity is Big O(N);
        //lower_bound and upper_bound function 
        //does not works, rest all function are same
        //as above, it does not store in any
        // particular order it has a better complexity
        // than set in most cases, except some when collision happens 

    }