//This code is made by Chandravo Bhattacharya

#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,ans,a,b,c;
	while(cin>>a>>b>>c){
		ans=a+b+c;
		ans=max(ans,(a*b*c));
		ans=max(ans,(a+b)*c);
		ans=max(ans,a*(b+c));
		ans=max(ans,a+(b*c));
		ans=max(ans,(a*b)+c);
		cout<<ans<<endl;
	}
	return 0;
}