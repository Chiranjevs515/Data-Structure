#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int p,q,r,B;
	    cin>>p>>q>>r;
	    B=p>q?(p>r?p:r):(q>r?q:r);
	    cout<<B;
	    
	    
	}
	return 0;
}
