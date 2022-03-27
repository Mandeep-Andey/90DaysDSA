#include <bits/stdc++.h>

using namespace std;

// this program is a demo of sets in cpp
// sets are of two types
// ordered - we will have to add some more logic to transform the data into ordered form, this will increase the time complexity
// ordered sets are achieved in programming using "trees concept"

// unordered - good interms of time complexity
// unordered sets are achieved in programming using "HASHING"

int main(){
	
	unordered_set<int> s; // set cannot contain duplicate elements

	for(int i=10;i>=1;i--)
	{
		
		s.insert(i);
	}

	s.erase(9);
	if(s.find(9) == s.end()){
		cout << "not present"<< endl;
	}
	else
	{
		cout << "it's present"<< endl;
	}


	for(auto a:s)cout << a << " ";


	cout << "\n" << s.max_size();

	return 0;
}