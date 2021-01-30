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
    /*����(dsit) ã��*/
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

    /*data���� �䱸�ϴ� ��*/
    k = data[4]-'0';

    /*�ε�ȣ ����*/
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
    /*N�� ������ ����*/
    for(int i=0; i<N; i++){
        if(Check(temp, Sdata[i])==false){
            return;
        }
    }
    /*��� �����Ǹ� +1*/
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
            visited[i]=true; //����
            temp += Friends[i];
            Permutation(temp, lv+1); //���
            visited[i]=false; //�������
            temp.erase(temp.size()-1);
        }
    }
}

// ���� ������ ������ ��� �Լ� ���� �ʱ�ȭ �ڵ带 �� �ۼ����ּ���.
int solution(int n, vector<string> data) {
    /*�������� �ʱ�ȭ*/
    N=n;
    Sdata = data;
    Friends = "ACFJMNRT";
    answer = 0;
    for(int i=0; i<8;i++){
        visited[i]=false;
    }


    /*�ڵ� ����*/
    Permutation("", 0);


    return answer;
}
