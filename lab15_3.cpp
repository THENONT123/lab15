#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
T max_element( T x[]){
	for(int i = 0 ; i<sort(x)/x[0] ; i++){
		int max = x[0];
		if(x[i]>max){
			max = x[i];
		}
	}
	return max;
}

int main(){
	int a[] = {1,2,4,6,9}; 
	double b[] = {5.5,2.1,13,-7,6.9,0,25,11.1,-4};
	int pa,pb;
	
	pa = *max_element(a,a+5); 
	cout << "Address of the highest value in array A is " << (void *)&pa << "\n";
	cout << "The highest value in array A is "<< pa << "\n";
	
	pb = *max_element(b,b+9); 
	cout << "Address of the highest value in array B is " << (void *)&pb << "\n";
	cout << "The highest value in array B is "<< pb << "\n";

	return 0;
}

