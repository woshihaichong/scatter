/*小易经常沉迷于网络游戏.有一次,他在玩一个打怪升级的游戏,他的角色的初始能力值为 a.在接下来的一段时间内,他将会依次遇见n个怪物,每个怪物的防御力为b1,b2,b3...bn. 如果遇到的怪物防御力bi小于等于小易的当前能力值c,那么他就能轻松打败怪物,并 且使得自己的能力值增加bi;如果bi大于c,那他也能打败怪物,但他的能力值只能增加bi 与c的最大公约数.那么问题来了,在一系列的锻炼后,小易的最终能力值为多少?*/
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

