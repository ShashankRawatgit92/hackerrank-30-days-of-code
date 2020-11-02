#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    double e;
    int j;
    string t;
    cin>>j>>e;
    cin.ignore();

    
    getline(cin,t);
    cout<<i+j<<endl;
    cout<<fixed<<setprecision(1)<<d+e<<endl;
    cout<<s<<t;
    return 0;
}