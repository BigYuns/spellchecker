#include <iostream>  // for cout, the print func

#include "mychecker.h"
#include <string>
#include <vector>
#include <fstream>
using namespace std;

// implement your own checker class here
//Constructor 

SpellChecker::SpellChecker(string pathToDictionary){
	ifstream wordsDictionary(pathToDictionary); 
	string line;
	while (getline(wordsDictionary,line))
	{
 		wordsToPopularityMap[line] = 0; 
	}

	//testWordsToPopularityMap(); 
}

void SpellChecker::testWordsToPopularityMap()
{
	for (auto const& pair : wordsToPopularityMap)
	{
		cout << pair.first << "\n"; 
	}
}


bool SpellChecker::isValidWord(string word){
	if(wordsToPopularityMap.find(word) == wordsToPopularityMap.end())
	{
		return false; 
	}
	return true; 
}

vector<string> SpellChecker::guessCorrections(string word){
	cout << "this is the guessCorrections testing \n"; 
	return {}; 
}