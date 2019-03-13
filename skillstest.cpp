#include <iostream>
#include <conio.h>
using namespace std;
int main()
	

{
	
	double sal, hr; 
	

	
	cout << "Type your payrate per hour and press enter"<<endl;
	cin >>sal;
	cout << "Type the total number of hours you worked and press enter"<<endl;
	cin >>hr;
	
	cout << " Income before taxes: "<<"$"<< sal * hr << "      "<< "Income after taxes: " <<"$"<< sal*hr-sal*hr*0.14  <<endl;
	double salT = sal*hr-sal*hr*0.14;
	cout << " The money you spend on clothes and accesories: "<<"$"<<(sal*hr-sal*hr*0.14)*0.10<<endl;
	cout << " The money you spend on school supplies: "<<"$"<<(sal*hr-sal*hr*0.14)*0.01<<endl;
	double salaclot = (sal*hr-sal*hr*0.14)*0.01, salaacc = (sal*hr-sal*hr*0.14)*0.10;
	cout << " The money you spend on savings bonds: "<<"$"<< (-salaclot - salaacc + salT ) * 0.25 <<endl;
	double salasav =(-salaclot - salaacc + salT ) * 0.25;
	cout << " The money your parents spend to buy additional savings bonds for you: "<<"$"<< salasav / 2 <<endl;
	
	_getch();
	return 0;
}