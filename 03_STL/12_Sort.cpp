#include <bits/stdc++.h>
using namespace std;


bool comp( pair<int, int> p1,  pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p2.first) return true;
    return false;
}

//std::sort is a built-in sorting function from the <algorithm> header.
//#include <algorithm>
void explainExtra(){

      
    //sort(startIterator, endIterator); //--> ascending by default
    //sort(startIterator, endIterator, comparator); //--> custom order

    //Array
    int arr[]= {5,2,8,1,9};
    sort(arr, arr+5); //{1, 2, 5, 8, 9}

    // vector
    vector<int> v={5, 2, 8, 1, 9};
    sort(v.begin(), v.end());// {1, 2, 5, 8, 9}

    // Using greater
    sort(v.begin(), v.end(), greater<int>()); //{9, 8, 5, 2, 1}

    //using reverse
    sort(v.rbegin(), v.rend()); // {9, 8, 5, 2, 1}

    pair<int, int> arr1[] = {{1,2},{2,1}, {4,1}};
    //sort it according to second element, {1,2} second element 2.
    //if second  element is same{2,1}, {4,1}, then sort 
    //it acoording to first element but in descending.

    sort(arr1, arr1+5, comp);
    //{4,1}, {2,1}, {1,2}

    int num =7;
    int cnt = __builtin_popcount(num);

    long long num = 165786578687;
    int cnt = __builtin_popcountll(num);

    //for all possible permutation of no.

    string s= "123";

    do{
        cout<< s<< endl;
    }while(next_permutation(s.begin(), s.end()));

    int n;
    int maxi = *max_element(arr, arr+n);

}