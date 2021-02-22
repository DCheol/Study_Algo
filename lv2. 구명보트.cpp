#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int find(vector<int> &people, int limit){
    for(int i=people.size()-1; i>=0; i--){
        if(people[0]+people[i]<=limit)
            return i;
    }
    return 0;
}

int solution(vector<int> people, int limit) {
    int answer = people.size();
    sort(people.begin(),people.end());
/*
    for(int i=0; i<people.size(); i++){
        cout<<people[i]<<" ";
    }cout<<endl;
*/
    int front=0;
    int back=find(people, limit);
    //cout<<back<<endl;

    while(front<back){
        if(people[front]+people[back]<=limit){//���� �¿� �� ������
            answer--;//��Ʈ �� ��ġ��
            front++;//���� �ֵ� �� ���� ���
            back--;// ū �ֵ� �� ���� ���� ���
        }
        else if(people[front]+people[back]>limit){//���¿��
            back--;
        }

    }

    return answer;
}
