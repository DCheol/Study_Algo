#include <string>
#include <vector>

using namespace std;

string Change(string p){
    string temp ="";
    if(p=="") return p;
    if(p[0]=='(') return p;
    else if(p[0]==')'){
        for(int i=1; i<p.size()-1; i++){ //앞뒤 하나 자르기
            if(p[i]=='('){ //거꾸로
                temp +=')';
            }
            else temp +='(';
        }
    }
    return temp;
}

string Division(string p){
    if(p=="") return p; //마지막에서 (균형잡힌)u + v("")
    int count=0; //균형잡혔는지 보기 위해서
    string u, v;
    for(int i=0; i<p.size();i++){
        if(p[i]=='(')
            count++;
        else
            count--;

        if(count==0){ //균형잡힌 u 빼내기
            /* p.substr(i+1):v , p.substr(0,i+1):u*/
            u=p.substr(0,i+1);
            v=Division(p.substr(i+1));
            if(u[0]=='(') //u가 올바른경우
                return u+v;
            else //u가 올바르지 않은 경우
                return "("+v+")"+Change(u);

        }
    }
}

string solution(string p) {
    string answer = Division(p);
    return answer;
}
