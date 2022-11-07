#include<iostream>
using namespace std;
int main()
{
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"                                 WELCOME                                        "<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	int pin,digit_pin=7038;
	cout<<"ENTER YOUR 4 DIGIT PIN : "<<endl;
	cin>>pin;
	
 if(pin==digit_pin)
 {
	cout<<"1.HOME"<<endl;
	cout<<"2.FUND TRANSFER"<<endl;
	cout<<"3.VIEW BENEFICERIES"<<endl;
	cout<<"4.SETTINGS"<<endl;
	int option;
	cin>>option;
	
	switch(option)
	{
		case 1:
			cout<<"--------------------------------------------------------------------------------"<<endl;  
			cout<< "                              HOME                                             "<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl; 
			cout<<" 1.saving account  "<<endl;
			cout<<" 2.current account "<<endl;
			cout<<" 3.check balance "<<endl;
			int n;
			cin>>n;
			switch(n)
			{
				case 1:
					cout<< "saving account:"<<"\n";
					cout<< "Account No: xxxx xxxx xxxx x987"<<"\n";
					cout<< "IFSC Code: xxxx xxxx x121"<<"\n";
					cout<< "Account Prop. Name: Laxmi Narayana"<<"\n";
					break;
					
				case 2:	
					cout<< "current account:"<<"\n";
					cout<< "Account No: xxxx xxxx xxxx x123"<<"\n";
					cout<< "IFSC Code: xxxx xxxx x212"<<"\n";
					cout<< "Account Prop. Name: Sri Devi Agencies"<<"\n";
					break;
				
				case 3:
					cout<<" CHOOSE ACCOUNT TYPE : "<<endl;
					cout<<" 1.SAVING ACCOUNT."<<endl;
					cout<<" 2.CURRENT ACCOUNT. "<<endl;
					int pin,pick;
					cin>>pick;
					if(pick==1)
					{
						cout<<"SAVING ACCOUNT SELECTED"<<endl;
						cout<< "Enter Pin: " ;
						cin>>pin;
						cout<<"Balance: 50,000.00"<<"\n";
	   				} 	
	   				else if(pick==2)
					{
						cout<<"CURRENT ACCOUNT SELECTED"<<endl;
						cout<< "Enter Pin:" ;
						cin>>pin;
						cout<<"Balance: 1,00,000.00"<<"\n";
					}
					break;			
			}	
			break;
		
		case 2:
			cout<<"--------------------------------------------------------------------------------"<<endl; 
		    cout<<"                           FUND TRANSFER                                        "<<endl;	
		   	cout<<"--------------------------------------------------------------------------------"<<endl; 
	    	cout<<" SELECT PAYEE "<<endl;
			cout<<" 1.Subhateja_Marketing "<<endl;
			cout<<" 2.Subhateja_Trading "<<endl;
			cout<<" 3.Venkata_Sai_Surya "<<endl;
			cout<<" 4.City_Trading "<<endl;
		
			int payee;
			cin>>payee;	
			switch(payee)
		  {
		 	case 1:
			cout<<" PAYEE NAME    : Subhateja_Marketing "<<endl;
			cout<<" ACC NO.       : 123456789     "<<endl;
			cout<<" IFSC NO.      : ANDB000012300 "<<endl;
			cout<<" ACCOUNT TYPE  : currrent acc  "<<endl;
			break;
			case 2:
			cout<<" PAYEE NAME    : Subhateja_Trading "<<endl;
			cout<<" ACC NO.       : 987654321     "<<endl;
			cout<<" IFSC NO.      : ANDB000045600 "<<endl;
			cout<<" ACCOUNT TYPE  : currrent acc  "<<endl;	
			break;
			case 3:
			cout<<" PAYEE NAME    : Venkata_Sai_Surya "<<endl;
			cout<<" ACC NO.       : 9493747486   "<<endl;
			cout<<" IFSC NO.      : CNR001101110 "<<endl;
			cout<<" ACCOUNT TYPE  : currrent acc "<<endl;	
			break;
			case 4:
			cout<<" PAYEE NAME    : City_Trading "<<endl;
			cout<<" ACC NO.       : 8978545846   "<<endl;
			cout<<" IFSC NO.      : SBI000111001 "<<endl;
	     	cout<<" ACCOUNT TYPE  : currrent acc "<<endl;	
		  }
			cout<<" ENTER AMOUNT: " ;
			int amount;
			cin>>amount;
	     
			cout<<" CHOOSE AN ACCOUNT FOR THE TRANSFER : "<<endl;
			cout<<" 1.CURRENT ACCOUNT "<<endl;
			cout<<" 2.SAVING ACCOUNT  "<<endl;
		
			int choose;
			cin>>choose;
			cout<<endl;
			cout<<"~~~~~TRANSACTION COMPLETED~~~~~"<<endl; 
			break;	 
	        
		case 3:
			cout<<"--------------------------------------------------------------------------------"<<endl; 
			cout<<"                              BENIFECIERIES                                     "<<endl; 
			cout<<"--------------------------------------------------------------------------------"<<endl; 
            cout<<"1."<<endl;
			cout<<" PAYEE NAME    : Subhateja_Marketing "<<endl;
			cout<<" ACC NO.       : 123456789     "<<endl;
			cout<<" IFSC NO.      : ANDB000012300 "<<endl;
			cout<<" ACCOUNT TYPE  : currrent acc  "<<endl;	
			
			cout<<"2."<<endl;
			cout<<" PAYEE NAME    : Subhateja_Trading "<<endl;
			cout<<" ACC NO.       : 987654321     "<<endl;
			cout<<" IFSC NO.      : ANDB000045600 "<<endl;
			cout<<" ACCOUNT TYPE  : currrent acc  "<<endl;	
		
		    cout<<"3."<<endl;
			cout<<" PAYEE NAME    : Venkata_Sai_Surya "<<endl;
			cout<<" ACC NO.       : 9493747486   "<<endl;
			cout<<" IFSC NO.      : CNR001101110 "<<endl;
			cout<<" ACCOUNT TYPE  : currrent acc "<<endl;	
		
		    cout<<"4."<<endl;
			cout<<" PAYEE NAME    : City_Trading "<<endl;
			cout<<" ACC NO.       : 8978545846   "<<endl;
			cout<<" IFSC NO.      : SBI000111001 "<<endl;
	     	cout<<" ACCOUNT TYPE  : currrent acc "<<endl;
			break;
		
		case 4:
			cout<<"--------------------------------------------------------------------------------"<<endl; 
			cout<<"                                SETTINGS                                        "<<endl;
	        cout<<"--------------------------------------------------------------------------------"<<endl; 
			cout<<" 1.CHANGE LANGUAGE "<<endl;
	        cout<<" 2.CHANGE LOGIN PIN "<<endl;
	        cout<<" 3.LOG-OUT "<<endl;
			int option;
	        cin>>option;
	        switch(option)
	        {
	        case 1:
	        	cout<<" CHOOSE  YOUR LANGUAGE : "<<endl;
	        	cout<<"1.english"<<endl;
	        	cout<<"2.hindhi"<<endl;
	        	cout<<"3.telugu"<<endl;
	        	int lang;
				cin>>lang;
				cout<<"--------------------------------------------------------------------------------"<<endl; 
	        	cout<<" LANGUAGE UPDATED "<<endl;
	        	break;
	        			
	        case 2:
	         	int op;
	        	cout<<"ENTER OLD PASSWORD: " ;
	       	    cin>>op;
	       	    cout<<endl;
	       	    cout<<"ENTER NEW PASSWORD: ";
	       	    cin>>op;
	       	    cout<<"CONFIRM NEW PASSWORD: ";
	       	    cin>>op;
	       	    cout<<endl;
	       	    cout<<"--------------------------------------------------------------------------------"<<endl;  
	       	    cout<<" NEW PASSWORD UPDATED "<<endl;
	       	    break;
	       	    
	       	case 3:  
	       	 	char decide;
	       		cout<<"Do You Want to Log-Out?";
				cout<<" yes | no "<<endl;
				cin>>decide;
				if(decide)
			   {
			   	cout<<"--------------------------------------------------------------------------------"<<endl;  
	       	    cout<<" YOUR SUCCESSSFULLY LOGGED OUT "<<endl;
			   }
			   
	       	}
	       	
		 }
		 
	    cout<<"--------------------------------------------------------------------------------"<<endl;  
	    cout<<"                              THANK - YOU                                       "<<endl;  
	    cout<<"--------------------------------------------------------------------------------"<<endl;  
 }
  else
 {
     cout<<"Invalid Pin"<<endl;
 }

}

	
	
	
