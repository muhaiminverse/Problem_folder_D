#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int c[n];
    int table[n+1][m+1];
    for(int i=0; i<n; i++)
        cin >> c[i];


    for(int i=0; i<=n; i++)
        table[i][0] = 0;
    for(int j=1; j<=m; j++)
        table[0][j] = m+1;



    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(j>=c[i-1])
            {
                table[i][j] = min(table[i-1][j], (1+table[i][j-c[i-1]]));
            }
            else
            {
                table[i][j] = table[i-1][j];

            }
        }

    }
    cout <<"Minimun number of coin is: "<< table[n][m] << endl;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
            cout << table[i][j] << " ";
        cout << endl;
    }




    int i = n, j = m;
    vector<int> s;
    while(i>0 && j>0)
    {
        if(table[i][j] != table[i-1][j])
        {
            s.push_back(c[i-1]);
            j = j - c[i-1];
        }
        else i--;
    }
    reverse(s.begin(), s.end());
    for(int i=0; i<s.size(); i++)
        cout << s[i]<< endl;

    cout << endl;

}
