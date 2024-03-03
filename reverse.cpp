
# include <iostream>
using namespace std;
swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int reverse(char arr[],int i,int j){
    // base case
    if(i>=j){
        return 1;
    }
    // processing
     swap(arr[i],arr[j]);

    //  recursive relation
    return reverse(arr,i+1,j-1);
}
int main(){
 char arr[5]={};
 for(int i=0;i<5;i++){
    cin>>arr[i];
 }
 reverse(arr,0,4); 
 cout<<"Reverse name is:";
for(int i=0;i<5;i++){
    cout<<arr[i]<<"";
}
    return 0;
}