// 1. Check if 2 given strings are anagrams or not?
// a - using sorting
// b - using 2 extra arrays
// c - using only 1 extra arrays

// 2- Print the longest word in the given sentence. 
// a - If many such words are present, print the first one.
// b- print all the max length words.

#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s = "Aditya Jain loves to code";
    vector<pair<string,int>> v;
    int n = s.length();
    string word = "";
    int max_len = 0, len = 0;
    int i = 0;
    
    while(i < n)
    {
        while(s[i] != ' ' && i<n)
        {
            word += s[i];
            i++;
            len++;
        }
        
        v.push_back({word, len});
        
        len = 0;
        word = "";
        i++;
    }
    
    for(auto p: v)
    {
        max_len = max(max_len, p.second);
    }
    
    for(auto p: v)
    {
        if(p.second == max_len)
        {
            cout << p.first << endl;
        }
    }
}


/*



int main()
{
    string s = "Aditya Jain loves coding";
    vector<pair<string,int>> v;
    int n = s.length();
    string word = "";
    int max_len = 0, len = 0;
    int i = 0;
    
    while(i < n)
    {
        while(s[i] != ' ' && i<n)
        {
            word += s[i];
            i++;
            len++;
        }
        
        v.push_back({word, len});
        
        if(len > max_len)
        {
            max_len = len;
        }
        
        len = 0;
        word = "";
        i++;
    }
    
    for(auto p: v)
    {
        if(p.second == max_len)
        {
            cout << p.first << endl;
        }
    }
}



int main()
{
    string s = "Aditya Jain loves coding";
    //op: Aditya coding
    int n = s.length();
    int max_len = 0, len = 0;
    int i = 0;
    while(i < n)
    {
        while(s[i] != ' ' && i<n)
        {
            i++;
            len++;
        }
        
        if(len > max_len)
        {
            max_len = len;
        }
        
        len = 0;
        i++;
    }
    
    cout << max_len << endl;
    
    vector<string> words;
    string word = "";
    
    for(i =0; i<n; i++)
    {
        if(s[i] == ' ')
        {
            if(word.length() == max_len)
            {
                words.push_back(word);
            }
            
            word = "";
        }
        else
        {
            word += s[i];
        }
    }
    
    if(word.length() == max_len)
    {
        words.push_back(word);
    }
    
    for(string w: words)
    {
        cout << w << endl;
    }
    
    
}

int main()
{
    string s = "Aditya Jain loves to code & programming";
    //op: Aditya
    string longest_word = "";
    string word = "";
    int n = s.length();
    int i = 0;
    while(i < n)
    {
        while(s[i] != ' ' && i<n)
        {
            word += s[i];
            i++;
        }
        
        if(word.length() > longest_word.length())
        {
            longest_word = word;
        }
        
        word = "";
        i++;
    }
    
    cout << longest_word << endl;
}



int main()
{
    string s = "Aditya Jain loves to code & programming";
    //op: Aditya
    string longest_word = "";
    string word = "";
    int max_len=0, len=0;
    int n = s.length();
    int i = 0;
    while(i < n)
    {
        while(s[i] != ' ' && i<n)
        {
            word += s[i];
            i++;
            len++;
        }
        
        if(len > max_len)
        {
            longest_word = word;
            max_len = len;
        }
        
        word = "";
        len=0;
        i++;
    }
    
    cout << longest_word << endl;
}


int main()
{
    string a = "listen";
    string b = "silent";
    bool flag = true;
    
    int freq[26] = {0};
    
    for(char c: a)
    {
        freq[c-'a']++;
    }
    
    for(char c: b)
    {
        freq[c-'a']--;
    }
    
    // for(int elem: freq)
    // {
    //     cout << elem << " ";
    // }
    
    for(int elem: freq)
    {
        if(elem != 0)
        {
            flag = false;
            cout << "Not Anagrams!" << endl;
            break;
        }
    }
    
    if(flag)
    {
        cout << "Anagrams" << endl;
    }
    
}




int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(5);
    // 5 10
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;
    dq.pop_front();
    cout << "Front element after pop_front is: " << dq.front() << endl;
    cout << "Is queue empty? " << dq.empty() << endl;
    dq.pop_back();
    cout << "Is queue empty? " << dq.empty() << endl;
}
*/
