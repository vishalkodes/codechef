#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{   
	    long long int c=0,x;
	    
	    cin>>x;
	    while(x)
	    {
	        if(x%10==4)
	            c++;
	        
	        x = x / 10;
	    }
	      
	    cout<<c<<endl;
	}
	return 0;
}

