#include <iostream>
using namespace std;
int main() {
    int n=0, x1=0, x2=1, x3=0;
    cin >> n;
    if(n==1){
    cout << "1" << endl;
    cout << "1" << endl;
    }
    if(n>1){
        for(int i=0; i<n+1; i++){
            x1=x2;
            x2=x3;
            x3=x1+x2;
            if (x3<=n){
                cout << x3 << endl;
            }else{
                break;
            }
        }
    }
    return 0;
}
