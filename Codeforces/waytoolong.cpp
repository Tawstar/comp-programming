#include <iostream>
using namespace std;

int main(){
    long long t;
    string a;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a;
        if(a.size() > 10)
        {
            cout << a[0] << (a.size() - 2) << a[a.size()-1] << endl;
        }
        else
        {
            cout << a << endl;
        }
    }


}