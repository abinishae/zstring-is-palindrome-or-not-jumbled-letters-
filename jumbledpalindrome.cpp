#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "ajerdiajan";
    int h=0;
    for( int i= 0;i<str.size(); i++){
        int a=0;
        for( int j= 0;j<str.size(); j++){
         if(str[i] == str[j] && i!=j){
           a++;
           }
           if(j+1 == str.size() && !a%2){
           h++;
              // cout<<str[i];
           }
        }
         /*if(a%2 == 0)
         continue;
         else 
         h++;*/
       
    }//cout<<h;
    if(h ==1 || h==0 ){
        cout<<"yes";
        
    }
    else 
    cout<<"no";
}
