#include <bits/stdc++.h>
using namespace std;

// --> set is a container which stores unique elements in sorted order. It is implemented as a balanced binary search tree (usually a Red-Black Tree). It provides fast search, insertion and deletion of elements. It does not allow duplicate elements.

void explainSet(){
    set<int> s; 
    s.insert(10); //--> insert is a member function of set which is used to add an element to the set. {10}
    s.insert(20); //--> here we are adding 20 to the set. {10,20}
    s.emplace(20); //--> emplace is a member function of set which is used to add an element to the set. It is similar to insert but it constructs the element in place. {10,20} because set does not allow duplicate elements.
    s.insert(40); //--> here we are adding 40 to the set. {10,20,40}
    s.insert(30); //--> here we are adding 30 to the set. {10,20,30,40} because set stores elements in sorted order.

    //important functions of set are:

    auto it= s.find(30); //--> find is a member function of set which is used to search for an element in the set. It returns an iterator pointing to the element if it is found, otherwise it returns an iterator pointing to the end of the set. here we are searching for 30 in the set. output: 30

    auto it= s.find(50); //--> here we are searching for 50 in the set. output: end of the set because 50 is not present in the set.
    s.erase(20); //--> erase is a member f unction of set which is used to remove an element from the set. here we are removing 20 from the set. {10,30,40}

    int cnt = s.count(30); //--> count is a member function of set which is used to count the number of occurrences of an element in the set. here we are counting the number of occurrences of 30 in the set. output: 1 because 30 is present in the set.

    auto it1= s.find(30);
    auto it2= s.find(40);
    s.erase(it1, it2); //--> here we are removing all the elements from the position of iterator it1 to the position of iterator it2 (excluding it2). {10,40} because 30 is removed from the set.

    //vector<int> v = {1, 2, 2, 2, 4, 5};
    auto it= s.lower_bound(2); //-->first element ≥ 2 = index = 1  (value = 2)
    auto it =s.upper_bound(2); //-->first element > 2 = index = 4  (value = 4)
}

int main(){
    explainSet();
    return 0;
}