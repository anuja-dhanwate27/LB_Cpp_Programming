#include<iostream>     
using namespace std;

template <class T>
class Arithmatic
{
    public:
          T No1;
          T No2;

          Arithmatic(T A , T B)
          {
              No1 = A;
              No2 = B;
          }

          T Addition()
          {
              T Ans;
             Ans = No1 + No2;
             return Ans;
          }

          T Subtraction()
          {
             T Ans;
             Ans = No1 - No2;
             return Ans;
          }


};

int main()
{
     Arithmatic <int> obj(11,10);

    cout<<"Addition is :"<<obj.Addition()<<"\n";
    cout<<"Subtraction is :"<<obj.Subtraction()<<"\n";
    


    return 0;

}