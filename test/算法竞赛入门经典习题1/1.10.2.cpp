#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[100000] = {0};
    int n,m,l,r;
    cin >> n;
    cin >> m;
    for(int i=0;i<n;i++)
        cin >>a[i];
    sort(a,a+n);
    l = 1; 
    r = a[n-1]-a[0];
    while(l+1<r){
        int mid = (l+r)/2;
        int t =1;
        int last = a[0];
        for(int i = 0;i<n;i++)
            if((a[i] - last) >= mid) {last = a[i]; t++;}
        if (t>=m) l = mid;
        if (t<m) r = mid;
    }
    cout << l <<endl;
    return 0;
}

