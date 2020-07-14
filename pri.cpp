#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int tab[1001];
    for(int i=2;i<=1000;i++){
        tab[i]=2;
    }
    bool eh=false;
  
    for(int i=2;i<x;i++){
        for(int j=2;j<x;j++){
            int aux = i*j;
            if(aux<=x){
            tab[aux]++;
            }
        }

    }
    if(tab[x]==3){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }
   
  //  for(int i=2;i<=x;i++){
   //     cout<<tab[i]<<" ";
       
  //  }
    




    return 0;
}