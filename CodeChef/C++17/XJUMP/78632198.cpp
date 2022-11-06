#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
        int x,y;
        cin>>x>>y;
		
        
		if(x>=y)
		{
			cout<<x/y + x%y<<endl; 
		}
		else
		{
			cout<<x<<endl;
		}
	}
	return 0;
}