#include<iostream>
#include<string.h>
using namespace std;
struct student{
    char name[20];
    int age;
};
int main(){

    struct student s1;
    //s1.name[20]="brijehs"; we can not do like this because it is contain the address of first and can not reach at every
  strcpy(s1.name,"Brijesh");
  cin>>s1.name;
   cin>>s1.age;
    cout<<s1.name<<s1.age<<endl;
}
