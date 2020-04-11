#include<stdio.h>
int main()
{
  int n,a[50],i,j,counter=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
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
      printf("%d",a[i]);
      break;
    }
    else
    {
      printf("number of same elements occure are even times");
      break;
    }
  }
  return 0;
}
