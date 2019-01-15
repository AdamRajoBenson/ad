#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],k,n,i,j,l=0;
cin>>n>>k;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(j=0;j<k;j++)
{
l+=a[j];
}
cout<<l;
}
