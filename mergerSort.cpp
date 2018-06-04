 #include<iostream>
 #include<string>
using namespace std;

 void merge(int* a, int*  aux, int lo, int mid, int hi)
{
 for (int k = lo; k <= hi; k++)
 aux[k] = a[k];
 //copy
 int i = lo, j = mid+1;
 for (int k = lo; k <= hi; k++)
 {
 if (i > mid) 
 a[k] = aux[j++];
 else if (j > hi) 
 a[k] = aux[i++];
 else if (aux[j]< aux[i])
  a[k] = aux[j++];
 else a[k] = aux[i++];
// merge
 }
} 
 void sort(int* a, int* aux, int lo, int hi)
 {
 if (hi <= lo)
 {return;
 }
 int mid = lo + (hi - lo) / 2;
 sort(a, aux, lo, mid);
 sort(a, aux, mid+1, hi);
 merge(a, aux, lo, mid, hi);
 }

 int main()
{
int a[] = {24, 8, 12, -99, 87, -6, 0, 587, -56, 44225};
 int b[10];
sort(a,b,0,10);
for(int i=0;i<10;i++)
cout<<a[i]
<<"\n";

return 0;
}

