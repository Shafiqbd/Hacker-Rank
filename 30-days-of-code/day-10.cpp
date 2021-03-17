#include<iostream>
using namespace std;
int main(){
    int i, n;
    int max=0;
    int c=0;
    cin>>n;
    int a;
    for(i=0;n>0;i++){
        a=n%2;

        n=n/2;
        if(a==1){
            c++;
            if(c>max){
                max=c;
            }
        }
        else{

            c=0;
        }
    }
    cout<<max;
return 0;
}
