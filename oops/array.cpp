#include<iostream>

using namespace std;

void getArray( int ArrayName[] , int sizeOfArray);

int main()
{
	int Hellking[3] = {2,56,676};
	getArray( Hellking , 3);
}

void getArray( int ArrayName[] , int sizeOfArray)
{
for( int i=0 ; i < sizeOfArray ; i++) 
	{
   cout << ArrayName[i] << end1;
	}

}