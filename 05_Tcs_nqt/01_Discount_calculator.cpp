#include <bits/stdc++.h>
using namespace std;

int discountCalculator(double amount ){
    

    if(amount <0){
        cout<<"Error Invalid Input";
    }
    else {
         double discount =0;
        if(amount < 1000){
            discount = 0.05;//5%
        }else if(amount <=5000){
            discount = 0.10;
        }else {
            discount= 0.15;
        }

        double finalamount = amount - (amount*discount);
        cout<<finalamount;

    }
}

int main(){
    double amount;
    cin >>amount;
     discountCalculator(amount);
}