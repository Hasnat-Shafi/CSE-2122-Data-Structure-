#include<bits/stdc++.h>
using namespace std;
//Traversing: carry out the following operations on an Array  
//a)	Maximum Value b) Minimum Value c) Average Value d) Total Value e) Sin Value

int max(int a[]){
     int max=0;
     int size=sizeof(a);
     for(int i=0;i<size;i++){
          if(max<a[i]){
               max=a[i];
          }
     }
     cout<<"Maximum is :" <<max<<endl;

}
int min(int a[]){
     int min=a[0];
     int size=sizeof(a);
     for(int i=1;i<size;i++){
          if(min>a[i]){
               a[i]=min;
          }
     }
     cout<<"minimum value : "<<min<<endl;; 

}
int total(int a[]){
     int sum=0;
     for(int i=0;i<sizeof(a);i++){
          sum+=a[i];
     }
     cout<<"Total : "<<sum<<endl;


}
double avg(int a[]){
    int sum=0;
     for(int i=0;i<sizeof(a);i++){
          sum+=a[i];
     }
     double avg= sum/sizeof(a);

printf("avg : %0.4f\n",avg);
}
int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     max(arr);
     min(arr);
     total(arr);
     avg(arr);
}