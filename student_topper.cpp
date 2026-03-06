#include <iostream>
#include <string>
using namespace std;
class student{
public:
string name;
long long id;
int mark1;
int mark2;
int mark3;
student ()
{
}
student(string n,long long i,int m1,int m2,int m3){
name=n;
id=i;
mark1=m1;
mark2=m2;
mark3=m3;
}

void set_name(string a){
name=a;
}
void set_id(long long b){
id=b;
}
void set_mark1(int c)
{
mark1=c;
}
void set_mark2(int d){
mark2=d;
}

void set_mark3(int e)
{
mark3=e;
}
double ave(){
double ave=(mark1+mark2+mark3)/3.0;
return ave;
}
void display ()
{
cout<<"Name is :"<<name<<endl;
cout<<"ID is : "<<id<<endl;
cout<<"average is : "<<ave()<<endl;

}

void input(){

cout<<"Enter Your name : ";
cin.ignore();
getline(cin>>ws,name);
cout<<"Enter your Id :";
cin>>id;
cout<<"Enter your mark1 & Makr2 & Mark3 :";
cin>>mark1>>mark2>>mark3;
set_name(name);
set_id(id);
set_mark1(mark1);
set_mark2(mark2);
set_mark3(mark3);
}

student toper(student a,student b){
if(a.ave() > b.ave()){
return a;
}
else{
return b;
}


}

student toper(student a[], int e)
{
    student top = a[0];

    for(int i = 1; i < e; i++)
    {
        if(a[i].ave() > top.ave())
            top = a[i];
    }

    return top;
}
};

int main(){

int n=8;
student s[n],to;


for(int i=0;i<n;i++){
s[i].input();
}
for(int i=0;i<8;i++)
{
s[i].display();
}

student s1,s2,top;
cout<<"Enter student 1 information: ";

s1.input();
cout<<"Enter student 2 information: ";
s2.input();

top=s1.toper(s1,s2);
cout<<"\nTopper information :\n";
top.display();

cout<<"\nThe highest marks of the student :\n";

to=s[0].toper(s,n);
to.display();
return 0;
}
    
