#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    int i, n, number;
    string name;
    map<string, int> phoneBook;
    cin>>n;
    for(i=0; i<n; i++){
       cin>>name;
       cin>>number;
       phoneBook[name]=number;
    }

        while(cin>>name){
            if(phoneBook.find(name)!=phoneBook.end()){
                     cout<<name<<"=" <<phoneBook.find(name)->second<<endl;
            }

            else{

               cout<<"Not found"<<endl;
            }
        }

    return 0;
}
