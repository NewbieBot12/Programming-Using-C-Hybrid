
#include<iostream>
using namespace std;
int main(){
    int a[5];
    cout<<"Enter the 5 Numbers";
    cout<<endl;
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    cout<<"Numbers in the array"<<endl;
    for(int j=0; j<5; j++){
        
    cout<<a[j]<<" ";
    }
    cout<<endl<<"numbers given in reverse order"<<endl;
    for(int k=4; k>=0; k--){
        
    cout<<a[k]<<" ";
    }
    return 0;
}