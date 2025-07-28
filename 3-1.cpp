// 1. Given a string, remove all the vowels in it and print the new stirng.

// 2. Reverse a string without using the swap operation.

// 3. Remove consecutive duplicate characters and print the new string.
// s = "addabcce"
// op: adabce

// 4. Given a string, find the first non-repeating character.
// s = abcad
// op: b


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcbadd";
    vector<pair<char, int>> v;
    
    for(char c: s)
    {
        v.push_back({c,0});
    }
    
    for(auto p: v)
    {
        cout << p.first << " " << p.second << endl;
    }
}


/*

int main()
{
    string s = "abcbadd";
    int freq[256] = {0};
    
    for(char c: s)
    {
        freq[c]++;
    }
    
    for(char c: s)
    {
        if(freq[c] == 1)
        {
            cout << c << endl;
            break;
        }
    }
}


int main()
{
    string s = "addabcce";
    string res = "";
    int n = s.length();
    res += s[0];
    
    for(int i=1; i<n; i++)
    {
        if(s[i] != s[i-1])
        {
            res += s[i];
        }
    }
    
    cout << res << endl;
}


int main()
{
    string s = "addabcce";
    string res = "";
    int n = s.length();
    
    for(int i=0; i<n-1; i++)
    {
        if(s[i] != s[i+1])
        {
            res += s[i];
        }
    }
    
    res += s[n-1];
    
    cout << res << endl;
}

int main()
{
    string s = "aditya";
    int n = s.length();
    string ans = "";
    
    for(int i=0; i<n; i++)
    {
        ans = s[i] + ans;
        cout << ans << endl;
    }
}


int main()
{
    string s = "aditya";
    int n = s.length();
    string ans = "";
    
    for(int i=n-1; i>=0 ; i--)
    {
        ans += s[i];
    }
    
    cout << ans << endl;
}

int main()
{
    string s = "aditya";
    //op: dty
    string ans = "";
    
    for(char c: s)
    {
        // c = tolower(c);
        
        if(c != 'a' && c != 'e' && c!='i' & c!='o' & c!='u' &
        c != 'A' && c!= 'E' && c!='I' && c!='O' && c!='U')
        {
            ans += c;
        }
    }
    
    cout << ans << endl;
    
}

int main()
{
    string s = "AdiTya";
    //op: dty
    string ans = "";
    
    for(char c: s)
    {
        // c = tolower(c);
        
        if(c == 'a' || c== 'e' || c=='i' || c=='o' || c=='u' ||
        c == 'A' || c== 'E' || c=='I' || c=='O' || c=='U')
        {
            
        }
        else
        {
            ans += c;
        }
    }
    
    cout << ans << endl;
    
}
*/
