#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    string temp;
    for(int i;i<seoul.size(); i++){
        if(seoul[i]=="Kim"){
            temp = to_string(i);
            answer = "�輭���� "+temp+"�� �ִ�";
            break;
        }
    }
    return answer;
}
