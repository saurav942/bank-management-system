#include<bits/stdc++.h>
#include <iostream>
using namespace std;

struct Home{
	int d_num;
	string street;
	string locality;
	string area;
	string landmark;
	string taluk;
	string dist;
	string state;
	int pincode;
};



bool isChar(char c)
{
    return ((c >= 'a' && c <= 'z')
            || (c >= 'A' && c <= 'Z'));
}
  

bool isDigit(const char c)
{
    return (c >= '0' && c <= '9');
}
  

bool is_valid(string email)
{
    if (!isChar(email[0])) {
        return 0;
    }
    int At = -1, Dot = -1;

    for (int i = 0;i < email.length(); i++) {
  
        if (email[i] == '@') {
  
            At = i;
        }
        else if (email[i] == '.') {
  
            Dot = i;
        }
    }
  
    if (At == -1 || Dot == -1)
        return 0;
  

    if (At > Dot)
        return 0;
  
    return !(Dot >= (email.length() - 1));
}
  

bool phone_valid(long long num){
	 if(num >999999999 && num < 10000000000000){
		 return true;
	 }
	 return false;
	}

bool ac_valid(long long num){
	 if(num >999999999999 && num < 10000000000000){
		 return true;
	 }
	 return false;
	}


bool password_valid(string input) {
   int n = input.length();
   bool hasLower = false, hasUpper = false;
   bool specialChar = false;
   string normalChars = "abcdefghijklmnopqrstu" "vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
   for (int i = 0; i < n; i++) {
      if (islower(input[i]))
         hasLower = true;
      if (isupper(input[i]))
         hasUpper = true;
      size_t special = input.find_first_not_of(normalChars);
      if (special != string::npos)
         specialChar = true;
   }

   if (hasLower && hasUpper&&specialChar && (n >= 8))
      {
		  return true;
	  }
   return false;
}


bool name_valid(string input){
	  int n = input.length();
	  bool specialChar = false;
	  string normalChars = "abcdefghijklmnopqrstu" "vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
	   
	  for (int i = 0; i < n; i++) {
      size_t special = input.find_first_not_of(normalChars);
      if (special != string::npos)
         specialChar = true;
      }
	  if(specialChar == true){
		  return false;
	  }
	  return true; 
	}

