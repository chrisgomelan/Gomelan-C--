#include<iostream>
using namespace std;

int main(){
    int arr [2][3] = {{1,2,3},
                     {2,3,1}};

    for(int i = 0; i < 2; i++){

        for(int x = 0; x < 3; x++){
            cout << arr[i][x] << endl;
        }
    }



    return 0;
}