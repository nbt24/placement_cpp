// 1. Given a sorted string, print the char:freq for each of the characters.
// eg: aabc
// a:2
// b:1
// c:1

// 2. Given an array of int, count the positive, negative and zeros in it & print those counts.

// 3. Given an array of int and a value k, find the kth largest element in it.

// 4. Rotate the given array by k steps on the right.
// a[] = {3, 4, 6, 8, 7, 9}
// k = 4
// op: 6,8,7,9,3,4

// logic:{3, 4, 6, 8, 7, 9}
// rev: 9 7 8 6 4 3
// rev first k: 6, 8, 7, 9, 4, 3
// rev remaining elem: 6, 8, 7, 9, 3, 4

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {3, 4, 6, 8, 7, 9};
    int k = 4;
    // reverse(a+1, a+3);
    
    for(int elem: a)
    {
        cout << elem << " ";
    }
    
    cout << endl;
    
    int n = sizeof(a)/sizeof(a[0]);
    
    reverse(a, a+n);
    reverse(a, a+k);
    reverse(a+k, a+n);
    
    for(int elem: a)
    {
        cout << elem << " ";
    }
    
}



/*
int main()
{
    string s = "aabcdeef";
    vector<pair<char, int>> freq;
    
    int n = s.length();
    int count = 1;
    for(int i =0; i<n-1; i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
        }
        else
        {
            freq.push_back({s[i], count});
            count = 1;
        }
    }
    
    freq.push_back({s[n-1], count});
    
    for(auto p : freq)
    {
        cout << p.first << " : " << p.second << endl;
    }
}

*/


/*
int main()
{
    int a[] = {5, 8, 3, 1, 9, 7};
    //op: 
    int k = 3;
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a, a+n);
    
    cout << a[n-k] << endl;
    cout << a[k-1] << endl;
    
}

*/

/*
int main()
{
    int a[] = {4, 0, 3, -2, -1, 0, 9, 8, -3};
    int cp=0, cn=0, cz=0;
    
    for(int elem: a)
    {
        if(elem > 0)
        {
            cp++;
        }
        else if(elem < 0)
        {
            cn++;
        }
        else
        {
            cz++;
        }
    }
    
    cout << "Positive: " << cp << endl;
    cout << "Negative: " << cn << endl;
    cout << "Zeros: " << cz << endl;
}

*/
