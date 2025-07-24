#include <iostream>
using namespace std;

int main(){ //1 8 16 24 32
    int x = 0;
    int y = 0;
    int sehirbuyuklugux = 0;
    int sehirbuyukluguy = 0;
    for(int i = 0 ; i < sehirbuyuklugux ; i++){
        x = x + 8;
    }
    for(int i = 0 ; i < sehirbuyukluguy ; i++){
        y = y + 8;
    }
    int flag = 0;
    if(x==0)
        x++;
    if(y==0)
        y++;
    
        flag++;
        for(int i = 0 ; i < y ; i++){
            for(int j = 0 ; j < x ; j++){
                cout << "a ";
            }
            cout << endl;
        }
}

