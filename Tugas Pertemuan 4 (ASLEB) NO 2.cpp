#include <iostream>
using namespace std;

int main(){
    int n, fn1= 0, fn2= 1, hasil;

    cout<<"       Program deret fibonacci       "<<endl;
    cout<<"====================================="<<endl;

    cout<<"Masukan jumlah deret yang diingingkan: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i == 1){
            cout<< fn1 <<" ";
            continue;
        }
        if(i == 2){
            cout<< fn2 <<" ";
            continue;
        }
        hasil= fn1 + fn2;
        fn1 = fn2;
        fn2 = hasil;

        cout<< hasil << " ";
    }

}
