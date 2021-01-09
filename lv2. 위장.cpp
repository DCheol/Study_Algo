#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool Compare(string type_name, vector<string> &type, vector<int> &num){
    for(int i=0; i<type.size(); i++){
        if(type[i]==type_name){
            num[i]++;
            return false;
        }
    }
    return true;
}

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    vector<string> type;
    vector<int> num;
    /*
    for(int i=0; i<clothes.size(); i++){
        for(int j=0; j<2; j++){
            cout<<clothes[i][j]<<" ";
        }cout<<endl;
    }*/
    for(int i=0; i<clothes.size(); i++){
        if(Compare(clothes[i][1], type, num)){
            type.push_back(clothes[i][1]);
            num.push_back(1);
        }
    }
    /*
    for(int i=0; i<type.size(); i++){
        cout<<type[i]<<"\t";
    }cout<<endl;
    for(int i=0; i<type.size(); i++){
        cout<<num[i]<<"\t";
    }cout<<endl;
    */
    for(int i=0; i<num.size(); i++){
        answer*=(num[i]+1);
    }

    return (answer-1);
}
