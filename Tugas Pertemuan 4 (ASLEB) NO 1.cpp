#include <iostream>
using namespace std;

int main(){
    int n, b, pilih, total;


    cout<<"Program deret angkat genap, ganjil, dan prima"<<endl;
    cout<<"============================================="<<endl;

    cout<<"1. Deret Angka Genap"<<endl;
    cout<<"2. Deret Angka Ganjil"<<endl;
    cout<<"3. Deret Angka Prima"<<endl<<endl;

    cout<<"Silahkan masukan pilihan (dengan angka): ";
    cin>>pilih;

    cout<<"Masukan jumlah deret yang diingingkan (batas untuk Deret Angka Prima): ";
    cin>>n;
    cout<<endl;

    switch (pilih){
    case 1:
        total = 2;
        cout<<"Deret Angka Genap: ";
        cout<<"2 ";
        for(int i=2; i<=n; i++){
            b=i*2;
            cout<< b <<" ";
            total= total + b;
        }
        cout<<"Jumlah: "<<total;
        cout<<endl;

        cout<<"faktor-faktornya: ";
        for(int z=1; z<=total; z++){
            if(total % z == 0){
                cout<<z<<" ";
            }
        }
        cout<<endl;
    break;

    case 2:
        total = 1;
        cout<<"Deret Angka Ganjil: ";
        cout<<"1 ";

        for(int i=2; i<=n; i++){
            b= (i*2)-1;
            cout<< b <<" ";
            total=total + b;
        }
        cout<<"Jumlah: "<<total;
        cout<<endl;

        cout<<"faktor-faktornya: ";
        for(int z=1; z<=total; z++){
            if(total%z == 0){
                cout<< z <<" ";
            }
        }
        cout<<endl;
    break;

    case 3:
        total=2;
        cout<<"Deret Angka Prima: ";
        cout<<"2 ";

        for(int i=3; i<=n; i++){
            int mod = 0;
            for(int j=i; j>0; j--){
                int y = i%j;
                if (y == 0){
                    mod++;
                }
            }
            if(mod == 2){
            cout<< i << " ";
            total=total+i;
            }
        }
        cout<<"Jumlah: "<<total;
        cout<<endl;

        cout<<"faktor-faktornya: ";
        for(int z=1; z<=total; z++){
            if(total%z == 0){
                cout<< z <<" ";
            }
        }
        cout<<endl;
    break;
    }



    return 0;
}
