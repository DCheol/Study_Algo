#include <string>
#include <vector>
#include <iostream>
using namespace std;

void Check(string skill, string &s, int &answer){
    string temp="";
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<skill.size(); j++){
            if(s[i]==skill[j]){
                temp += s[i];
                continue;
            }
        }
    }
    //cout<<temp<<" vs "<<skill.erase(temp.size())<<endl;
    if(skill.erase(temp.size())==temp)
        answer++;
}

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for(int i=0; i<skill_trees.size(); i++){
        Check(skill, skill_trees[i], answer);
        //cout<<"-----------"<<endl;
    }
    return answer;
}
