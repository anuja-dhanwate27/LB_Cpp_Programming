#include<iostream>     // Ans characstic madhe nhi thevala krn to saglya function la neccessary nhi like Max or Min  mhanun to jithe lagen tithe ghettala
using namespace std;

class Arithmatic
{
    public:
          int No1;
          int No2;

          Arithmatic(int A , int B)
          {
              No1 = A;
              No2 = B;
          }

          int Addition()
          {
             int Ans;
             Ans = No1 + No2;
             return Ans;
          }

};

int main()
{
    Arithmatic *obj = new Arithmatic(10,11);

    cout<<"Addition is :"<<obj->Addition()<<"\n";

    delete obj;
    
    


    return 0;

}