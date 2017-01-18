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
	Onegin(const char* fName);

	string GetNewOnegin(const int CountOfVerses, const string separator);

	bool NewOneginToFile(const char* fName,const int CountOfVerses);

	//friend Onegin operator=(Onegin a, int b);

	virtual ~Onegin();

};
