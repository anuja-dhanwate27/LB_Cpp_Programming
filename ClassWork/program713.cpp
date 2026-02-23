// input : 7891
// output :  4
#include<iostream>
using namespace std;
void DisplayFactor(int iNo)
{
    static int iCnt = 1;
    
    if(iCnt <= (iNo/2) )
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
            

        }
        iCnt++;
        DisplayFactor(iNo);

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