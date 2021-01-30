#include <string>
#include <vector>
//#include <iostream>
using namespace std;

int N;
vector<string> Sdata;
bool visited[8];
string Friends;
int answer;

bool Check(string &temp, string &data){
    int k=0;
    int dist=0;
    /*간격(dsit) 찾기*/
    for(int i=0; i<8; i++){
        if(temp[i]==data[0] || temp[i]==data[2]){
            if(k==0){
                dist -=i;
                k++;
            } else{
                dist +=i;
                break;
            }
        }
    }
    dist--;

    /*data에서 요구하는 값*/
    k = data[4]-'0';

    /*부등호 선별*/
    if(data[3]=='='){
        if(dist != k)
            return false;
    }
    else if(data[3]=='<'){
        if(dist >= k)
            return false;
    }
    else if(data[3]=='>'){
        if(dist <= k)
            return false;
    }
    return true;
}


void Find(string &temp){
    /*N개 데이터 검증*/
    for(int i=0; i<N; i++){
        if(Check(temp, Sdata[i])==false){
            return;
        }
    }
    /*모두 검증되면 +1*/
    answer++;
    return;
}

void Permutation(string temp, int lv){
    //cout<<lv<<endl;
    //cout<<temp<<endl;
    if(lv==8) {
        //cout<<temp<<endl;
        Find(temp);
        return;
    }

    for(int i=0; i<8; i++){
        if(visited[i]==false){
            visited[i]=true; //변형
            temp += Friends[i];
            Permutation(temp, lv+1); //재귀
            visited[i]=false; //원래대로
            temp.erase(temp.size()-1);
        }
    }
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int solution(int n, vector<string> data) {
    /*전역변수 초기화*/
    N=n;
    Sdata = data;
    Friends = "ACFJMNRT";
    answer = 0;
    for(int i=0; i<8;i++){
        visited[i]=false;
    }


    /*코드 시작*/
    Permutation("", 0);


    return answer;
}
