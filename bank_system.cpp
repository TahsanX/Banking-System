#include<iostream>
using namespace std;
class bank{
    private:
    string pass;
    static int id;
    int balance;
    public:
    string name;
    int age;
    int test = 1;

    void set_pass(){
        cin>>pass;
    };
    static int set_id(){
        id++;
        return id;
    };
    void set_balance(){
        cin>>balance;
    };
    void set_name(){
        cin>>name;
    };
    void set_age(){
        cin>>age;
    }


    static void get_id(){
        cout<<id<<endl;
    }
    void get_balance(){
        cout<<balance<<endl;
    }
    void get_name(){
        cout<<name<<endl;
    }
    void get_age(){
        cout<<age<<endl;
    }

    int update_balance(int a){
        balance = balance + a;
        return balance;
    };
    int deduct_balance(int a){
        balance = balance - a;
        return balance;
    }
    void compare1(bank obj1, bank obj2,int p){
        int batti = -1;
        for (int i = 0; i < obj1.pass.length(); i++)
        {
            if (obj1.pass[i]!=obj2.pass[i])
            {
                cout<<"Your password is incorrect"<<endl;
                batti = 0;
                test = 0;
                break;
            }
            
        }
        if (batti == -1)
        {   
            test = 1;
        }
    }
    void compare(bank obj1, bank obj2,int p){
        int batti = -1;
        for (int i = 0; i < obj1.pass.length(); i++)
        {
            if (obj1.pass[i]!=obj2.pass[i])
            {
                cout<<"Your password is incorrect"<<endl;
                batti = 0;
                test = 0;
                break;
            }
            
        }
        if (batti == -1)
        {   
            test = 1;
        }
    }
    void compare2(bank obj1, bank obj2){
        int batti = -1;
        for (int i = 0; i < obj1.pass.length(); i++)
        {
            if (obj1.pass[i]!=obj2.pass[i])
            {
                cout<<"Your password is incorrect"<<endl;
                batti = 0;
                test = 0;
                break;
            }
            
        }
        if (batti == -1)
        {   
            test = 1;
        }
    }
};
int bank :: id = 0;
 int main()
 {
    bank obj[10];
    int i = 0;
    int batti = 0;
    char c = 'q';
    while (batti==0 || c!='\0')
    {
    batti = 1;
    printf("*****Main Menu*****\n");
    printf("1. Open New Account\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Check Balance\n");
    printf("5. Exit\n");
    printf("Enter Your option(1-6): \n");
    int a;
    cin>>a;
    if (a==1)
    {
        cout<<"Enter name : "<<endl;
        obj[i].set_name();
        cout<<"Enter age : "<<endl;
        obj[i].set_age();
        cout<<"Enter balance : "<<endl;
        obj[i].set_balance();
        cout<<"Your account no is : ";
        bank::set_id();
        bank::get_id();
        cout<<"Enter password : "<<endl;
        obj[i].set_pass();
        i++;
    }
    if (a==2)
    {
        int temp_account, add_amount;
        bank temp;
        cout<<"Enter account no: "<<endl;
        cin>>temp_account;
        temp_account--;
        cout<<"Enter password : "<<endl;
        temp.set_pass();
        cout<<"Enter the amount you want to add"<<endl;
        cin>>add_amount;
        int check1 = 0;
        for (int l = i; 0 <= l; l--)
        {
            if (temp_account==l)
            {
                check1 = 1;
                obj[l].compare(obj[l],temp,add_amount);
                if (obj[l].test == 1)
                {
                    obj[l].update_balance(add_amount);
                    cout<<"Your balance is : \n";
                    obj[l].get_balance();
                }
                else
                {
                    
                }
                
                
            }
            
        }
        if (check1== 0)
        {
            cout<<"Wrong Id"<<endl;
        }
        
    }
    if(a==3){
        int temp_account, deduct_amount;
        bank temp;
        cout<<"Enter account no: "<<endl;
        cin>>temp_account;
        temp_account--;
        cout<<"Enter password : "<<endl;
        temp.set_pass();
        cout<<"Enter the amount you want to deduct"<<endl;
        cin>>deduct_amount;
        int check1 = 0;
        for (int l = i; 0 <= l; l--)
        {
            if (temp_account==l)
            {
                check1 = 1;
                obj[l].compare1(obj[l],temp,deduct_amount);
                if (obj[l].test == 1)
                {
                    obj[l].deduct_balance(deduct_amount);
                    cout<<"Your balance is : \n";
                    obj[l].get_balance();
                }
                else
                {
                    
                }
                
                
            }
            
        }
        if (check1== 0)
        {
            cout<<"Wrong Id"<<endl;
        }
    }
    if (a==4)
    {
        int temp_account;
        bank temp;
        cout<<"Enter account no: "<<endl;
        cin>>temp_account;
        temp_account--;
        cout<<"Enter password : "<<endl;
        temp.set_pass();
        int check1 = 0;
        for (int l = i; 0 <= l; l--)
        {
            if (temp_account==l)
            {
                check1 = 1;
                obj[l].compare2(obj[l],temp);
                if (obj[l].test == 1)
                {
                    cout<<"Your name : "<<endl;
                    obj[l].get_name();
                    cout<<"Your age : "<<endl;
                    obj[l].get_age();
                    cout<<"Your balance : "<<endl;
                    obj[l].get_balance();
                    cout<<"Your account no is : ";
                    cout<<++temp_account<<endl;
                }
                else
                {
                    
                }
            }
            
        }
        if (check1== 0)
        {
            cout<<"Wrong Id"<<endl;
        }
    }
    if (a==5)
    {
        break;
    }
    cout<<"Press any key : ";
    cin>>c;
    }
    }
    