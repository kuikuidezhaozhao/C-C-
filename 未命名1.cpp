//作业 ：今日内容背诵 、下面的程序看懂、预习for 
#include<iostream>
using namespace std;
int main()
{
	int i,w=0,p=0,a[50],b[50];
	for(i=1;i<=100;i++)    //遍历1到100 的数 
	{
		if(i%2==0)
		{
			a[w]=i;
			w++;
		}
		else
		{
		 b[p]=i;
		 p++;
	    }
	}
	cout<<"这是偶数数组：" ; 
	for(i=0;i<50;i++)
		cout<<" "<<a[i];
	cout<<endl; 
	cout<<"这是奇数数组：" ;
	for(i=0;i<50;i++)
		cout<<" "<<b[i];
	return 0;
 } 
