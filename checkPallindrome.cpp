

# include <iostream>
using namespace std;

int pallindrome(char name[],int i,int j){
    // base case
    if(i>=j){
        return 1;
    } 
    // processing
     if(name[i]==name[j]){
        i++;
        j--;
        
     }
     else{
        return 0;
     }
    //  recursive relation
    return pallindrome(name,i+1,j-1);
} 
int main(){
    int n;
    cin>>n;
char name[n]={};
 
 for(int i=0;i<n;i++){
 cin>>name[i]; 
 } 
pallindrome(name,0,n-1); 
int ans=pallindrome(name,0,n-1);
if(ans){
    cout<<"Yes it is a Pallindrome";
}
else{
    cout<<"Not a pallindrome";
}
    return 0;
}