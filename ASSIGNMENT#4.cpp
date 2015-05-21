//
// OKA GODSWILL IFERI

// DEPT: MATHEMATICS
// PDS/2013/2257

//ASSIGNMENT#4

//Assignment.cpp
//Define an integer with spacing

#include <iostream>
using namespace std;

int main ()
{
	int fivedigits;
	int i,j,k,l,m;
	cout<< " Enter the five digits integer: ";
	cin>> fivedigits;
	if (fivedigits<10000)
	{
	cout<< " incorrect digits! Try again! ";
	}
	if (fivedigits>99999)
	{
	cout<< " correct digits! ";
	}
	
	i=(fivedigits/10000);
	j=(fivedigits/1000)%10;
	k= (fivedigits/100)%10;
	l=(fivedigits/10)%10;
	m= fivedigits%10;
	
	cout<<i;
	cout<<"   "<<j;
	cout<<"   "<<k;
	cout<<"   "<<l;
	cout<<"   "<<m;
	return 0;
}
	
	