class BankAccount{
	public:
			 void open_account(){
			  cout<<"Enter first name: "<<endl;
			  cin>>f_name;
			  cin.get();
			  cout<<"Enter last name: "<<endl;
			  cin>>l_name;
			  cin.get();
			  cout<<"Enter phone number: "<<endl;
			  cin>>ph_no;
			  cin.get();
			  cout<<"Enter door number(int): "<<endl;
			  cin.get();
			  cin>>address.d_num;
			  cin.get();
			  cout<<"Enter Street: "<<endl;
			  getline(cin,address.street);
			  cout<<"Enter locality: "<<endl;
			  getline(cin,address.locality);
			  cout<<"Enter Area: "<<endl;
			  getline(cin,address.area);
			  cout<<"Enter landmark: "<<endl;
			  getline(cin,address.landmark);
			  cout<<"Enter taluk: "<<endl;
			  getline(cin,address.taluk);
			  cout<<"Enter district: "<<endl;
			  getline(cin,address.dist);
			  cout<<"Enter state: "<<endl;
			  getline(cin,address.state);
			  cout<<"Enter pincode "<<endl;
			  cin>>address.pincode;
			  cin.get();
			  cout<<"Enter email(abc@some.com): "<<endl;
			  getline(cin,email);
			  cout<<"Enter password(At least 1 uppercse, 1 lowercase,1 special character,length 8): "<<endl;
			  cin>>password;
			  cout<<"Enter Account Number: "<<endl;
			  cin>>ac;
			  cin.get();
			  cout<<"Enter branch: "<<endl;
			  getline(cin,branch);
			  cout<<"Enter IFSC code: "<<endl;
			  cin>>ifsc_code;
			  cout<<"Enter minimum balance: "<<endl;
			  cin>>min_bal;
			  cout<<"Enter date(DD/MM/YYYY): "<<endl;
			  cin>>c_d;
		  }
		  void set_mbal(int n){
			  min_bal = n;
			  }
		  void get_name(){
			  cout<<f_name<<endl;
			  cout<<l_name<<endl; 
		  }
		  void get_phno(){
			  cout<<ph_no<<endl;
			  }
		  void get_address(){
			  cout<<address.d_num<<""<<address.street<<endl;
			  cout<<address.locality<<" "<<address.area<<endl;
			  cout<<address.landmark<<endl;
			  cout<<address.taluk<<" "<<address.dist<<endl;
			  cout<<address.state<<endl;
			  cout<<address.pincode<<endl;
			  }
		  void get_email(){
			  cout<<email<<endl;
			  }
		 void get_acc(){
		     cout<<ac<<endl;
		 }
		  void get_branch(){
			  cout<<branch<<endl;
			  }
		  void get_ifsc(){
			  cout<<ifsc_code<<endl;
			  }
		  void set_ccd(bool ip1){
			  ccd = ip1;
		  }
		  void set_dcd(bool ip1){
			  dcd = ip1;
		  }
		  void get_ccd(){
			  cout<<boolalpha<<ccd<<endl;
			  }
		  void get_dcd(){
			  cout<<boolalpha<<dcd<<endl;
			  }
		  float get_bal(){
			  return bal;
			  }
		  void set_bal(int mx){
			      int gg;
			      gg = bal - mx;
			      if(gg >= 0){
					  bal = gg;
				 }
			  }
		  void get_date(){
		      cout<<c_d<<endl;
		  }
		  int get_minbal(){
		      return min_bal;
		  }
		  bool Register(){
			  bool e1 = is_valid(email);
			  bool e2 = password_valid(password);
			  bool e3 = ac_valid(ac);
			  bool e4 = phone_valid(ph_no);
			  bool e5 = name_valid(f_name);
			  bool e6 = name_valid(l_name);
			  if(e1 && e2 && e3 && e4 && e5 && e6){
				  return true;
				  }
			  return false;
			  }
          string deposit_money();
	private:
	    string f_name;
	    string l_name;
	    string c_d;
	    long long ph_no;
	    Home address;
	    string email;
	    string password;
	    int min_bal;
	    long long ac;
	    string branch;
	    string ifsc_code;
	    bool ccd = false;
	    bool dcd = false;
	    float bal = 0;
	    float credit = 0;
};


string BankAccount::deposit_money()
{
    float Amount;
    cout << "Enter how much money you want to deposit: "<< endl;
    cin>>Amount;
    bal += Amount;
    string date;
    string acc;
    cout<<"Enter Account Number: "<<endl;
    cin>>acc;
    cout<<"Enter date(Format-DD/MM/YYYY)"<<endl;
    cin>>date;
    string tim;
    cout<<"Enter time(Format-HH:MM)"<<endl;
    cin>>tim;
    cout<<"Balance: "<<bal<<endl;
    string s = "";
    for(int i = 0; i < 4;i++){
		 s+= acc[i];
		}
	string p ="";
	for(int l = 0; l < date.length();l++){
		if(date[l] != '/'){
			p += date[l];
		}
	}
	string t ="";
	for(int l = 0; l < tim.length();l++){
		if(tim[l] != ':'){
			t += tim[l];
		}
	}
    return "C"+s+p+t;
}


class SavingsAccount : public BankAccount{
	public:
	string Debit(){
		float Amount;
        cout << "Enter how much money you want to withdrow: "<< endl;
        cin>>Amount;
        if( Amount < get_bal()){
			set_bal(Amount);
			}
		else{ 
			set_bal(50);
			}
        string date;
        string acc;
        cout<<"Enter Account Number: "<<endl;
        cin>>acc;
        cout<<"Enter date(Format-DD/MM/YYYY)"<<endl;
        cin>>date;
        string tim;
        cout<<"Enter time(Format-HH:MM)"<<endl;
        cin>>tim;
        if(get_bal() < get_minbal()){
			cout<<"Penalty "<<endl;
			set_bal(20);
			}
        string s = "";
        for(int i = 0; i < 4;i++){
		 s+= acc[i];
		}
	    string p ="";
	    for(int l = 0; l < date.length();l++){
		if(date[l] != '/'){
			p += date[l];
		}
	    }
	    string t ="";
	    for(int l = 0; l < tim.length();l++){
		if(tim[l] != ':'){
			t += tim[l];
		}
	    }
        return "D"+s+p+t;
	}
	
};



