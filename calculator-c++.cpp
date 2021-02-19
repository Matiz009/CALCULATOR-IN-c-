#include<iostream>
using namespace std;

void add();
void subtract();
void product();
void division();

int main(){
	int dec;
	cout<<"\tPress 1 to add\n \tPress 2 to subtract\n\tPress 3 to multiply\n\t Press 4 to divide\n\t";
	cin>>dec;
	switch(dec){
		case 1:
			   add();
			   break;
		case 2:
		    subtract();
			break;
		case 3:
			 product();
			 break;
		case 4:
			 division();
			 break;
		default:
			    cout<<"INVALID INPUT";
			 
		
	}
}

void add(){
	int a,b,c;
	 cout<<"Enter first number\n";
	 cin>>a;
	 cout<<"Enter second number\n";
	 cin>>b;
	  c=a+b;
	 cout<<"Sum of numbers is ";
	 cout<<c;

}
void subtract(){
	int a,b,c;
	 cout<<"Enter first number\n";
	 cin>>a;
	 cout<<"Enter second number\n";
	 cin>>b; 
	  c=a-b;
	 cout<<"Subtraction of numbers is ";
	  cout<<c;
}

void product(){
	int a,b,c;
	cout<<"Enter first number\n";
	cin>>a;
	cout<<"Enter second number\n";
	cin>>b;
    c=a*b;
	cout<<"Product of numbers is ";
	cout<<c;
}

void division(){
	int a,b,c;
	 cout<<"Enter first number\n";
	 cin>>a;
	 cout<<"Enter second number\n";
	 cin>>b;
	 if(b==0){
	 	cout<<"Math error";
	 }else{
	 c=a/b;
	 cout<<"Division of numbers is ";
	 cout<<c;	
	 }
	}

