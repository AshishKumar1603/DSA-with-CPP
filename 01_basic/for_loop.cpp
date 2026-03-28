#include <iostream>
using namespace std;


//pyramid...
/* int main(){
    int i;
    int j;
    int n =5;

    for(int i=0; i<n; i++){
            for(int j=0; j<2*n-(2*i+1); j++){
                cout<< " ";
            }
            for(int j=0; j<2*i+1; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
 */
     
    

    //square pattern using "*";
    // for(i=0; i<5; i++){
    //     for(j=0; j<5; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //rectangle pattern using "*";
    //  for(i=0; i<3; i++){
    //     for(j=0; j<10; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //hollow rectangle pattern using "*";
    // for(i=0; i<5; i++){
    //     for(j=0; j<5; j++){
    //         if(i==0 ||i==4 || j==0 || j==4){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }

    //     }
    //     cout<<endl;
    // }

    //Half pyramid pattern using "*";
    // for(i=0; i<5; i++){
    //     for(j=0; j<i+1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Inverted half pyramid pattern using "*";
    // for(i = 0; i <5; i++){
    //     for(j=5-i; j>0; j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Numeric half pyramid pattern;
    // int main(){

    // for(int i =0; i<5; i ++){
    //     for(int j=0; j<i+1; j++){ 
    //         cout<<j+1<<" ";
    // }
    // cout<<endl;
    // }
//}

// int main(){
//     int n;
//     //cin>>n;

//     for(int i=0; i<5; i++){
//         for(int j=0; j<5-i; j++){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }

    //full Pyramid

    // int n;
    // cin>>n;
    // for(i=0; i<n; i++){
    //     for(j=0; j<n-i-1; j++){
    //         cout<< " ";
    //     }
    //     for(int j=0; j<i+1; j++){
    //         if(j==0 || j==i+1-1){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // int n;
    // cin>>n;

    /* for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            cout<<" ";
        }
        for(j=0; j<n-i; j++){
           if(j==0|| j==n-i-1){
            cout<<"* ";
           }
           else{
            cout<<"  ";
           }
        }
        cout<<endl;
    } */
 

    // Inverted half hollow pyramid
    // for(i=0; i<5; i++){
    //     for(j=0; j<n-i; j++){
    //         if(i==0||j==0 ||j ==n-i-1){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    
    //Alphabet print;

    /* for(i=0; i<n;i++){
        char ch;
        for(j=0; j<i+1; j++){
            int number = j+1;
             ch = number + 'A' -1;
            cout<< ch;
        }
        
        for(char alphabet = ch; alphabet >'A'; ){
            alphabet = alphabet-1;
            cout<< alphabet;
        }
        cout<<endl;
    } */

    //dimond pattern
    // for(i=0; i<n; i++){
    //     for(j=0; j<n-i-1; j++){
    //         cout<<" ";
    //     }
    //     for(j=0; j<i+1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int k=0; k<n; k++){
    //     for(int j=0; j<k; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<n-k; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // extra patterns

    // for(i=0; i<n; i++){
    //     for(j=0; j<n-i;j++){
    //         cout<<"*";
    //     }
    //     for(j=0; j<2*i+1;j++){
    //         cout<<" ";
    //     }
    //     for(j=0; j<n-i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(i=0; i<n; i++){
    //     for(j=0; j<i+1;j++){
    //         cout<<"*";
    //     }
    //     for(j=0; j<2*(n-i-1)+1;j++){
    //         cout<<" ";
    //     }
    //     for(j=0; j<i+1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    //number start pattern

    // for(i=0; i<n; i++){
    //     for(j=0; j<2*i+1; j++){
    //         if(j%2==0){
    //             cout<<i+1;
    //         }else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

     


    // for(i=1; i<=100; i++){
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }
    // }

    // for(i=1; i<=10; i++){
    //     cout<<9*i<<endl;
    // }



    // for(; ; ){
    //     cout<<"The value of i is: " << i << endl;
    //     if(i<5){
    //         cout<<"Ashish" <<endl;
    //         i=i+1;
    //     }
    // }


    // for(i=0; i<5; i++){
    //     cout<<"The value of i is: " << i << endl;
    // }

    // for(i=0; i<5; i++){
    //     cout<<"*";
    //     for(j=0; j<5; j++){
    //         cout<<"*";
    //     }


    //void printTriangle(int n) {
     
    
// half dimaond........    
/* int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;

    }
    return 0;
} */


/* int main(){
    int n=5;
     for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                if(j==i+1){
                cout<<i+1<<" ";
            }
            cout<<endl;
        }
    }
}
     */

 // pattern question  
 /* 1                 1 
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1  */  
    //  int main(){
    //     int n=5;
    //     for(int i=1; i<=n; i++){
    //         for(int j = 1; j<=i; j++){
    //             cout<<j<<" ";
    //         }
    //         for(int j=1; j<=2*(n-i); j++){
    //             cout<<"  ";
    //         }
    //         for(int j=i; j>=1; j--){
    //             cout<<j<<" ";
    //         }
    //         cout<<endl;
    //     }
    //  }


    // void printtriangle(){
    //     int n;
    //     for(int i=0; i<n; i++){
    //         for(int j=0; j<n-i-1; j++){
    //             cout<<" ";
    //         }
    //         for(int j=0; j<2*i+1; j++){
    //             cout<<"* ";
    //         }
    //         cout<<endl;
    //     }
    // }

  // pattern :
//     *
//    ***
//   *****
//  *******
// *********

    // int main(){
    //     int n;
    //     cout<<"Enter the number: ";
    //     cin>> n;
    //     //printtriangle();
    //     for(int i=0; i<n; i++){
    //         for(int j=0; j<n-i-1; j++){
    //             cout<<" ";
    //         }
    //         for(int j=0; j<2*i+1; j++){
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }
    //     return 0;
    // }


    //pattern:
   /*  *********
        *******
         *****
          ***
           *     */
    /* int main(){
        int n;
        cout<<"Enter the number: ";
        cin>> n;
        for(int i=0; i<n; i++){
            for(int j=0; j<i;j++){
                cout<<" ";
            }
            for(int j =0; j<2*n-2*i-1; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        return 0;
    } */

    // pattern :

//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
    
    
    /*  int main(){
        int n;
        cout<<"Enter the number: ";
        cin>> n;
            for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            for(int j=0; j<2*i+1; j++){
                cout<<"*";
            }
            cout<<endl;
    }
        for(int i=0; i<n; i++){
            for(int j=0; j<i;j++){
                cout<<" ";
            }
            for(int j =0; j<2*n-2*i-1; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        return 0;
    } */


    // pattern:
//     *
//     **
//     ***
//     ****
//     *****
//     ****
//     ***
//     **
//     *

    /* int main(){
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        for(int i=1; i<=2*n-1; i++){
            int star=i;
            if(i>n) star = 2*n-i;
            for(int j=1; j<=star;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    } */


    //pattern

   /*  1
       01
       101
       0101
       10101 */
    int main(){
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        for(int i=0; i<n;i++){
            for(int j=0; j<=i; j++){
            if ((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
                }            
            }
            cout<<endl;
        }
    }
    
