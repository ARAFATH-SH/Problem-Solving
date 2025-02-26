#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n, q;
    cin>>n>>q;
    string str;
    cin>>str;
    while (q--)
    {
        string st;
        cin>>st;
        int x, y;
        if (st == "pop_back")
        {
            str.pop_back();
        }
        else if (st == "front")
        {
            cout<<str.front()<<endl;
        }
        else if (st == "back")
        {
            cout<<str.back()<<endl;
        }
        else if (st == "sort")
        {

            cin>>x>>y;
            sort(str.begin() + min(x, y) - 1, str.begin() + max(x, y));
        }
        else if (st == "reverse")
        {
            cin>>x>>y;
            reverse(str.begin() + min(x, y) - 1, str.begin() + max(x, y));
        }
        else if (st == "print")
        {
            int pos;
            cin>>pos;
            cout<<str[pos - 1]<<endl;
        }
        else if (st == "substr")
        {
            cin>>x>>y;
            for (int i = min(x, y) - 1; i < max(x, y); i++)
                cout<<str[i];
            cout<<endl;
        }
        else if (st == "push_back")
        {
            char x;
            cin>>x;
            str.push_back(x);
        }
    }
}