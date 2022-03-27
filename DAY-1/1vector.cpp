#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int> v;
	v.reserve(10); // we can set a value to the capacity of the vector
	for(int i=1;i<10;i++){
		v.push_back(i);

		cout << "size is " << v.size() << " capacity is " << v.capacity() << endl;
	}
	cout << endl;
	reverse(v.begin(), v.end()); // reverse the elements inside the vector
	for(int a:v){
		cout << a<< " ";
	}
	sort(v.begin(),v.end()); // sort the elements inside the vector in ascending order
	cout << endl;
	for(int a:v){
		cout << a << " ";

	}
	cout << "numbers are sorted"
;	cout << endl;
	cout << "\n";
	cout << "Now let us pop off the elements from the vecotr and see what happens to the capacity of the vector."<< endl;
	cout<<"\n";
	
	for(int i=1;i<10;i++){
		v.pop_back();
		cout << "size is " << v.size() << " capacity is " << v.capacity() << endl;

	}
	
	cout << v.empty();
	cout << v.back();
}