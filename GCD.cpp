/*С�׾���������������Ϸ.��һ��,������һ�������������Ϸ,���Ľ�ɫ�ĳ�ʼ����ֵΪ a.�ڽ�������һ��ʱ����,��������������n������,ÿ������ķ�����Ϊb1,b2,b3...bn. ��������Ĺ��������biС�ڵ���С�׵ĵ�ǰ����ֵc,��ô���������ɴ�ܹ���,�� ��ʹ���Լ�������ֵ����bi;���bi����c,����Ҳ�ܴ�ܹ���,����������ֵֻ������bi ��c�����Լ��.��ô��������,��һϵ�еĶ�����,С�׵���������ֵΪ����?*/
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include<stdlib.h>
#include <iostream> 
#include<assert.h>
#include <string> 
#include <set>
#include <vector>
#include <math.h>
#include <algorithm>
#include <list> 
#include<sstream>
#include<map>
#include<unordered_map>
using namespace std;
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <iostream> 
using namespace std;
int gcd(int a,int b)
{
    int temp;
  while(b>0)
      {
       temp=b;
       b=a%b;
       a=temp;
  	  }
    return a;
    
}
int  main()
    {
      int n,c;
     while(scanf("%d %d",&n,&c)!=EOF)
	 {
    int *nums=new int[n];
     for(int i=0;i<n;i++)
        {
          scanf("%d",&nums[i]); 
         
     	}
       for(int i=0;i<n;i++)
        {
          if(c>=nums[i])
              c+=nums[i];
           else
               c+=gcd(nums[i],c);
         
     	}
   std::cout<<c<<std::endl;
    //printf("%d\n",c);
	delete[]nums;
	nums=NULL;
	 }
    return 0;
      
    }

