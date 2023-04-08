#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    int mark[100005] = {0};
    for(int i=0; i<n; i++){
        cin >> a[i];
        mark[a[i]]++;
    }
    int x; cin >> x;
    for(int i=0; i<n; i++){
        if(a[i]==x){
            //cout << mark[x] << endl;
            mark[x] = 0;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(mark[a[i]])  cout << a[i] << ' ';
    }
}