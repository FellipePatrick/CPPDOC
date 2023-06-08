/*
Faça um algoritmo que gere e escreva automaticamente a seguinte matriz: 
1 1 1 1 1 1 
1 2 2 2 2 1 
1 2 3 3 2 1 
1 2 3 3 2 1 
1 2 2 2 2 1 
1 1 1 1 1 1
*/

#include <iostream>

using namespace std;

int main(){
    int const c = 6;
    int i, j;
    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            if(i== 0 || j == 0 || j==5 || i == 5){
                cout << " 1";
            }else{
                if(((i == 1 || i == 4) && j > 0 && j < 5)){
                    cout << " 2";
                }else{
                    if(i == 2 || i == 3){
                        if(j == 1 || j == 4){
                            cout << " 2";
                        }else{
                            cout << " 3";
                        }
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}