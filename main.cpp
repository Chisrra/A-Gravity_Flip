#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, aux;
    vector <int> colums;

    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>aux;
        colums.push_back(aux);
    }
    sort(colums.begin(), colums.end());
    for (auto i = colums.begin(); i != colums.end(); i++){
        cout<<*i<<" ";
    }
    cout<<"\n\r";
    return 0;
}
