#include<iostream>
using namespace std;
void inselectionSort(int* dizi,int n)
{
 int i, j, temp;
 for (i = 1; i < n; i++) {
 temp = dizi[i];
 j = i;
 while (j > 0 && dizi[j - 1] > temp) {
 dizi[j] = dizi[j - 1];
 j--;
 }
 dizi[j] = temp;
 }}
int* arraybirlestirme(int* a,int* b,int* c,int size ){
int* barray;
int* p[3];
p[0]=a;
p[1]=b;
p[2]=c;
int i=0;
int counter=0;
barray=new int[3*size];
for(i=0;i<3;i++){
	for(int j=0;j<size;j++)
	{
	barray[counter]=p[i][j];
	counter++;}
}
	inselectionSort(barray,(3*size));




return barray;


}
int main()
{int* p;
int a[]={1,3,5,7,9};
int b[]={2,4,6,8,10};
int c[]={14,13,15,11,12};
p =arraybirlestirme(a,b,c,5);	
	
	for(int i=0;i<15;i++)
	{cout<<p[i];
	}
	
}

