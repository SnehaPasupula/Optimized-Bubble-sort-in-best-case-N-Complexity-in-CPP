#include<iostream>
using namespace std;
void Bubble_Sort(int n,int a[])
{
     bool swapped; //to know whether inner loops does atleast one swap or not
        for(int i=0;i<n-1;i++)
    {
          swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
             
            if(a[j]>a[j+1])
            {
               //Swapping
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=true;
            }
        }
        if(swapped==false) //if no swap occured in innerloop then stop the loop because array will be already sorted
        {
             break;
        }
    }
}
int main()
{
    int n;  //number of elements in an array
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Bubble_Sort(n,a);
    //printing the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}