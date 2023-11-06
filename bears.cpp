//
// Created by Sharabassy on 11/6/2023.
//

#include "bears.h"
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool bears(int n);

int main(){
    int number;

    do{
        cout<<"enter the amount of bears (press 0 to stop the program): ";
        cin>>number;
        if (bears(number)){
            cout<<"you have reached the goal!"<<endl;
        }

        else{
            cout<<"sorry, you have not reached the goal."<<endl;
        }

    }while(number != 0);
}

bool bears(int n){
    if (n < 42){
        return false;
    }

    else if (n == 42){
        return true;
    }

    else{
        if (n % 5 == 0){
            return bears(n - 42);
        }

        else if(n % 2 == 0){
            return bears(n / 2);
        }

        else if(n % 4 == 0|| n % 3 == 0)
        {
            int one;
            int two;
            one=n%10;
            two=(n%100)/10;
            return bears(n - one * two);
        }
    }
}