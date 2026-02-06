#include <iostream>
//sortowanie bombelkowe 
using namespace std;

int main()
{
    int n=1,tab[n], i;
    cout<<"Ile liczb chcesz zmiescic w tablicy?: ";
    cin>>n;
    cout<<"Wprowadz po enter kolejne liczby: ";
    for(i=0;i<n;i++)
    {
        cin>>tab[i];
    }
    for(int i=0;i<n;i++)
    {
		for(int j=1;j<n-i;j++)
        {
            if(tab[j-1]>tab[j])
                swap(tab[j-1], tab[j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<" "<<tab[i];
    }
    return 0;
}
