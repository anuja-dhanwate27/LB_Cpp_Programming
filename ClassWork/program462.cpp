#include<iostream>    
using namespace std;

template<class T>


T Addition( T No1 ,  T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;

}
int main()
{
    cout<<"Addition of cahracters : "<<Addition('a' , 'b')<<"\n";
    cout<<"Addition of Integer : "<<Addition(11,10)<<"\n";
    cout<<"Addition of float : "<<Addition(90.3f,78.5f)<<"\n";
    cout<<"Addition of double : "<<Addition(78.99865 , 45.67882)<<"\n";
    
    


    return 0;

}