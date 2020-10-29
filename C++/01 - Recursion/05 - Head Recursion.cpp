#include<iostream>
using namespace std;
int fun(int n){
    if(n > 0){
        fun(n-1);
        cout << n << " ";
    }
    return 0;
}
int main(){
    int a = 5;
    cout<<fun(a)<<" \n";
}