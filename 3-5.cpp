#include<bits/stdc++.h>
using namespace std;

// 1. Given an array of int, print them in ascending order, without using sorting.

// 2.Given an array of int, print the max 3 elements in descending order.

// 3. Given an array of int, print the max 3 elements in ascending order without using sorting. Can only use Heaps.

// 4. Given a vector of int, create a new vector where each element is the sum of all the previous elements including the current element of the given vector.


// 5. Given a string made of only 3 types of brackets: (), {}, []
// Check if it is balancced parantesis or not.

// (())
// {()} -> valid
// []() -> valid
// [{)] -> invalid



// 6. Reverse the given stack using another stack.

int main()
{
   stack<int> st;
   int i = 1;
   while(i<=10)
   {
       st.push(i);
       i++;
   }
   
   stack<int> st2;
    
    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }
    
    while(!st2.empty())
    {
        cout << st2.top() << endl;
        st2.pop();
    }
}

/*


int main()
{
    stack<char> st;
    string s = "([]){}";
    // string s = "([]{}";
    bool flag = true;
    
    for(char c: s)
    {
        if(c == '(' || c== '{' || c=='[')
        {
            st.push(c);
        }
        else
        {
            if(st.empty())
            {
                flag = false;
                break;
            }
            
            char top = st.top();
            st.pop();
            
            if( (c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')
            )
            {
                flag = false;
                break;
            }
            
        }
    }
    
    if(flag && st.empty())
    {
        cout << "Valid";
    }
    else
    {
        cout << "Invalid";
    }
}



int main()
{
    vector<int> a = {4,5,3,1,8};
    vector<int> b;
    int n = a.size();
    
    int sum = 0;
    
    for(int i=0; i<n; i++)
    { 
        sum = 0;
        for(int j=i; j>=0; j--)
        {
            sum += a[j];
        }
        
        b.push_back(sum);
    }
    
     for(int elem: b)
        {
            cout << elem << endl;
        }
}



int main()
{
    vector<int> a = {4,5,3,1,8};
    int n = a.size();
    
    for(int i=1; i<n; i++)
    {
        a[i] += a[i-1];
    }
    
    for(int elem: a)
    {
        cout << elem << endl;
    }
}


int main()
{
    vector<int> a = {4,5,3,1,8};
    vector<int> b;
    int sum = 0;
    
    for(int elem: a)
    {
        sum += elem;
        b.push_back(sum);
    }
    
    for(auto elem: b)
    {
        cout << elem << endl;
    }
}



int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    
    int a[] = {3,5,1,8,6,9};
    
    for(int elem: a)
    {
        if(pq.size() < 3)
        {
            pq.push(elem);
        }
        else if(pq.top() < elem)
        {
            pq.pop();
            pq.push(elem);
        }
    }
    
    while(! pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
}



int main()
{
    priority_queue<int> mx_heap;
    
    int a[] = {4,7,2,5,9,8,1};
    
    for(int elem: a)
    {
        mx_heap.push(elem);
    }
    
    int i = 0;
    while(i < 3)
    {
        cout << mx_heap.top() << endl;
        mx_heap.pop();
        i++;
    }
}


int main()
{
    priority_queue<int, vector<int>, greater<int>> min_heap;
    
    int a[] = {4,7,2,5,9,8,1};
    
    for(int elem: a)
    {
        min_heap.push(elem);
    }
    
    while(!min_heap.empty())
    {
        cout << min_heap.top() << endl;
        min_heap.pop();
    }
}



int main() {
    priority_queue<int> pq;
    
    pq.push(10);
    pq.push(30);
    pq.push(20);
    
    cout << "Max element: " << pq.top();
}

*/
