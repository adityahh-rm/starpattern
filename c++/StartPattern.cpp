#include <iostream>
using namespace std;

int main ()
{
	cout << "1. SQUARE" << endl;
	for ( int i=0 ; i<5 ;i++ ) //row
	{
		for ( int x=0 ; x<5 ; x++ ) //column
		cout << "* ";
		cout << endl;
	}
	
	cout << endl;

	cout << "2. HALF LEFT TRIANGLE" << endl;
	for ( int i=0 ; i<5 ; i++ ) //row
	{
		for ( int x=0 ; x<i+1 ; x++ ) //column
		cout << "* ";
		cout << endl;
	}
	
	cout << endl << endl;
	
	cout << "3. HALF LEFT DOWN TRIANGLE" << endl;
	for (int i=0 ; i<5 ; i++ ) //row
	{
		for (int x=i ; x<5 ; x++) //column
		cout << "* ";
		cout << endl;
	}

	cout << endl << endl;
	
	cout << "4. TRIANGLE " << endl;
	for (int i=1 ; i<=5 ; i++) #row
	{
		for ( int x=i ; x<=5 ; x++) //column + spacing
		{	
			cout << " ";
		}
		for (int y=0 ; y<i ; y++) //column + stars
		{
			cout << "* ";
		}
		cout << endl;
	}
	
	cout << endl;
	
	cout << "5. TRAPEZIUM " << endl;
	for (int i=3 ; i<=5 ; i++) //row
	{		
		for (int x=i ; x<=5 ; x++) //column + spacing
		{
			cout << " ";
		}
		for (int y=0 ; y<=i ; y++) //column + stars
		{
			cout << "* ";
		}
		cout << endl;
	}
	
}
