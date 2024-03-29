#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
#include"2.cpp"

int main(){
	vector<Person> v;
	v.resize(5);
	createPerson(v);

	deque<int> d;
	d.resize(5);

	cout << "Please input the num of person" << endl;
	int x;
	cin >> x;
	for (int i = 0;i < x;i++){
		getScore(d);
		v[i].setscore(printAverageScore(d));
	}
	for (int i = 0;i < x;i++){
		printPerson(v[i]);
	}
}