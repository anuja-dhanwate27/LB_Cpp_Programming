// input : 7891
// output :  4
#include<iostream>
using namespace std;
int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    
    while(iNo != 0)
    {
       iCount++;
       iNo = iNo / 10;
       

     }

     return iCount;

    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = CountDigits(iValue);
    cout<<"Number of digits "<<iRet<<"\n";

    return 0;
}