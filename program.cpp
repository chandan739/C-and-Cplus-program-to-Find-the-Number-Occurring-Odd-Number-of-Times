#include<iostream>
using namespace std;
int main()
{
  int n,a[50],i,j,counter=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i]==a[j])
      counter=counter+1;
    }
    if(counter%2!=0)
    {
      cout<<a[i]<<endl;
      break;
    }
    else
    {
      cout<<"number of same elements occure are even times"<<endl;
      break;
    }
  }
  return 0;
}
