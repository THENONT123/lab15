#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &a,int &b,int &c,int &d){
	int aungpao[] = {a,b,c,d};
	a = aungpao[rand()%4];
	b = aungpao[rand()%4];
	while(b == a){
		b = aungpao[rand()%4];
	}
	c = aungpao[rand()%4];
	while(c == a or c == b){
		c = aungpao[rand()%4];
	}
	d = aungpao[rand()%4];
	while(d == a or d == b or d == c){
		d = aungpao[rand()%4];
	}
}