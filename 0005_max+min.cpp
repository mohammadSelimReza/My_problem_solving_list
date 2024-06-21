//getting max/min value from an array with using max/min function

#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int mx_value = a[0];
    int min_value = a[0];
    for(int i=0;i<n;i++)
    {
        mx_value = max(mx_value,a[i]);
        min_value = min(min_value,a[i]);
    }
    cout << mx_value << " " << min_value << endl;


    return 0;
}