class CurrentAccount : public BankAccount{
	public:
	string Debit(){
		float Amount;
        cout << "Enter how much money you want to withdrow: "<< endl;
        cin>>Amount;
        if( Amount < get_bal()){
			set_bal(Amount);
			}
		else{ 
			set_bal(20);
			}
        string date;
        string acc;
        cout<<"Enter Account Number: "<<endl;
        cin>>acc;
        cout<<"Enter date(Format-DD/MM/YYYY)"<<endl;
        cin>>date;
        string tim;
        cout<<"Enter time(Format-HH:MM)"<<endl;
        cin>>tim;
        if(get_bal() < get_minbal()){
			cout<<"Penalty "<<endl;
			set_bal(50);
			}
        string s = "";
        for(int i = 0; i < 4;i++){
		 s+= acc[i];
		}
	    string p ="";
	    for(int l = 0; l < date.length();l++){
		if(date[l] != '/'){
			p += date[l];
		}
	    }
	    string t ="";
	    for(int l = 0; l < tim.length();l++){
		if(tim[l] != ':'){
			t += tim[l];
		}
	    }
        return "D"+s+p+t;
	}
	
};








int main(){
	int account_type;
	cout<<"Enter account type(1 for SA, 2 for CA)"<<endl;
	cin>>account_type;
	int tn;
	cout<<"Enter number of transaction: "<<endl;
	cin>>tn;
	vector<string> tnd;   
	if(account_type == 1){
		SavingsAccount b; 
	    b.open_account();
	    bool ans = b.Register();
	    if(ans == false){
		cout<<"--------Invalid account!------"<<endl;
		return 0;
		}
		b.set_ccd(true);
        for(int i = 1; i <= tn;i++){
			cout<<"Enter transaction type(1 for credit, 2 for withdrow: )"<<endl;
			int choice;
			cin>>choice;
    	    if(choice == 1){
		    tnd.push_back(b.deposit_money());
		    }else if(choice == 2){
			tnd.push_back(b.Debit());
		    }
			}
		cout<<"----------------------------------------------------------------------"<<endl;
		b.get_name();
        b.get_phno();
        b.get_address();
        b.get_email();
        b.get_acc();
        b.get_branch();
        b.get_ifsc();
        b.get_date();
        b.get_ccd();
        b.get_dcd();
        cout<<b.get_minbal()<<endl;
        cout<<"Savings Account"<<endl;
        cout<<tn<<endl;
        for(int i = 0; i < tn; i++){
			cout<<tnd[i]<<endl;
		}
		cout<<b.get_bal();
		}
	else if(account_type == 2){
		 CurrentAccount b;
         b.open_account();
	     bool ans = b.Register();
	     if(ans == false){
		     cout<<"--------Invalid account!------"<<endl;
		     return 0;
		}
		b.set_dcd(true);
		for(int i = 1; i <= tn;i++){
			cout<<"Enter transaction type(1 for credit, 2 for withdrow: )"<<endl;
			int choice;
			cin>>choice;
    	    if(choice == 1){
		    tnd.push_back(b.deposit_money());
		    }else if(choice == 2){
			tnd.push_back(b.Debit());
		    }
			}
		cout<<"----------------------------------------------------------------------"<<endl;
		
        b.get_name();
        b.get_phno();
        b.get_address();
        b.get_email();
        b.get_acc();
        b.get_branch();
        b.get_ifsc();
        b.get_date();
        b.get_ccd();
        b.get_dcd();
        cout<<b.get_minbal()<<endl;
        cout<<"Current Account"<<endl;
        cout<<tn<<endl;
        for(int i = 0; i < tn; i++){
			cout<<tnd[i]<<endl;
		}
		cout<<b.get_bal();
		}
	
}


















