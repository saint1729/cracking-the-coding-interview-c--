//Anagram needs to be a word in the dictionary hence the follwing code needs to be changed 

//there are 2 ways to solve the problem 
//1 sort the strings and compare them or calculate the count of each character and compare those counts 
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

bool isanagram(string str1, string str2)
{
	if (str1.empty()||str2.empty()){ 
		cout<<"one of the string or both the strings is empty";
		return false;
	}
	sort(str1.begin(),str1.end());	
	sort(str2.begin(),str2.end());	
	if ( str1 == str2 ) return true;
	else return false; 
}

int main()
{
	bool sln = isanagram("cat", "actr");
	if(sln) cout<<"is an anagram\n"; else cout<<"isn't an anagram\n";
	/*isanagram("", "hello");
	isanagram("", "");*/
	return 0;
}
