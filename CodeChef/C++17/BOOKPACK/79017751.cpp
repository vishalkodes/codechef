/*#include <iostream>
using namespace std;

int main() 
{
	int t; 
	cin>>t; 
	while(t--)
	{
	    int shelves,books,box,count = 0;
	    cin>>shelves>>books>>box;
	    
	        if(books<=box)
	            count = shelves;
	        else
	            count = shelves*((books/box));
	    //                1    *  2      1
	    
	    cout<<count<<endl;
	    }
	return 0;
}*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int t; 
	cin>>t; 
	while(t--)
	{
	    int shelves,books,box,count = 0;
	    cin>>shelves>>books>>box;
	    
	        if(books<=box)
	            count = shelves;
	        else
	            {
	                float i = (float)books/box;
	                count = shelves*(ceil(i));
	            }
	    cout<<count<<endl;
	}
	return 0;
}

