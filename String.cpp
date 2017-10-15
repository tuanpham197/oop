#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class String{
	int n;
	char *s;
	public :
		void create();
		void view();
		char character(int i);
		String stringcat(String a);
};
void String::create(){
	cout<<"Nhap chieu dai chuoi: ";
	cin>>n;
	s = new char [n];
	cout<<"Nhap chuoi: ";
	cin.getline(s,n);
	cin.ignore();
	cout<<endl;
}
void String::view(){
	cout<<"Chuoi la : "<<s<<endl;
}
char String::character(int i){
	return s[i];
}
String String::stringcat(String a){
	String b;
	b.s = new char [2*n];
	strcpy(b.s,s);
	strcat(b.s,a.s);
	return b;
}
int main(){
	String a,b,c;
	a.create();
	cin.ignore();
	b.create();
	a.view();
	b.view();
	cout<<endl;
	c=a.stringcat(b);
	c.view();
	return 0;
	
}
