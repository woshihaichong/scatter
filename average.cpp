#include<iostream>
#include<assert.h>
#include <string> 
#include <set>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include<stdlib.h>
using namespace std;
int main()// x(x+1)<h
{ 
    
    int n;
	int ave=0;
	double ave1=0.0;
	int a;
	int i;
	double sum=0;
	int cnt=0;
  while(scanf("%d",&n)!=EOF )
      {   
		  //printf("\n");
		  if(n>=1 && n<=100)
		  {	
			  sum=0.0;
			  ave=0;
			  ave1=0.0;
			  cnt=0;
             int *a=new int[n];
        for( i=0;i<n;i++)
		     {		  
			  cin>>a[i];
			  sum+=a[i];
		      } 
		  ave1=sum/n;
		  ave=static_cast<int> (sum)/n;
		  if(ave !=ave1)
			  return -1;
		   for( i=0;i<n;i++)
		     {
			   a[i]=a[i]-ave;
			   if(a[i]>0)
                   {
                     if(a[i]%2==0)
                       cnt+=a[i]/2;
					 else
						 cnt=cnt+a[i]/2+1;
                    }                
              }
            cout<<cnt<<endl;
			delete []a;
            a=NULL;
		   }

		 }
       
  return 0;
}
