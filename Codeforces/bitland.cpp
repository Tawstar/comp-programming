#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;  
        if(s[1] == '-')
        {
            ans--;
        }
        else if(s[1] == '+')
        {
            ans++;
        }
    }
    cout << ans;
}