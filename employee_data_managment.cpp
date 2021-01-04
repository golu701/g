#include<iostream>
#include<fstream>
using namespace std;

class Employee
{
    private:
        int eid;
        char name[30];
        double sal;
    public:
        void input()
        {
            cout<<"Enter Employee Id";
            cin>>eid;
            cout<<"Enter Employee Name ";
            cin>>name;
            cout<<"Enter Employee salary";
            cin>>sal;
        }
        int returnID()
        {
            return eid;
        }
        void display()
        {
            cout<<"Employee Id: "<<eid<<endl<<"Employee name: "<<name<<endl<<"Employee salary: "<<sal<<endl;
        }
};

int main()
{
    int choice = 1;
    Employee e;
    int ecode;
    int flag;
    ofstream O_file;
    O_file.open("employee.dat",ios::out|ios::binary|ios::app);
    while (choice==1)
    {
        e.input();
        O_file.write((char*)&e,sizeof(e));
        cout<<"\nWant to store another(1/0)?";
        cin>>choice;
    }
    
    O_file.close();
    ifstream I_file;
    I_file.open("employee.dat",ios::in|ios::binary);
    cout<<"Enter the Employee ID ";
    cin>>ecode;
    flag = 0;
    while (I_file.read((char*)&e,sizeof(e)))
    {
        if(ecode==e.returnID())
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        e.display();
    else
    
        cout<<"\nNo such Employee exist ";
    
    I_file.close();
    return 0;

}
