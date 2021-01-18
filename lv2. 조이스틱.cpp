#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;
int* arr;
int num;
bool Check() {
	/*
	for (int i = 0; i < num; i++) {
		cout << arr[i] << " ";
	}cout << endl;
	*/
	for (int i = 0; i<num; i++) {
		if (arr[i] != 0) {
			return false;
		}
	}
	return true; //모두 0이면
}
int FindNext(int point, int &answer) {
	int nextp = point;
	int cost = 1000;
	//cout << "ㅡㅡㅡㅡㅡFindNextㅡㅡㅡㅡ point:"<<point <<", num:"<<num<< endl;
	for (int i = 0; i<num; i++) {
		if (arr[i] == 0||i==point) continue;

		//cout<<"i:"<<i<<", "<< abs(point - i)<< " vs "<< num - abs(point - i) << endl;
		if (abs(point - i) < num - abs(point - i)) {
			if (abs(point - i) < cost) {
				//cout << "1case : " << point - i << endl;
				nextp = i;
				cost = abs(point - i);
			}
		}
		else {
			if (num - abs(point - i) < cost) {
				//cout << "2case : " << num - point + i << endl;
				nextp = i;
				cost = num - abs(point - i);
			}
		}

	}
	//cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	//cout << "We find point:" << nextp <<", cost:"<<cost<< endl;
	if (Check())
		return 0;
	answer += cost;
	return nextp;
}

void Greed(int curpoint, int &answer) {
	int point = curpoint;
	if (Check()) {
		return;
	}
	answer += arr[point];
	arr[point] = 0;
	//cout << "answer:" << answer << endl;
	point = FindNext(point, answer);

	Greed(point, answer);
	return;
}

int solution(string name) {
	int answer = 0;
	num = name.size();
	arr = new int[num];
	for (int i = 0; i<num; i++) {
		if (name[i] - 'A' < 'Z' - name[i] + 1)
			arr[i] = name[i] - 'A';
		else
			arr[i] = 'Z' - name[i] + 1;
		cout << arr[i] << " ";
	} cout << endl;

	Greed(0, answer);

	return answer;
}
