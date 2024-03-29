#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

class Person{
public:
	Person(){
		name = "NULL";
		score = 0;
	}
	Person(string name, double score){
		this->name = name;
		this->score = score;
	}

	void setName(string name){
		this->name = name;
	}

	void setscore(double score){
		this->score = score;
	}
	
	double getScore(){
		return score;
	}

	string getName(){
		return name;
	}

private:
	string name;
	double score;
};

void createPerson(vector<Person> & v){
	string nameSeed = "ABCDE";
	string name = "xuanshou";
	for (int i = 0;i < 5;i++){
		name += nameSeed[i];
		int score = 0;
		v[i].setName(name);
		v[i].setscore(score);
		name = "xuanshou";
	}
}

double printAverageScore(deque<int> d){
	sort(d.begin(), d.end());
	double sum = 0;
	d.pop_back();
	d.pop_front();
	for (deque<int>::iterator it = d.begin();it < d.end();it++){
		sum += *it;
	}
	double averageScore = sum / d.size();
	cout << averageScore << endl;
	return averageScore;
}

void getScore(deque<int>& d){
	for (int i = 0;i < 5;i++){
		int x;
		cin >> x;
		d[i] = x;
	}
}

void printPerson(Person p){
	string name = p.getName();
	double score = p.getScore();
	cout << "name:" << name << endl;
	cout << "score:" << score <<endl;
}