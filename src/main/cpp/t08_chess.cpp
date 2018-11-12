//Даны числа n и m. Заполните массив размером n × m в шахматном порядке: 
// клетки одного цвета заполнены нулями, 
// а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. 
// В левом верхнем углу записано число 1.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   0   2   0   3
//   0   4   0   5   0
//   6   0   7   0   8

#include "t08_chess.h"
#include <iostream>
#include <iomanip>


using namespace std;

int t08_chess() {
    int n,m,count=1;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                if(j%2==0){
                    arr[i][j]=count;
                    count++;
                }
                else{
                    arr[i][j]=0;
                }
            }
        }
        else{
            for(int j=0;j<m;j++){
                if(j%2==0){
                    arr[i][j]=0;
                }
                else{
                    arr[i][j]=count;
                    count++;
                }
            }
        }
        for(int j=0;j<m;j++){
            cout<<setw(4)<<arr[i][j];
        }
    }
    return 0;
}
