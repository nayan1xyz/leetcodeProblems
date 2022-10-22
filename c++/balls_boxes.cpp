#include <iostream>
using namespace std;

void solve(){
    long n,k;cin>>n>>k;
    long sum= (k*(k+1))/2;
    (sum<=n)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}

int main() {
	int t; cin>>t;
	while(t--)solve();
	return 0;
}
