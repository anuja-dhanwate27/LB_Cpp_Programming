// input : 7891
// output :  4
#include<iostream>
using namespace std;
int SumFactor(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;
    
    if(iCnt <= (iNo/2) )
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
            

        }
        iCnt++;
        SumFactor(iNo);

    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
   
    cout<<"Enter number : \n";
    cin>>iValue;

   iRet = SumFactor(iValue);
   cout<<"Sumation of factors : "<<iRet<<"\n";
    return 0;
}