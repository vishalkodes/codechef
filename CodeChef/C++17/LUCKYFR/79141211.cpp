#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b=0;
	    cin>>a;
	    
	    while(a)
	    {   
	        if(a%10 == 4)
	            b++;
	        
	        a = a / 10;
	    }
	    cout<<b<<endl;
	}
	return 0;
}
