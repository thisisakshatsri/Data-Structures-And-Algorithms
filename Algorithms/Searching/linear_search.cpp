#include <iostream>
using namespace std;

bool isPresent(int a[], int n, int target)
{
    for(int i=0; i<n; i++) {
	if(a[i] == target)
	return true;
  }
    return false;
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--)
	{
	    int n, k, ans;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin >> a[i];
	    }
	    
	    ans = isPresent(a, n, k)? 1 : -1;
	    cout << ans << "\n";
	}
	
	return 0;
}