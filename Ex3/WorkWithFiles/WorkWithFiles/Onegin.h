#pragma once
class Onegin {
private:
	vector<string> strmas;
	void Sort();
	static bool Compare(string str1, string str2);
	static bool isalpha_(char);

public:
	Onegin(char* path);

	string GetNewOnegin();

	virtual ~Onegin();

};
