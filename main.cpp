#include<iostream>
#include<set>
#include<vector>
#include<stdio.h>
using namespace std;

int main()
{
    int n, t;
    freopen("input.txt","r",stdin);
    set<int> set1;
    vector<string> str;
    vector<string> :: iterator it;
    cin >> n;
    for (int i = 0; i  < n; i++){
        cin >> t;
        if (set1.count(t))
            str.push_back("YES"); else
                str.push_back("NO");
        set1.insert(t);
    }
    for (it = str.begin(); it != str.end(); it++)
        cout << *it << " ";
}
