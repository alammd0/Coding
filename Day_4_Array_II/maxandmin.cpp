#include<iostream>
#include<limits.h>

using namespace std;

int finmin(int arr[][3], int row, int column){

    int minVal = INT_MAX ;

    for(int i = 0; i < row; i++){
        for (int j = 0; j < column; j++)
        {
            minVal = min(arr[i][j], minVal);
        }
    }

    return minVal;
}

int finMax(int arr[][3], int row, int column){

    int maxVal = INT_MIN ;

    for(int i = 0; i < row; i++){
        for (int j = 0; j < column; j++)
        {
            maxVal = max(arr[i][j], maxVal);
        }
    }

    return maxVal;
}

int main(){

    int arr[3][3] { 
        {10, 20, 30},
        {40, 90, 50},
        {60, 70, 80}
    }; 

    int row = 3 ;
    int column = 3 ;

    cout << finMax(arr, row, column)  << endl;
    

    return 0 ;
}