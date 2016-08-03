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
void permuta(char *str,char* begin)
{
    if(*begin=='\0')
		printf("%s",str);
	else//此处不要遗漏！！！
	{
	for(char *temp=begin;*temp !='\0'; temp++)
	{
	  swap(*temp,*begin);
	  permuta(str,begin+1);
	  swap(*temp,*begin);
		
	}
	}

}
void main()
{
  char a[]="abc";
  permuta(a,a);

}