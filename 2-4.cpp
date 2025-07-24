// 1. Maximum Difference (j > i, arr[j] - arr[i])

// 2. Finding the peak element in the given array.
// Peak element - an element that is greater than both of  its neighbors.

// 3. Count the number of inversions in the given array.
// Inversion: 2 elements are called inversions if the left element is greater than the right element.

// 4. Convert the given string to all lowercase characters.

// a- 97 , 
// A- 65

HW - to convert the string to all uppercase characters.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Aditya Jain";
    int n = s.length();
    
    for(int i = 0; i<n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        
    }
    
    cout << s << endl;
    
}

/*

int main()
{
    int a[] = {5,4,7,3,4,9};
    // 5->3
    // 4->1
    // 7->2
    // 3->0
    // 4->0
    // 9->0
    //inversions: 6
    int count = 0;
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                count++;
            }
        }
    }
    
    cout << count << endl;
}
*/

/*
int main()
{
    int a[] = {5,4,7,3,4,9};
    //op: 5, 7, 9
    int n = sizeof(a)/sizeof(a[0]);
    
    vector<int> peak;
    
    if(a[0] > a[1])
    {
        peak.push_back(a[0]);
    }
    
    for(int i = 1; i<n-1;i++)
    {
        if( (a[i] > a[i-1]) && (a[i] > a[i+1]) )
        {
            peak.push_back(a[i]);
        }
    }
    
    if(a[n-1] > a[n-2])
    {
        peak.push_back(a[n-1]);
    }
    
    for(int elem: peak)
    {
        cout << elem << " ";
    }
}

*/
/*
int main()
{
    int a[] = {9,2,7,6,10,1};
    int n = sizeof(a)/sizeof(a[0]);
    
    int mx_diff = INT_MIN;
    int mn = a[0];
    
    for(int j=1; j<n; j++)
    {
        mx_diff = max(mx_diff, a[j] - mn);
        mn = min(mn, a[j]);
        
    }
    
    cout << mx_diff << endl;
    
}
*/

/*
int main()
{
    int a[] = {9,2,7,6,1,10};
    int n = sizeof(a)/sizeof(a[0]);
    
    int mx = INT_MIN;
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            mx = max(mx, a[j] - a[i]);
        }
    }
    
    cout << mx << endl;
    
}
*/
