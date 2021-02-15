#include <string>
#include <vector>
#include <iostream>
using namespace std;

void cut(string s, int n, string &answer){
    if(s.size()==n){
        //cout<<"case1"<<endl;
        return;
    }
    if(n==0){
        answer+=s;
        //cout<<"case2"<<endl;
        return;
    }
    char Max = '0'-1; //최대 찾기
    int pos=0; //최대 위치
    for(int i=0; i<=n; i++){
        if(Max<s[i]){
            Max=s[i];
            pos=i;
            if(Max=='9'){
                break;
            }
            if(s[i]=='0'){}
        }
    }
    answer+=Max;
    //cout<<"남은 문자:"<<s.substr(pos+1)<<", 지울 개수:"<<n-pos<<", answer:"<<answer<<endl;
    cut(s.substr(pos+1), n-pos, answer);
}

string solution(string number, int k) {
    string answer = "";
    cut(number, k, answer);
    return answer;
}
