// Given an array of strings strs, group the anagrams together. You can return the answe
// in any order.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or
// phrase, typically using all the original letters exactly once.
// Example 1:
// Input: strs = ["eat","tea", "tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
// Example 2:
// Input: strs = [""]
// Output: [[""]]


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <string> wordArr = {"eat","tea", "tan","ate","nat","bat"};
    vector <string> dupArr;
    int size = wordArr.size();
    int i;
    string word;
    for(i=0;i<size;i++){
        // cout<<wordArr[i]<<" ";
        word = wordArr[i];
        sort(word.begin(), word.end());
        dupArr.push_back(word);
    }
    
    cout<<"original Array : "<<endl;
    for(i=0;i<size;i++){
        cout<<wordArr[i]<<" ";
    }
    cout<<endl<<endl;
    
    cout<<"Dup Array : "<<endl;
    for(i=0;i<size;i++){
        cout<<dupArr[i]<<" ";
    }
    
    

    return 0;
}









// solution

#include <bits/stdc++.h>
#include <string.h>
using namespace std;


class Word {
public:
	char* str; 
	int index; 
};

class DupArray {
public:
	Word* array; 
	int size; 
};

// Create a DupArray object that contains an array of Words
DupArray* createDupArray(char* str[], int size)
{
	// Allocate memory for dupArray and all members of it
	DupArray* dupArray = new DupArray();
	dupArray->size = size;
	dupArray->array
		= new Word[(dupArray->size * sizeof(Word))];

	// One by one copy words from the given wordArray to
	// dupArray
	int i;
	for (i = 0; i < size; ++i) {
		dupArray->array[i].index = i;
		dupArray->array[i].str
			= new char[(strlen(str[i]) + 1)];
		strcpy(dupArray->array[i].str, str[i]);
	}

	return dupArray;
}

// Compare two characters. Used in qsort() for
// sorting an array of characters (Word)
int compChar(const void* a, const void* b)
{
	return *(char*)a - *(char*)b;
}

// Compare two words. Used in qsort()
// for sorting an array of words
int compStr(const void* a, const void* b)
{
	Word* a1 = (Word*)a;
	Word* b1 = (Word*)b;
	return strcmp(a1->str, b1->str);
}

// Given a list of words in wordArr[],
void printAnagramsTogether(char* wordArr[], int size)
{
	// Step 1: Create a copy of all words present in given
	// wordArr. The copy will also have original indexes of
	// words
	DupArray* dupArray = createDupArray(wordArr, size);

	// Step 2: Iterate through all words in dupArray and
	// sort individual words.
	int i;
	for (i = 0; i < size; ++i)
		qsort(dupArray->array[i].str,
			strlen(dupArray->array[i].str), sizeof(char),
			compChar);

	// Step 3: Now sort the array of words in dupArray
	qsort(dupArray->array, size, sizeof(dupArray->array[0]),
		compStr);

	// Step 4: Now all words in dupArray are together, but
	// these words are changed. Use the index member of word
	// struct to get the corresponding original word
	for (i = 0; i < size; ++i)
		cout << wordArr[dupArray->array[i].index] << " ";
}

int main()
{
	char* wordArr[] = { "eat","tea", "tan","ate","nat","bat" };
	int size = sizeof(wordArr) / sizeof(wordArr[0]);
	printAnagramsTogether(wordArr, size);
	
	return 0;
}












