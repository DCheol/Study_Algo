#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int c1 = arr1.size();
    int r1 = arr1[0].size();
    int c2 = arr2.size();
    int r2 = arr2[0].size();

    vector<vector<int>> answer;
    vector<int> v;
    for(int i=0; i<c1; i++){
        answer.push_back(v);
    }
    int temp=0;

    for(int k=0; k<c1; k++){
        for(int j=0; j<r2; j++){
            temp=0;
            for(int i=0; i<r1; i++){
                temp+=arr1[k][i]*arr2[i][j];
            }
            //cout<<temp<<endl;
            answer[k].push_back(temp);
        }

    }

    return answer;
}
