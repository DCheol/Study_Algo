#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int count = 0;
    int size = priorities.size();
    vector<int> printed(priorities);
    sort(printed.begin(),printed.end());

    for(int i=0; ;i=(i+1)%size){
        if(priorities[i]==printed[size-count-1]){//�������� ��������
            priorities[i]=-1;    //�����
            count++;            //���� Ƚ�� ����
            if(i==location)
                break;
        }
    }

    return count;
}
