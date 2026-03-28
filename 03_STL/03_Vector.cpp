//Concept:
//Vector ek dynamic array hota hai.
//Array ki tarah hota hai but size runtime me change ho sakta hai.

/* Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them. 
Vector elements can be easily accessed and traversed using iterators.
A vector stores elements in contiguous memory locations. */

#include<bits/stdc++.h>
using namespace std;

void vectorExample(){
    //Syntax:
    vector<int>v; //--> int indicates the type of data stored in vector, v is the name of vector variable.
    v.push_back(10); //--> push_back is a member function of vector which is used to add an element at the end of the vector.
    v.emplace_back(20); //--> emplace_back is a member function of vector which is used to add an element at the end of the vector, it is faster than push_back as it constructs the element in place. 

    vector<pair<int, int>>vec; //--> we can also create a vector of pairs.
    vec.push_back({1,2}); //--> we can add a pair to vector using push_back. it use {} to add a pair to vector.
    vec.emplace_back(3,4); //--> we can also add a pair to vector using emplace_back.it use only () to add a pair to vector.

    vector<int>v1(5, 100); //--> we can also initialize vector using constructor. here we are creating a vector of size 5 and initializing all elements with 100.

    vector<int>v2(v1); //--> we can also initialize vector using another vector. here we are creating a vector v2 which is a copy of vector v1.


    // -------Increasing the size of vector after initialization:-------------

    vector<int>v3(5,30); //--> here we are creating a vector of size 5 and initializing all elements with 30. now we will increase the size of vector v3 by adding an element to it.
    v3.push_back(10); //--> now the size of vector v3 will be 6 and the last element will be 10. the first 5 elements will be 30 and the last element will be 10.



    //---------------access elements in vector using iterators:-----------------------------

    //v.begin() --> begin() - it returns an iterator pointing to the first element of the vector.
     //auto iterator = itr;
     //itr = v1.begin();
    vector<int>::iterator it= v.begin(); //--> here we are creating an iterator it which points to the first element of vector v. begin() is a member function of vector which returns an iterator pointing to the memory address of the first element of the vector.
    it++; //--> now the iterator it will point to the second element of vector v.
    cout<<*it<<endl; //--> output: 20 //we can access the value stored at the memory address pointed by iterator it using * operator.


    vector<int>::iterator it= v.end(); //--> here we are creating an iterator it which points to the memory address just after the last element of vector v. 
    
    it--; //--> now the iterator it will point to the last element of vector v.
    cout<<*it<<endl; //--> output: 10 //we can access the value stored at the memory address pointed by iterator it using * operator.

    // Tumhe pointer concept clear hona chahiye:
    // it = address
    // *it = value

    //vector<int>::iterator it= v.rend(); //--> here we are creating an iterator it which points to the memory address just before the first element of vector v.
    //vector<int>::iterator it= v.rbegin(); //--> here we are creating an iterator it which points to the last element of vector v. 

    v.capacity(); //-->Kitni memory allocated hai vector ke liye.
    v.size(); //-->Kitne elements vector me hai.
    v.clear(); //--> vector ke sare elements ko delete kar deta hai but memory allocated rehti hai.Elements remove hote hain but capacity same rehti hai
     




    //----------------------printing vector------------------------


    cout<< v[0]<< " " << v.at(0); //
    cout<< v.back() << " ";




    //----------------------------auto iterator:-----------------------------

    //In normal iterator, we explicitly define the type, while in auto iterator, the compiler automatically deduces the type. Both behave the same and have no performance difference.

    for(vector<int>::iterator it = v.begin(); it != v.end();it++){ 
        cout<<*it<<" ";
    }

    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }

    //--------for each--------

    for(auto it :v){
        cout<<it<<"  ";  
    }

    //erase function: vector ke kisi bhi position se element delete karne ke liye use hota hai.
    v.erase(v.begin()); //--> here we are deleting the first element of vector v.

    //{10,20,30,40,50}
    v.erase(v.begin()+1, v.begin()+3); // {10,40,50}


    // Insert function: vector ke kisi bhi position par element insert karne ke liye use hota hai.
    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(), 300); ////--> here we are inserting 300 at the{300,100,100}
    v.insert(v.begin()+1, 2, 10); //--> here we are inserting 2 elements of value 10 at the position of iterator it. {300,10,10,100,100}

    vector<int>copy(2,50); //--> here we are creating a vector copy of size 2 and initializing all elements with 50. {50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); //--> here we are inserting all elements of vector copy at the position of iterator it. {50,50,300,10,10,100,100}

    cout<<v.size()<<endl; //--> here we are printing the size of vector v. output: 7   
 
    v.pop_back(); //--> here we are deleting the last element of vector v. {50,50,300,10,10,100}
    v1.swap(v2); //v1 ->{50,100} v2->{100,100} swap karne ke baad v1->{100,100} v2->{50,100}
    v.clear(); //--> here we are deleting all elements of vector v but the memory allocated for vector v will remain the same. { } size = 0 but capacity will remain the same.

    cout<< v.empty()<<endl; //--> here we are checking whether vector v is empty or not. output: 1 (true) because we have cleared the vector v. if vector v is not empty then output will be 0 (false).

}



int main(){
    vectorExample();
    return 0;
}