#pragma once
const char PATTERN[ ] = "\\t\\t[^\\n]*\\n";

class Onegin {
private:
	
	vector<string> strmas;
	void Sort();
	static bool Compare(string str1, string str2);
	static bool isalpha_(char);

	void CutBedSimbols();

public:
	Onegin(const char* path);

	string GetNewOnegin();

	bool NewOneginToFile(const char* fName, int verses);

	//friend Onegin operator=(Onegin a, int b);

	virtual ~Onegin();

};
