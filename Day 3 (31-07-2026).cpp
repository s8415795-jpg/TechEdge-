#include<iostream>
using namespace std;

// 1   unit digit 

/*
int main()
{
	int n;
	cin>>n;
	cout<<"unit digit ="<< n% 10;
	return 0;
}*/


// 2   without unit digit 


/*
int main()
{
	int n;
	cin>>n;
	cout<<" without unit digit ="<< n/ 10;
	return 0;
}*/


// 3  swap 2 integer
/*

int main()
{
	int a, b, temp;
	cin>>a>>b;
	temp=a;
	a= b;
	b= temp;
	cout<<" swap ="<< a << " "<<  b;
	return 0;
}
*/

// 4  swap without third variable

/*
int main()
{
	int a, b;
	cin>>a>>b;
	a=a+b;
	b= a-b;
	a= a-b;
	
	
	
	cout<<" swap ="<< a << " "<<  b;
	return 0;
}
*/

// 5 sum of 3 digit 

/*
int main()
{
	int n, sum;
	cin>>n;
	sum =(n/100)+(n/
	10)%10 +(n%10);
	cout<<" sum = "<< sum;
	return 0;
}
*/

// 6 ASCII code

/*
int main(){
	char ch;
	cin>> ch;
	cout<< "asci"<< (int)ch;
	return 0;
}*/


//7   even odd using bitwise operator

/*
int main(){
	int n;
	cin >> n;
	if (n&1){
		cout<< "odd";}
	else {
	cout<< "even";	
	}
	return 0;
}
*/


//8 size of int , float ,char and dubble 

/*
int main()
{
	cout << "size of int " << sizeof(int) <<"bytes\n";
	cout << "size of float =" << sizeof(float )<<"bytes \n";
	cout << "size of char =" << sizeof(char )<<"bytes \n";
	cout << "size of double =" << sizeof(double )<<"bytes \n";
	return 0;
	}	 
*/
	 
// 9 make the last digit of a number zero


/*

int main()
{
	int x;
	cin>> x;
	x=(x/10)*10;
	cout <<x;
	return 0;	
}
*/


//10  append the digit in number


/* 

int main (){
	int number , digit ;
	cin >> number>> digit;
	number =number*10 +digit;
	cout << number;
	return 0;
}
*/


// 11 usd to rupeee


/*

int main()
{
	double inr , usd;
	cout << "enter inr";
	cin >>inr;	
	usd = inr /94.13;
	cout<< "amount in usd ="<<usd;	
	return 0;	
}
*/
