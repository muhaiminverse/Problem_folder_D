#include<bits/stdc++.h>

using namespace std;

int main()
{

//
//    priority_queue<int, vector<int>, greater<int> > pq;
//    pq.push(-11);
//    pq.push(4);
//    pq.push(1);
//
//    while(!pq.empty())
//    {
//        cout<< pq.top() << endl;
//        pq.pop();
//    }
//    cout << endl;



//    pair<int, pair<int, int> >pr;
//    pr.first = 5;
//    pr.second.first = 0;
//    pr.second.second = 1;
//
//    cout << pr.first << " " << pr.second.first << " " << pr.second.second << endl;



/*
    priority_queue<int, vector<int>, greater<int> > pq;
    pq.push(-11);
    pq.push(4);
    pq.push(1);

    while(!pq.empty())
    {
        cout<< pq.top() << endl;
        pq.pop();
    }
    cout << endl;
*/


priority_queue<pair<int,pair<int, int> > > pq;
//priority_queue<pair<int, int>, vector<pair<int, int> >,  greater<pair<int, int> >  > pq;
pq.push({2,{1,2}});
pq.push({4,{0,1}});
pq.push({3, {1,2}});

while(!pq.empty())
    {
        cout<< pq.top().first <<" " << pq.top().second.first << " " <<  pq.top().second.second<< endl;;
        pq.pop();
    }
    cout << endl;

/*
    pair<int, pair<int, int> > pq;
    pq.first = 10;
    pq.second.first = 20;
    pq.second.second = 30;
     cout << pq.first << " " << pq.second.first << " " << pq.second.second << endl;
     */


   /*
    priority_queue<int, vector<int>, greater<int> > pq;
    pq.push(-11);
    pq.push(4);
    pq.push(1);

    while(!pq.empty())
    {
        cout<< pq.top() << endl;
        pq.pop();
    }
    cout << endl;

    vector <pair<int, pair<int,int> > > v;
    for(int i=0; i<3; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back({a,{b,c}});
    }
    for(int i=0; i<v.size(); i++)
    {   cout << v[i].first << " " << v[i].second.second << " ";
        cout << endl;
    }

*/


//priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > >pq;

}
