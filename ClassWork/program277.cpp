#include<iostream>
using namespace std;
// OOP approach

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

            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }

        int Subtraction()
        {

            int Ans = 0;
            Ans = No1 - No2;
            return Ans;
        }

};
int main()
{

    Arithmatic aobj(11,10);
   

    cout<<aobj.Addition()<<"\n";
    cout<< aobj.Subtraction()<<"\n";


    
   
   
    return 0;
}
