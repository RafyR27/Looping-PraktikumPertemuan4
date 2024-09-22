#include <Iostream>
using namespace std;

int main(){
    int n;

    cout<<"        Program Pola Bintang        "<<endl;
    cout<<"===================================="<<endl;

    cout<<"Masukan tinggi yang diingingkan: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int s=i; s<n; s++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}
