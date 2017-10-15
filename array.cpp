#include<iostream>
#include<stdlib.h>
using namespace std;
class array{
	int n;
	int *a;
	public :
		void nhap();
		void xuat();
		int sosanh(array b);
		array tong(array b);
};
void array::nhap(){
	cout<<"Nhap so luong phan tu mang: ";
	cin>>n;
	a = new int [n];
	for(int i=0;i<n;i++){
		cout<<"Nhap phan tu thu "<<i<<":";
		cin>>a[i];
	}
	cout<<endl;
}
void array::xuat(){
	cout<<"Phan tu cua mang la: "<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int array::sosanh(array b){
	if(n!=b.n)
		return 0;
	for(int i=0;i<n;i++)
		if(a[i]!=b.a[i])
			return -1;
	return 1;
}
array array::tong(array b){
	array c;
	if(n!=b.n)
		exit(0);
	for(int i=0;i<n;i++)
		c.a[i]=a[i]+b.a[i];
	return c;
}
int main(){
	array a,b,c;
	a.nhap();
	b.nhap();
	a.xuat();
	b.xuat();
	if(a.sosanh(b)==0)
		cout<<"2 mang co kich thuoc khac nhau";
	if(a.sosanh(b)==-1)
		cout<<"2 mang khac nhau";
	if(a.sosanh(b)==1)
		cout<<"2 mang bang nhau";
	cout<<endl;
	cout<<"Tong 2 mang la: ";
	c=a.tong(b);
	c.xuat();
	return 0;
}
