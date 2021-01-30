#include <string>
#include <vector>
#include <iostream>

using namespace std;

int count=1;
int** arr;
int N;
/*
void Printarr(){
    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }cout<<endl;
}*/

/*pos(x,y) x=--- y=|||*/
void Fill(int x, int y, int n){
    arr[x][y]=count++;
    for(int i=0; i<n-1; i++){
        x++;
        arr[x][y]=count++;
    }
    for(int i=0; i<n-1; i++){
        y++;
        arr[x][y]=count++;
    }
    for(int i=0; i<n-2; i++){
        x--; y--;
        arr[x][y]=count++;
    }
    //Printarr();

    if(n<=3) return;
    Fill(x+1, y, n-3);
}

vector<int> solution(int n) {
    vector<int> answer;
    /*배열(arr)준비*/
    arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[i+1]{0};
    }
    count=1; N=n; //전역변수

    /*채우기*/
    Fill(0, 0, n);

    /*answer에 넣기*/
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            answer.push_back(arr[i][j]);
        }
    }


    return answer;
}
