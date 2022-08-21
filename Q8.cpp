#include <iostream>
using namespace std;

int main() {
    int x,y;
    cout<<"Enter x\t";cin>>x;
    cout<<"Enter y\t";cin>>y;
    x = x+y;
    y = x-y;
    x = x-y;
    
    cout<<"x is now ";cout<<x;
    cout<<" y is now ";cout<<y;

    return 0;
}
