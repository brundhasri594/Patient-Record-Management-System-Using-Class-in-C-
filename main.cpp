#include <iostream>
#include <string>
using namespace std;
class patient
{
private:
    int patientID,age;
    string name,phone,disease;
public:
    void addpatient(int id,string n,int a,string p,string d)
    {
        patientID=id;
        name=n;
        age=a;
        phone=p;
        disease=d;
    }
    void display()
    {
        cout<<"patient ID:"<<patientID << endl;
        cout<<"Name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"phone:"<<phone <<endl;
        cout<<"disease:"<<disease<<endl;
    }
};
int main()
{
    patient p1;
    p1.addpatient(1,"raja",25,"9600523869","fever");
    p1.display();
    return 0;
}

