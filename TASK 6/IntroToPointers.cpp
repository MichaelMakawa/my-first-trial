#include <iostream>
using namespace std;
int main(){
    int* pPointer=nullptr;
    int integerVar=5;
    pPointer=&integerVar;
    cout<<"integerVar: "<<integerVar<<endl;
    cout<<"address of integerVar: "<<&integerVar<<endl;
    cout<<"pPointer: "<<pPointer<<endl;
    cout<<"Address ot pPointer: "<<&pPointer<<endl;
    return 0;
}