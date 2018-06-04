#include<iostream>
using namespace std;
void selectionSort(int* dizi,int n)
{
 int tepm;
 int minIndex;
 for(int i=0; i<n-1; i++)
 {
 minIndex=i;
 for(int j=i; j<n; j++)
 {
 if (dizi[j] < dizi[minIndex]) 
 minIndex=j;
 }
 tepm=dizi[i];
 dizi[i]=dizi[minIndex];
 dizi[minIndex]=tepm;}
 }
int main()
{int a;
int* p;
	cout<<"Enter the size of array";
	cin>>a;
	p=new int[a];
	for(int i=0;i<a;i++)
cin>>p[i];	
	selectionSort(p,a);
	
	for(int i=0;i<a;i++)
	cout<<p[i];
	delete [] p; 
}
