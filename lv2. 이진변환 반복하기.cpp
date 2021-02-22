#include <string>
#include <vector>

using namespace std;

void change(int n, int& x, int& y){
    if(n==1) return;

    x++;
    int nextn=0;
    for(;n>=1; n=n/2 ){
        if(n%2==0){
            y++;
        }
        else{
            nextn++;
        }
    }


    change(nextn, x, y);
}

vector<int> solution(string s) {
    vector<int> answer;
    int x=1;
    int y=0;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            y++;
        }
    }

    change(s.size()-y, x, y);

    answer.push_back(x);
    answer.push_back(y);
    return answer;
}
