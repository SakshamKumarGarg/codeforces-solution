#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;  
    string statement;

    for (int i = 0; i < n; i++) {
        cin >> statement; 
        if (statement.find("++") != string::npos) {
            x++;  
        } else {
            x--;  
        }
    }

    cout << x << endl;  
    return 0;
}
