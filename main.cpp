#include <iostream>

using namespace std;

int main()
{
   int ar[]={3,5,7};
   int sum=12;
   int minn[sum];
   minn[0]=0;
   for(int i=1;i<=sum;i++)
   {
      minn[i]=99999;
   }
   for(int i=1;i<=sum;i++)
   {
       for(int j=0;j<3;j++)
       {
           if(ar[j]<=i&&minn[i-ar[j]]+1<minn[i])
            minn[i]=minn[i-ar[j]]+1;
       }
   }
cout<< "the minimum number of coin choice is: "<<minn[sum]<<endl;
    return 0;
}
