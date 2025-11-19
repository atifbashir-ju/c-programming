#include<iostream>
using namespace std;


int main(){

    int r = 2 ;
    int c = 2 ;

    int arr[r][c];


    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"Enter value for arr["<<i<<"]["<<j<<"] : ";
            
        }
    }





    return 0;
}