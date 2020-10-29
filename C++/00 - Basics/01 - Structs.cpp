#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};
int main(){
    struct rectangle r;
    // struct rectangle r={10,5};

    r.length = 15;
    r.breadth = 10;
    cout<<"Area: "<<r.length*r.breadth<<"";
}