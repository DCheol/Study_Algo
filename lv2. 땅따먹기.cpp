#include <iostream>
#include <vector>
using namespace std;
void print(vector<vector<int>> &v){
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<4; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"/";
    }
    cout<<endl;
}

void FindMax(vector<vector<int>> &v,int k){
    int temp=0;
    int m=0; //최대값 위치
    for(int i=0; i<4; i++){
        if(v[k][i]>temp){
            temp = v[k][i];
            m=i;
        }
    }
    for(int i=0; i<4 ; i++){
        if(i==m)
            continue;
//        cout<<"i:"<<i<<", v[k+1][i]:"<<v[k+1][i]<<endl;
        v[k+1][i]+=temp;
    }
//    cout<<"temp:"<<temp<<", m:"<<m<<endl;
    temp=0;

    for(int i=0; i<4; i++){
        if(i==m)
            continue;
        if(v[k][i]>temp){
            temp = v[k][i];
        }
    }
    v[k+1][m]+=temp;
}

int solution(vector<vector<int> > land)
{
    int answer = 0;

    for(int i=0; i+1<land.size(); i++){
        FindMax(land, i);
//        print(land);
    }

    for(int i=0; i<4; i++){
        if(land[land.size()-1][i]>answer){
            answer = land[land.size()-1][i];
        }
    }

    return answer;
}
