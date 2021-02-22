#include <string>
#include <vector>
#include <iostream>
using namespace std;

void print(vector<vector<int>> triangle, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++)
            cout<<triangle[i][j]<<"\t";
        cout<<endl;
    }cout<<endl;
}

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int n=triangle.size();
    for(int i=1; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0){
                triangle[i][j] += triangle[i-1][j];
                continue;
            }
            else if(j==i){
                triangle[i][j] += triangle[i-1][j-1];
                continue;
            }
            else{
                if(triangle[i-1][j]>triangle[i-1][j-1])
                    triangle[i][j] += triangle[i-1][j];
                else
                    triangle[i][j] += triangle[i-1][j-1];
            }

        }
        //print(triangle, n);
    }
    for(int i=0; i<n; i++){
        if(answer<triangle[n-1][i]){
            answer = triangle[n-1][i];
        }
    }
    return answer;
}
