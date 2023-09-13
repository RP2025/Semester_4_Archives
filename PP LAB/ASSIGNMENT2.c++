#include <iostream>
#include <string>
using namespace std;

void readstudentdata(struct student arr[],int n);
void printstudentdata(struct student arr[],int n);

struct student
{
    string name;
    int age;
    string department;
    int year;
};

void readstudentdata(struct student arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<endl<<"Enter details of student no."<<i+1<<":";
        cout<<endl<<"Enter student name: ";
        cin>>arr[i].name;
        cout<<endl<<"Enter age of student: ";
        cin>>arr[i].age;
        cout<<endl<<"Enter strudent department: ";
        cin>>arr[i].department;
        cout<<endl<<"Enter student year: ";
        cin>>arr[i].year;
    }
}

void printstudentdata(struct student arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<endl<<"Student "<<i+1<<":";
        cout<<endl<<"Student name:"<<arr[i].name;
        cout<<endl<<"Student age:"<<arr[i].age;
        cout<<endl<<"Student department:"<<arr[i].department;
        cout<<endl<<"Student year: "<<arr[i].year<<endl;
    }
}

int main()
{
    int n;
    cout<<endl<<"Enter total no.of students: ";
    cin>>n;
    struct student arr[n];
    readstudentdata(arr,n);
    cout<<endl<<"Details of student are: ";
    printstudentdata(arr,n);
}