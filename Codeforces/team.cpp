#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int bigcount = 0;
    bool flag;
    int count;
    for(long long i = 0; i < n; i++){
        count = 0;
        for(int j = 0; j < 3; j++){
            cin >> flag;
            if(flag){
                count++;
            }
        }
        if(count >= 2){
            bigcount++;
        }
    }
    cout << bigcount;

}