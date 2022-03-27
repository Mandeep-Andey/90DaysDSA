#include <bits/stdc++.h>

using namespace std;

int main(){

	std::vector<int> v= { 1,4,3,4,1,5,4,1,7,8,2,5,63,2,58,1,2,5,41,2,53,6,4} ;

	unordered_map<int, int> m;
	for(auto a:v)m[a]++; // counting the number of occurences of a number inside the vector a
		// and storing them in key, value pairs inside the unordered_map

	for(pair<int, int> a:m){
		cout << a.first << " " << a.second << endl;
	}

	cout << "size of map is :" << m.size() << endl;
	// cout << "capacity of map is : " << m.capacity(); 
	// the size and capacity of a map is same
	

	if(m.find(11)!=m.end()) // check if a number is present in the map or not
	{
		cout<< "present";
	}
	else
	{
		cout<< "not present";
	}
	cout<<endl<<endl;
	return 0;

}