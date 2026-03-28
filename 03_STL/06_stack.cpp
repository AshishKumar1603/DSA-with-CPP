#include <bits/stdc++.h>
using namespace std;

//--> it work on LIFO (Last In First Out) principle. It is implemented as a container adaptor which uses an underlying container to store the elements. By default, it uses deque as the underlying container but we can also use vector or list as the underlying container.

void explainStack(){
    stack<int> st; //--> stack is a linear data structure which follows the LIFO (Last In First Out) principle. It is implemented as a container adaptor which uses an underlying container to store the elements. By default, it uses deque as the underlying container but we can also use vector or list as the underlying container.

    st.push(10); //--> push is a member function of stack which is used to add an element at the top of the stack. {10}
    st.push(20); //--> here we are adding 20 at the top of the stack. {10,20}

    st.pop(); //--> pop is a member function of stack which is used to remove the top element of the stack. {10}

    cout<<st.top()<<endl; //--> top is a member function of stack which is used to access the top element of the stack. output: 10

    cout<<st.size()<<endl; //--> size is a member function of stack which is used to get the number of elements in the stack. output: 1

    cout<<st.empty()<<endl; //--> empty is a member function of stack which is used to check whether the stack is empty or not. output: 0 (false) because there is one element in the stack. if there are no elements in the stack then output will be 1 (true).
}