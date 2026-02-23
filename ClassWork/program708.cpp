// input : 7891
// output :  4
#include<iostream>
using namespace std;
int SumDigits(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    
    if(iNo != 0)
    {
       iDigit = iNo % 10;
      
       iSum = iSum + iDigit;
       
       SumDigits(iNo/10); 
       
       

     }

     return iSum;

    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = SumDigits(iValue);
    cout<<"sum of digits are : "<<iRet<<"\n";

    return 0;
}