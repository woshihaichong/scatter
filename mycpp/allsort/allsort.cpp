/*输入“abc”输出 a,b,c,ab,bc,abc即输入字符串的所有组合*/
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
void allsort(const char *str)
{

  int len= strlen(str);
  bool used[64]; 
   char ss[64];
   int index=0;
   char *result=ss+len;
   *result='\0';  
	   while(1)
	   {
	     index=0;
		 while(used[index]==true)
		 {
		   result++; 
		    used[index]=false;
		   if(++index == len)
			   return ;
		 }
		 used[index]=true;
		 *--result=str[index];
		 printf("%s",result);

	   }
}
int main()
{
  char *str="abc";
		 allsort(str);
	   return 0;

}
