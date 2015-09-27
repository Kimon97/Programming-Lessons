#pragma once
class Onegin {
private:
	vector<std::string> strmas;
	void Sort();
	static bool Compare(std::string str1, std::string str2);

public:
	Onegin(char* path);

	std::string GetNewOnegin();

	virtual ~Onegin();

};
