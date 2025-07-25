// 1. Given a string, find the count of all the vowels in it.

// 2. Count the number of words in the given sentence.

// 3. Print the words of the given string, each on a new line.

// 4. Print the string in the reverse order of words, without reversing each of the words.

// s = "Aditya Jain"
// op: Jain Aditya


// 5. Toggle case of the string. 
// upper -> lower
// lower -> upper


// 6. Replace all the spaces with -
// 1- with using another string
// 2 - without using another string

// 7- Reverse the given string without using the system defined reverse method.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Aditya";
    int n = s.length();
    int l = 0, r = n-1;
    
    while(l < r)
    {
        swap(s[l], s[r]);
        l++;
        r--;
    }
    
    cout << s << endl;
}

/*
int main()
{
    string s = "Aditya Jain loves programming";
    
    int n = s.length();
    
    for(int i=0; i<n ; i++)
    {
        if(s[i] == ' ')
        {
            s[i] = '-';
        }
    }
    
    cout << s << endl;
}

*/

/*

int main()
{
    string s = "Aditya Jain loves programming";
    
    string ans = "";
    
    for(char c: s)
    {
        if(c == ' ')
        {
            ans += '-';
        }
        else
        {
            ans += c;
        }
    }
    
    cout << ans << endl;
}

*/
/*
int main()
{
    string s = "Aditya @ 123 Jain";
    string ans = "";
    
    for(char c: s)
    {
        if(c >= 'A' && c <= 'Z')
        {
            char c1 = (c+32);
            ans = ans + c1;
        }
        else if( c>= 'a' && c<= 'z')
        {
            char c1 = (c-32);
            ans = ans + c1;
        }
        else
        {
            ans += c;
        }
    }
    cout << ans << endl;
}
*/

/*
int main()
{
    string s = "Aditya Jain loves to teach programming";
    
    vector<string> words;
    string word = "";
    
    for(char c: s)
    {
        if(c != ' ')
        {
            word += c;
        }
        else
        {
            words.push_back(word);
            word = "";
        }
    }
    
    words.push_back(word);
    
    int n = words.size();
    string ans = "";
    
    for(int i=n-1; i>= 0 ; i--)
    {
        if(i != n-1)
        {
            ans = ans + " " + words[i];
        }
        else
        {
            ans = words[i];
        }
       
    }
    
    cout << ans << endl;
    
}

*/
/*

int main()
{
    string s = "Aditya Jain loves to teach programming";
    
    for(char c: s)
    {
        
        if(c == ' ')
        {
            cout << endl;
        }
        else
        {
            cout << c;
        }
    }
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello dosto, kaise hai aap sabhi log?";
    
    int count = 1;
    for(char c: s)
    {
        if(c == ' ')
        {
            count++;
        }
    }
    cout << count << endl;
}


/*
int main()
{
    string s = "Aditya Jain";
    int count = 0;
    
    for(char c: s)
    {
        if(c == 'a' || c=='e' || c=='i' || c=='o' || c=='u' || c =='A' || c== 'E' || c=='I' || c=='O' || c=='U')
        {
            count++;
        }
    }
    
    cout << count << endl;
}
*/
