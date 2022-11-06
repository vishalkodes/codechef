#include <iostream>
using namespace std;

int main() {
	int T,X,H;
	
	cin>>T;
	
	for (int i=0;i<T;i++)
	{
	   cin>>X>>H;
	   if(X>=H)
	   {
	       printf("YES\n");
	   }
	   else
	   {
	       printf("NO\n");
	   }
	}
	return 0;
}
