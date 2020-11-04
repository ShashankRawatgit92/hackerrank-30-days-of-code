#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if(N%2!=0)
    {
        cout<<"Weird"<<endl;
    }
    else 
    {
        if(N>1&&N<6)
        {
            cout<<"Not Weird";
        }
        
        else if(N>5&&N<21)
        {
            cout<<"Weird";
        }
        
        else if(N>19)
        {
            cout<<"Not Weird"<<endl;
        }
    }
    return 0;
}
