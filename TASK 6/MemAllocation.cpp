#include<iostream>
using namespace std;
int main(){
    int numberOfElements=0;
    int* dynamicArray=nullptr;
    cout<<"How many numbers ould you likre to type? ";
    cin>>numberOfElements;
    dynamicArray=new int[numberOfElements];
    if (dynamicArray==nullptr){
        cout<<"error: Memory could not be allocated";
    }
    else{
        for (int n=0; n<numberOfElements; n++){
            cout<<"enter number: ";
            cin>>dynamicArray[n];
        }
        cout<<"You have entered: ";
        for (int i=0; i<numberOfElements; i++){
            cout<<dynamicArray[i]<<", ";
        }
        delete[] dynamicArray;
        dynamicArray=nullptr;

    }
    return 0;
}