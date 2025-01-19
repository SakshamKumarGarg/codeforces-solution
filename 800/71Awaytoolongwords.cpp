#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> strings;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);
        strings.push_back(str);
    }

    int m = strings.size();
    for (int i = 0; i < m; i++)
    {
        string name = strings[i];
        if (name.length() > 10)
        {
            cout << name[0];
            cout << name.length() - 2;
            cout << name.back();
            cout << endl;
        }
        else{
            cout<< name<<endl;
            
        }
    }

    return 0;
}