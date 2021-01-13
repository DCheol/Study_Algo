#include <string>
#include <vector>

using namespace std;

string Change(string p){
    string temp ="";
    if(p=="") return p;
    if(p[0]=='(') return p;
    else if(p[0]==')'){
        for(int i=1; i<p.size()-1; i++){ //�յ� �ϳ� �ڸ���
            if(p[i]=='('){ //�Ųٷ�
                temp +=')';
            }
            else temp +='(';
        }
    }
    return temp;
}

string Division(string p){
    if(p=="") return p; //���������� (��������)u + v("")
    int count=0; //������������ ���� ���ؼ�
    string u, v;
    for(int i=0; i<p.size();i++){
        if(p[i]=='(')
            count++;
        else
            count--;

        if(count==0){ //�������� u ������
            /* p.substr(i+1):v , p.substr(0,i+1):u*/
            u=p.substr(0,i+1);
            v=Division(p.substr(i+1));
            if(u[0]=='(') //u�� �ùٸ����
                return u+v;
            else //u�� �ùٸ��� ���� ���
                return "("+v+")"+Change(u);

        }
    }
}

string solution(string p) {
    string answer = Division(p);
    return answer;
}
