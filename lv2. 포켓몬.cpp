#include <vector>
//#include <iostream>
using namespace std;
/*
void printvec(vector<int> v) {
	for (int i = 0; i<v.size(); i++) {
		cout << v[i] << " ";
	}cout << endl;
}
*/
int solution(vector<int> nums)
{

	int answer = 0;
	int N = nums.size();
    if(N==2) return 1;
	vector<int> arr; //저장된 포켓몬
	arr.push_back(nums[0]);
	//cout << "insert " << nums[0] << endl;

	for (int i = 1; i<N; i++) {
		//cout << "------i:" << i << ", nums[i]:" << nums[i] << "-------" << endl;
//		printvec(arr);

		for (int j = 0; j<arr.size(); j++) {
//			cout << "j:" << j << ", arr[j]:" << arr[j] << endl;

			if (nums[i] == arr[j]) break;

			else if (nums[i] > arr[j]) {
				if (j == arr.size() - 1) {
//					cout << "insert " << nums[i] << endl;
					arr.push_back(nums[i]);
					break;
				}
				continue;
			}

			else if (nums[i] < arr[j]) {

//				cout << "insert " << nums[i] << "j:" << j << ", arrsize" << arr.size() << endl;
				arr.insert(arr.begin() + j, nums[i]); break;
			}
		}
		if (arr.size() == N / 2) break;
	}

	answer = arr.size();
	return answer;
}
