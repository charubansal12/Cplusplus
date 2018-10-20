#include<bits/stdc++.h>
using namespace std;

int zeros(int A) {

	int i=1;
    int ans=0;
    for(i=1;;i++)
    {
        if(A/pow(5,i) == 0)
         break;
        else
            ans+=A/pow(5,i);
    }
   
   return ans;
}

int main() {

	int n;
	cin>>n;
	cout<<"Trailing zeros in "<<n<<" are: "<<zeros(n)<<"\n";

	return 0;
}