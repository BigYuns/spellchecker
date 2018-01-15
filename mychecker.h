#include "spellchecker_interface.h"
#include <string>
#include <vector>
#include <map>
using namespace std;  // trivia: what is this?

// declare your spellChecker class here, inheriting the SpellChecker class
class SpellChecker {
	public: 
		//Constructor 
		SpellChecker(string pathToDictionary); 

		//Methods
		bool isValidWord(string word); 
		vector<string> guessCorrections(string word); 

	private:
		map<string, int> wordsToPopularityMap; 
		void testWordsToPopularityMap();
}; 

