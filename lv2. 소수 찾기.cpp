//#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> nums;

/*nums�� ����� ���ڵ�, n�� ������ ����*/
void pushNums(int n){
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==n){ //vector�ȿ� ������
            return;
        }
    }
    nums.push_back(n);
}

/*left�� ������, temp�� ���õȰ�*/
void DFS(string left, string selected){
    if(selected!="")
        pushNums(stoi(selected));
    if(left.size()==0){
            return;
    }
    for(int i=0; i<left.size(); i++){
        string tleft(left);
        string tselected(selected);
        tselected += tleft[i]; tleft.erase(i,1); //left���� select�� i��° ��� ����
        DFS(tleft, tselected);
    }
}
/*�Ҽ��� �ƴ� ���ڸ� üũ*/
void Count(int &num,int &count){
    if(num==2)
        return;
    if(num==0 || num==1){
        count++;
        //cout<<" �Ҽ��ƴ�!";
        return;
    }
    for(int i=2; i<sqrt(num)+1; i++){
        if(num%i==0){
            count++;
            //cout<<" i:"<<i<<" �Ҽ��ƴ�!";
            return;
        }
    }
}

int solution(string numbers) {
    int answer = 0;

    string temp;
    DFS(numbers, temp);

    for(int i=0; i<nums.size(); i++){
        //cout<<nums[i];
        Count(nums[i], answer);
        //cout<<endl;
    }

    return (nums.size()-answer);
}
