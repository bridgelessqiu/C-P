// Link: https://codeforces.com/problemset/problem/266/B

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, t;
    string queue;

    cin>>n>>t;
    cin>>queue; 
    
    while(t--)
    {
        for(size_t i = 0; i < queue.length() - 1;)
        {
            if(queue[i] == 'B' && queue[i+1] == 'G')
            {
                swap(queue[i], queue[i+1]);
                i += 2;
            }
            else i++;
        }
    }
    
    cout<<queue<<endl;

    return 0;
}
