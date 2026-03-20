#include<iostream>

using namespace std;

int main(){
    try{

        int x;
        cout << "Enter number : ";
        cin >> x;

        if(x==0){
            throw 0;
        }else if (x < 0){
            throw -1;
        }
    
        cout << "valid number";    
    }catch(int e){

        if(e==0){
            cout << "Zero is not allowed";
        }else {
            cout << "negative number not allowed";
        }

    }
    return 0;
}