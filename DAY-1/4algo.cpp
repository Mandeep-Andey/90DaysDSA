#include <bits/stdc++.h>

using namespace std;

int main(){

	std::vector<int> v= { 1,4,3,4,1,5,4,1,7,8,2,5,63,2,58,1,2,5,41,2,53,6,4} ;
	// sort(v.begin(), v.end());

	cout << *lower_bound(v.begin(), v.end(), 9); // either gives the same number if present in the vector OR
	// returns the next highest number in the vecotr
	// here the output is 41, since 9 is not present and the next greatest number in the vector after 9 is 41
}