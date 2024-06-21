// Sorting:
// https://l.facebook.com/l.php?u=https%3A%2F%2Fcodeforces.com%2Fgroup%2FMWSDmqGsZm%2Fcontest%2F219774%2Fproblem%2FH%3Ffbclid%3DIwZXh0bgNhZW0CMTAAAR1wv_LT2FBEBy75L1w51cZOz0ziDz3z8NHtv5R4Cn-tEUma2rsGzVR0Gl4_aem_ZmFrZWR1bW15MTZieXRlcw&h=AT0UPsqBChO62mXoC87Z0bYVlXVHAOEHR0GQa8wOjxnlWKRnXKKtDvE3s25H1XrQy7UbgAdxu-ELrwMl-r2j9sH7FuS_d4UDJufKqtXTxgngFmcOYGtt_gedTdL2eA
// try to solve it with bubble sort algorithm or Selection Sort.

#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    //bubble sort system:
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
    }
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}
