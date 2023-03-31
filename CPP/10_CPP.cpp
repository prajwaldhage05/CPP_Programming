#include <iostream>
#include <string>
using namespace std;
class Empstate{
    public:
    int id,deptId;
    string name;
    double basicSalary;

    public:
    Empstate():id(0),name(" "),deptId(0),basicSalary(0){ 

    }
    Empstate(int id,string name,int deptId,double basicSalary):id(id),name(name),deptId(deptId),basicSalary(basicSalary){

    }

    double computeNetsalary(){
        return 0;
    }
};

class Mgrstate: public Empstate{
    public:
    double perfBonus;

    public:
    Mgrstate():perfBonus(0){

    }
    Mgrstate(int id,string name,int deptId,double basicSalary,int perfBonus):Empstate(id,name,deptId,basicSalary),perfBonus(perfBonus){

    }

    void getdata();
    void putdata();

    double computeNetsalary(){
        Empstate::computeNetsalary();
        double Netsalary;
        return Netsalary = basicSalary + perfBonus;
    }
};

class Workerstate: public Empstate{
    public:
    int hoursWorked;
    double hourlyRate;

    public:
    Workerstate():hoursWorked(0),hourlyRate(0){

    }
    Workerstate(int id,string name,int deptId,double basicSalary,int hoursWorked,double hourlyRate):Empstate(id,name,deptId,basicSalary),hoursWorked(hoursWorked),hourlyRate(hourlyRate){

    }
    
    void getdata();
    void putdata();

    double computeNetsalary(){
        Empstate::computeNetsalary();
        double Netsalary;
        return Netsalary = basicSalary + (hoursWorked*hourlyRate);
    }

    double gethourlyRate(){
        return hourlyRate;
    }

};

void Mgrstate::getdata(){
    cout<<"id= ";
    cin>>id;
    cout<<"name= ";
    cin>>name;
    cout<<"deptId= ";
    cin>>deptId;
    cout<<"basic salary= ";
    cin>>basicSalary;
    cout<<"bonus= ";
    cin>>perfBonus;
}
void Mgrstate::putdata(){
  cout<<id<<" ";
  cout<<name<<" ";
  cout<<deptId<<" ";
  cout<<basicSalary<<" ";
  cout<<perfBonus<<" ";
  cout<<computeNetsalary()<<" ";
  cout << endl;
}

void Workerstate::getdata(){
    cout<<"id= ";
    cin>>id;
    cout<<"name= ";
    cin>>name;
    cout<<"deptId= ";
    cin>>deptId;
    cout<<"basic salary= ";
    cin>>basicSalary;
    cout<<"working hours= ";
    cin>>hoursWorked;
    cout<<"hourly rate= ";
    cin>>hourlyRate;   
}
void Workerstate::putdata(){
  cout<<id<<" ";
  cout<<name<<" ";
  cout<<deptId<<" ";
  cout<<basicSalary<<" ";
  cout<<hoursWorked<<" ";
  cout<<hourlyRate<<" ";
  cout<<computeNetsalary()<<" ";
  cout << endl;
}

int main(){
    Mgrstate m(5,"ramu",415,5000,500);
    cout<<"Net Salary = "<<m.computeNetsalary()<<endl;
    Workerstate w(10,"ragav",786,800,8,50);
    cout<<"Net Salary = "<<w.computeNetsalary()<<endl;
    cout<<"Hourly Rate = "<<w.gethourlyRate()<<endl;

    //1. Hire Manager
    Mgrstate m1[30];
    int n,i;
    cout<<"Enter Number of Mangers- ";
    cin>>n;

    for(i=0; i<n; i++)
        m1[i].getdata();

    cout<<"All Manager details-> "<< endl;

    for(i=0; i<n; i++)
        m1[i].putdata();

    //2.Hire Worker
    Workerstate w1[30];
    int n1,j;
    cout<<"Enter Number of Workers- ";
    cin>>n1;

    for(j=0; j<n1; j++)
        w1[j].getdata();

    cout<<"All Worker details-> "<<endl;

    for(j=0; j<n1; i++)
        w1[j].putdata();
   
    return 0;
}