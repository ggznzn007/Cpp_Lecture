#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cin >> a >>b;
	if (a % 2)
	{
		cout << "�汝�+";
		
	}
	else
		cout << "礎熱+";
	if (b % 2)
	{
		cout << "�汝�=";

	}
	else
		cout << "礎熱=";
	if ((a+b) % 2)
	{
		cout << "�汝�";

	}
	else
		cout << "礎熱";
		
}