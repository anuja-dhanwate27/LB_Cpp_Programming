
#include<iostream>
using namespace std;
bool CheckPerferct(int iNo)
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
        CheckPerferct(iNo);

    }

   return (iSum == iNo);
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;
   
    cout<<"Enter number : \n";
    cin>>iValue;

   bRet = CheckPerferct(iValue);
   if(bRet == true)
   {
     cout<<"It is perfect number \n";

   }
   else
   {
    cout<<"it is not perfect number\n";
   }
    return 0;
}