#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t; 
	while(t--)
	{
	    int x;
	    cin>>x;
	    
	    int i = x % 4;
	    
	    switch(i) 
	    {
            case 0:
                cout<<"North"<<endl;
                break;
                
            case 1:
                cout<<"East"<<endl;
                break;
                
            case 2:
                cout<<"South"<<endl;
                break;
                
            case 3:
                cout<<"West"<<endl;
                break;
	    }
	}
	return 0;
}