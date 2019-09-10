//The goal of this program is to help a farmer dermine how many grapevines to plant.
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float V; // the number of grapevins that will fit in the row
	int R;//The length of the row in feet
	int E; //the amout of space in feet, used by the end-post assembly
	int S; //the space between vines, in feet.
//	V = (R - 2 * E) / S;
	cout << "Enter the lenght of the row in feet.\n";
	cin >> R;
	cout << "Enter the amount of space used by the end-post assembly\n";
	cin >> E;
	cout << "Enter the space between the vines, in feet.\n";
	cin >> S;
	V = (R - 2 * E) / S;
	cout << "The number of grapevines that will fit in a row is: " << V << endl;
	






	system("PAUSE");
	return 0;
}