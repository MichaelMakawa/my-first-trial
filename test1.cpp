#include<iostream>
using namespace std;
int g=90;
int main(){
    //string greeting;
    //cout<<greeting<<endl<<"a new line using endl object\n"<<"another line using the backslash and an n operators\n\n"<<"inserting a blank line";
    //cout<<"Enter your name\n";
   // cin>>greeting;
   // cout<<"Your name is "<<greeting<<endl;
    //cout<<"size of int "<<(sizeof(int))<<endl;
    //cout<<"size of char "<<(sizeof(char))<<endl;
    //cout<<"size of double "<<(sizeof(double))<<endl;
    //cout<<"size of long "<<(sizeof(long))<<endl;
   // cout<<"size of float "<<(sizeof(float))<<endl;
    //cout<<"size of short "<<(sizeof(short))<<endl;
    //cout<<"size of void "<<(sizeof(void))<<endl;
    cout<<"size of long int "<<(sizeof(long int))<<endl;
    cout<<"size of long long int"<<(sizeof(long long int))<<endl;
   cout<<"size of long double "<<(sizeof(long double))<<endl;
   //const int a=2
   cout<<"size of w_char "<<(sizeof(wchar_t))<<endl;

   //const int b=5;//local variables
   //const int g=10;
   //cout<<g+a*b<<endl;
   int array[5]={1,2,3,4,5};
   cout<<array<<endl;
   cout<<*array<<endl;
   cout<<*(array+2)<<endl;
   *(array+4)*=2;
   cout<<*(array+4)<<endl;
   int *mypointer=nullptr;
   mypointer=&*(array+4);
   cout<<mypointer;
    return 0;
}