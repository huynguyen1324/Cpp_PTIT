#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int min = a[0], max = a[0];
        for(int i = 1; i < n; i++){
            if(a[i] < min){
                min = a[i];
            }
            if(a[i] > max){
                max = a[i];
            }
        }
        cout << max - min +1 - n << endl;
    }
}