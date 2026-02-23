// input : 7891
// output :  4
#include<iostream>
using namespace std;
void DisplayFactor(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt < (iNo/2) ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";

        }
    }
}

int main()
{
    int iValue = 0;
   
    cout<<"Enter number : \n";
    cin>>iValue;

   DisplayFactor(iValue);
    return 0;
}