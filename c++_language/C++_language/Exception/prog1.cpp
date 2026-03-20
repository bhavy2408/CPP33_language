#include<iostream>

using namespace std;

int main(){
    try{

        int a=10 , b=0;

        if(b==0)
        {
            throw "Cannot be Divided by Zero";
        }

        cout << a/b;
    }catch(const char* msg){
        cout << msg;
    }
    return 0;
}