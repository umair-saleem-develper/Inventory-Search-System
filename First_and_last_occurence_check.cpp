#include<iostream>
using namespace std;
void findtargat(int ar[],int size,int tar){
// now first find first occurence in array
int first_occurance=-1;
int start=0;
int last=size-1;
while(start<=last){
    int mid=start+(last-start)/2;
    if(ar[mid]==tar){
        first_occurance=mid;
        last=mid-1;
    }
    else if(ar[mid]<tar){
        start=mid+1;
    }
    else 
    last=mid-1;
}
 start=0;
 last=size-1;
 int last_occurance=-1;
 while(start<=last){
    int mid=start+(last-start)/2;
    if(ar[mid]==tar){
        last_occurance=mid;
        start=mid+1;
    }
    else if(ar[mid]>tar){
        last=mid-1;
    }
    else 
    start=mid+1;
}
if(first_occurance!=-1){
cout<<"The first  target index is :"<<first_occurance<<endl;
cout<<"The last target index  is :"<<last_occurance<<endl;
}
else
cout<<"They have no targat found :";
}
int main(){
    int n=9;//for size 
    int arr[n]={1,2,2,3,3,3,3,3,9};
    int targat=3;
    findtargat(arr,n,targat);
    return 0;
}