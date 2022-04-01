#include<iostream>
using namespace std;

#define PERSONS_LIMIT 50

int countPersons=0;

class Persons
{
    public:
    int Id;
    char Name[20];
    int Age;
    char Dob[20];
    char Position[30];
    char Gender;
};

Persons obj[PERSONS_LIMIT];

void input()
{
    if(countPersons<PERSONS_LIMIT)
    {
        cout<<"\n Enter id(number):";
        cin>>obj[countPersons].Id;
        cout<<"\n Enter Name(20 characters):";
        cin>>obj[countPersons].Name;
        cout<<"\n Enter Age(number):";
        cin>>obj[countPersons].Age;
        cout<<"\n Enter DOB(dd-mm-yy):";
        cin>>obj[countPersons].Dob;
        cout<<"\n Enter Position:";
        cin>>obj[countPersons].Position;
        cout<<"\n Enter Gender(M/F):";
        cin>>obj[countPersons].Gender;
        countPersons++;
    }
    else
    {
        cout<<"\n Error : Limit is only"<<PERSONS_LIMIT;
    }
}

void printAll()
{
    cout<<"\n***** ****** Printing All Records ***** ******";
    cout<<"\n Total number of persons:"<<countPersons<<endl;
    for(int i=0;i<countPersons;i++)
    {
        cout<<"\n Id :"<<obj[i].Id;
        cout<<"\n Name :"<<obj[i].Name;
        cout<<"\n Age :"<<obj[i].Age;
        cout<<"\n DOB :"<<obj[i].Dob;
        cout<<"\n Position :"<<obj[i].Position;
        cout<<"\n Gender :"<<obj[i].Gender;

    }
}

void printbyAge()
{
    cout<<"\n***** ***** Printing all Record by Age ****** *******:";
    int count50plus=0;
    int count40plus=0;
    int lessthen40=0;

    for(int i=0;i<countPersons;i++)
    {
        if(obj[i].Age>50)
        count50plus++;
        else if(obj[i].Age>40)
        count40plus++;
        else
        lessthen40++;
    }
    cout<<"\n Persons more than 50 :"<<count50plus;
    cout<<"\n Persons more than 40 :"<<count40plus;
    cout<<"\n Persons less than 40 :"<<lessthen40;
}

void printSexCount()
{
    cout<<"\n ***** ***** Printing all Records by Sex count:";

    int malecount;
    int femalecount;

    for(int i=0;i<countPersons;i++)
    {
        if(obj[i].Gender=='M')
        malecount++;
        else
        femalecount++;
    }
    cout<<"\n Number of Male :"<<malecount;
    cout<<"\n Number of Female:"<<femalecount;
}

int main()
{
    int choice=-1;
    int passcode=987980;

    while(choice!=0)
    {
        cout<<"\n Enter your pass code:";
        cin>>passcode;
        if(passcode==987980){
        cout<<"\n\n ========== Program Menu =========:";
        cout<<"\n 1 Input Records";
        cout<<"\n 2 Print all Records";
        cout<<"\n 3 Print by Age";
        cout<<"\n 4 Print by sex count";
        cout<<"\n 0 exit";

        cout<<"\n Enter your choice :";
        cin>>choice;

        switch(choice)
        {
           case 1:
           input();
           break;
           case 2:
           printAll();
           break;
           case 3:
           printbyAge();
           break;
           case 4:
           printSexCount();
           break;
           case 0:
           cout<<"\n thanxx you for using software !!";
           break;
           default:
           cout<<"\n Error: Invalid Selection:";

        }
      }
      else
      {
          cout<<"\n Wrong pass words:";
      }
    }
    return 0;
}
