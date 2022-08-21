#include <iostream>
using namespace std;

int main() {
    int x[10] ;
    int i = 0;
    for(int i = 0; i <10;i++) 
    {
        cout<<"Enter \n";cin>>x[i];
    }
    int sum = 0;
    for(int i = 0; i <10;i++) 
    {
        sum = sum + x[i];
    }
    cout<<sum;
    
}
