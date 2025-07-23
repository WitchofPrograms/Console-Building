#include <iostream>
using namespace std;

int main(){ //1 8 16 24 32
    int a = 0;
    int sehirbuyuklugu = 4;
    for(int b=0 ; b < sehirbuyuklugu ; b++){
        a = a + 8;
    }
    int flag = 0;
    do{
        for(int i = -1 ; i<a ; i++){
            cout << "a";
        }
        flag++;
    }while(flag != sehirbuyuklugu);
}

