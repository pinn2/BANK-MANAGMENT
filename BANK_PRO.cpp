#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;
int wmen=0,choice,tb=0,wtb=0,i=1;int j=0;
int chf();int f1();int f3();
class bankv{
	public:
    int appn;	
	int ct,rs,ms,gd,ac,tx;
	char AN[15],PN[10],pin[8],num[11],salary[15];
	char name[15],dob[11],nt[10],dis[10],st[10],em[20];
	char fn[12],add[100],occ[20],hn[15],baccn[10];
};
struct bsecv{
	char accn[10],pasw[10],disc[20];
	long int rp,cw,cd,cew;
	int vapp;
	struct bsecv *next;
}*s,*t,*n;
class loanv{
	public:
	    int lot;
    	char lname[15],lnum[11];
	
};
  main()
{
	bankv bv;
	cout<<"         =====================================================        \n";
	cout<<"                        WELCOME TO P.S. BANK                          \n";
	cout<<"         =====================================================        \n\n";
	cout<<"               *** THIS BANK WILL PROVIDE ONLINE BANK ***              \n\n\n";
	f1();
}
   int admin();int addnl(int appt);
    int ad1(){
   	     int holder,go;
    	fstream fs;
		bankv b;
		fs.open("data");system("cls");cout<<"\n============================================================\n\n";
		while(fs.read((char *)&b,sizeof(bankv))){
		cout<<"\nNAME:     "<<b.name;cout<<"          APPLICATION NUMBER: "<<b.appn<<endl;choice=0;}
		if(choice!=0){
		cout<<"\n\n\n\t\t\t****EMPTY DATA****\n";
		}else{cout<<"\n\n\t\t\tOK!..\n\n";getch(); fs.close();
		cout<<"\n\nENTER APPLICATION NUMBER:  ";
		cin>>holder;	fs.open("data");
			while(fs.read((char *)&b,sizeof(bankv))){
			if(holder==b.appn)break;
		}   	if(holder==b.appn){
			system("cls");if(b.gd==2) wmen=1;
		cout<<"\n\nNAME:     "<<b.name;cout<<"\n\nAPPLICATION NUMBER: "<<b.appn;cout<<"\n\nCUSTOMER TYPE:  "<<b.ct;cout<<"\n\nRESIDENTAL:  "<<b.rs;cout<<"\n\nD.O.B.  "<<b.dob;cout<<"\n\nNATION:  "<<b.nt;
		if(wmen==1){cout<<"\n\nHUSBAND NUMBER: "<<b.hn;
		}else{
		cout<<"\n\nFATHER NAME:  "<<b.fn;}cout<<"\n\nADHAR:  "<<b.AN;cout<<"\n\nP.A.N:  "<<b.PN;cout<<"\n\nADDRESS:  "<<b.add<<" "<<b.dis<<" "<<b.st<<" "<<b.pin;cout<<"\n\nNUMBER: "<<b.num;
        cout<<"\n\nE-MAIL: "<<b.em;cout<<"\n\nMARRITEL STATUS: "<<b.ms;cout<<"\n\nGENDER : "<<b.gd;
			if(b.ac==1){
    		cout<<"\n\nACC. NUMBER: "<<b.baccn;}cout<<"\n\nTAX STATUS: "<<b.tx;cout<<"\n\nINCOME: "<<b.salary;cout<<"\n\nOCCUPATION: "<<b.occ;cout<<"\n\n\n\t\t\tOK!..\n\n\t\t\tPROCEDE TO GIVE ACC.\n\n";
			cin>>go;if(go==1){
			if(wmen==1) wtb++;
    	 tb++;	system("cls");
		 addnl(b.appn);}
		fs.close();}else cout<<"\n\n\t\t*NOT VALID APPLICATION*\n";}getch();
	   system("cls");	
		return admin();
}
	int ad2(){char adacn[20];int adapp;system("cls");cout<<"\n\n\t\t============================================\n\n\t\t\t\t***ACCOUNTS***\n\n\t\t============================================\n\n";
		cout<<"\n============================================================\n\n";
		if(s==NULL)
	{
		printf("\n\n\n\t\t***EMPTY DATA***\n\n");
	}
	else
	{   cout<<"\nAPPLICATION:\t\tACCOUNT NUMBER:  \n\n";
		for(t=s;t->next!=NULL;t=t->next)
		{
			cout<<t->vapp<<"\t\t\t"<<t->accn<<endl;
		}	cout<<t->vapp<<"\t\t\t"<<t->accn<<endl;
		cout<<"\n============================================================\n\n";
		cout<<"\n\nOK!.\n";getch();system("cls");cout<<"\n\n\twanna check a acc.?\n\n";cin>>choice;
		if(choice==1){
		cout<<"\nACCOUNT NUMBER: ";cin>>adacn;cout<<"\nAPPLICATION NUMBER:  ";cin>>adapp;
		t=s;
		while(strcmp(t->accn,adacn)!=0){
		  if(t->next==NULL) break;
	      t=t->next;
		}if(strcmp(adacn,t->accn)==0){
		fstream fs;bankv b;
		fs.open("data");	while(fs.read((char *)&b,sizeof(bankv))){if(b.appn==adapp)break;
		}fs.close();
		cout<<"\nNAME: "<<b.name<<"\t\tACC.NUMBER:"<<t->accn<<"\n\nTOTAL RUPEE: "<<t->rp<<"\n\nLAST WITHDRAWL: "<<t->cw<<"\n\nLAST DEPOSIT: "<<t->cd;}else cout<<"\n\n\t\t*NOT VALID ACCOUNT*\n";
		cout<<"\n=============================================================\n\n\t\tOK!.";}}
	getch(); system("cls");return admin();
}
	int ad3(){long int rpt;
		char holder[20];system("cls");
		cout<<"\n\t===============================================\n\n\t\t  ***WELCOME ADMIN INTO E-WALLET***\n\n\t===============================================\n\n";
		if(s==NULL){cout<<"\n\n\t\t\t**NO ACCOUNTS**\n\n";
		}else{
			cout<<"ACCOUNT NUMBER:  ";
			cin>>holder;t=s;	while(strcmp(t->accn,holder)!=0){
		  if(t->next==NULL) break;
	      t=t->next;
		}
			if(strcmp(holder,t->accn)!=0){cout<<"\n\n\t\t*NOT VALID ACCOUNT*\n";getch();
			return admin();}
	    cout<<"DO U WANT DEPOSIT RUPEE? \n";cin>>choice;
		if(choice==1){cout<<"\n\n\tRUPEE: ";cin>>rpt;t->cd=rpt;t->rp=t->rp + rpt;
		}
		cout<<"\nLAST E-TRANSACTION: \n\n\t"<<t->disc<<"\n\nRUPEE: "<<t->cew;cout<<"\n\nOK!..";}
			getch();system("cls");
	return admin();
	}
	int ad4(){system("cls");
		loanv l;
		ifstream fs1;
		fs1.open("ldata");
		cout<<"\n\t\t**WELCOME ADMIN TO LOAN APPLICANTS PORTAL**\n\n";
		while(fs1.read((char *)&l,sizeof(loanv))){
			cout<<"\n\tLOAN TYPE: "<<l.lot<<"\n\nNAME: "<<l.lname;cout<<"\t\tCONTECT NUMBER:"<<l.lnum<<endl;choice=0;
	}	if(choice!=0){
		cout<<"\n\n\n\t\t\t****EMPTY DATA****\n";
		}
	cout<<"\n\n\t\tOK!..";getch();system("cls");return admin();
}
    int admin(){
    	char adminname[6],adminpas[8];system("cls");
    	cout<<"\t\t=============================================\n\n\t\t   ***WELCOME TO P.S. BANK ADMIN BLOCK***\n\n\t\t=============================================\n\n";
    	cout<<"\nENTER YOUR NAME:    ";
    	cin>>adminname;
    	if(strcmp("Pin2",adminname)!=0) {
		system("cls"); return f1();}
    	cout<<"\nPASSWORD:           ";
    	cin>>adminpas;
    	if(strcmp(adminpas,"pin2902")!=0){
		 system("cls");return f1();}
    	system("cls");
    	cout<<"\n\n\t\t************************************\n\t\t\tWELCOME   MR. "<<adminname<<"\n\n\t\t************************************\n\n";
    	cout<<"\n1. APPLICATIONS\n\n2. ACCOUNTS\n\n3. E-WALLET\n\n4. LOAN APPLICANTS\n\n5. BACK\n\n\n";
    	cin>>choice;
    		switch(choice)
		{
			case 1: ad1(); break;
			case 2: ad2(); break;
			case 3: ad3(); break;
			case 4: ad4(); break;
			case 5: system("cls");f1();  break;
		}
	}
    int f4(){
    	loanv l;
    	system("cls");
    	fstream fs1;
    	fs1.open("ldata",ios::app);
    	cout<<"\n============================================================================\n";
    	cout<<"\n\t****WELCOME TO P.S. BANK LOAN & INSURENCE PORTEL****\n";
    	cout<<"\n============================================================================\n";
    	getch();
    	cout<<"\nP.S. Bank offers wide variety of Loans & insurance Products to suit your requirements.\n1. Home Loan\n\tGetting a home loan from P.S. Bank is quick and easy. We offer higher eligibility and lower EMIs at attractive interest rates.\n";
    	cout<<"\n2. Car loan:\n\n\tThe most preferred financier for car loans in the country. Network of more than 1800 channel partners in over 1700 locations. Tie-ups with all leading automobile manufacturers to ensure the best deals. Flexible schemes & quick processing.\n";
    	cout<<"\n3. Pradhan Mantri Mudra Yojana:\n\n\tP.S.BANK PROVIDE Pradhan Mantri Mudra Yojana (PMMY) is a collateral free loan up to ?10 lakh to micro and small manufacturing and service units.\n";
    	cout<<"\n4. Stand-Up India Scheme:\n\n\tThe objective of Stand-Up India scheme is to facilitate bank loans between ? 10 lakh and ? 1 crore to Scheduled Caste (SC) or Scheduled Tribe (ST) borrower and Woman borrower for setting up a greenfield enterprise (first time venture), in manufacturing, services or trading sector.\n";
    	cout<<"\n5. Personal Loan:\n\n\tDream holiday, wedding, home renovation, latest gadgets or anything else you desire? Make real with Personal Loans up to Rs.20 lakh at interest rates starting from 10.59%.\n";
    	cout<<"\n6. Gold Loan:\n\n\tP.S. Bank presents 'Loan Against Gold and Gold Ornaments', designed to provide liquidity against gold and gold ornaments without having to sell them.\n";
    	cout<<"\n7. General Insurance:\n\n\tSecure your family's health, insure yourself against medical emergencies when travelling abroad, insure your vehicle and your home with these General Insurance policies.\n";
    	cout<<"\n8. Life Insurance:\n\n\tLife insurance allows you to cater to your financial goals like creating wealth, securing your child’s future or planning your retirement.  Buy a life insurance solution today which helps you in securing future for yourself and your family.\n";
    	cout<<"\n9. Pradhan Mantri Social Security Schemes:\n\n\tPradhan Mantri Suraksha Bima Yojna – An accidental death cover of Rs. 2 lacs at premium of Rs. 12/-\nPradhan Mantri Jeevan Jyoti Yojna – A death cover of Rs. 2 lacs at premium of Rs. 330/-\n";
    	cin>>l.lot;
    	if(l.lot>=1&&l.lot<=9){system("cls");
    		cout<<"\n=======================CONTECT DETAILS=======================\n\n\tENTER YOUR NAME :\t";
    		gets(l.lname);gets(l.lname);
    		cout<<"\n\n\tMOBILE NUMBER : \t";
    		cin>>l.lnum;
    		cout<<"\n\n\t\tSUBMIT\n";
    		getch();
    		cout<<"\n=============================================================\nTHANK YOU!..FOR VISITING P.S.BANK \n=============================================================\n";getch();
    		fs1.write((char *)&l,sizeof(loanv));
		    fs1.close();
		}
		else{
		system("cls");cout<<"\n===========================================\n";
		cout<<"\n\nTHANK YOU!..FOR VISITING P.S.BANK \n\n===========================================\n";getch();	
		}system("cls");
    	return f1();
	}
	int f6(){
		cout<<"\n===================================================================\n";
		cout<<"\n\t\tWELCOME TO P.S.BANK HELP DESK\n\n===================================================================\n";
		cout<<"\nFOR ANY ENQUIRY AND DETAILS PLEASE CONTECT US\n\n\t*P.S.BANK\n\n\t*MR.PINTU SHARMA\n\t(MANAGER P.S.I. BANK)\n";
		cout<<"\nCUSTOMER CARE\n\n\tMR.PINTS\n\tNUMBER: +19988776655\n\n\tMS.SUE\n\tNUMBER: +19988712345\n\n\tFAX-NUM:123-456\n\n\tWWW.PSBANK.COM\n\n\tPSBANK123@gmail.com\n\n\t*HEAD OFFICE:\n\tP.S.BANK\n\tSTREET NUMBER 2A 44 W 4th St\n\tOPP. MIT UNIVERSITY\n\tNEW YORK (NY 10012)\n\n";
		cout<<"\nJODHPUR OFFICE:\n\n\tP.N.235 ADARSH NAGAR NEAR PS BUILDING JODHPUR 342005\n\n\tMR.RAJESH\n\tNUMBER:+91123450110\n\n\tMS.POOJA\n\tNUMBER:+91123456789\n\n===================================================================\n";getch();system("cls");
		return f1();
	}
   	int f31(char *acnt){system("cls");
	   	t=s;
		while(strcmp(t->accn,acnt)!=0){
		  if(t->next==NULL) break;
	      t=t->next;
		}
		cout<<"\n\nACCOUNT NUMBER: "<<t->accn<<"\n\nTOTAL RUPEE: "<<t->rp<<"\n\nLAST WITHDRAWL: "<<t->cw<<"\n\nLAST DEPOSIT: "<<t->cd<<"\n\n\n\t\tOK!..";getch();system("cls");
		return f3();}
	int f32(char *acnt){system("cls");long int rpt;
		t=s;
		while(strcmp(t->accn,acnt)!=0){
		  if(t->next==NULL) break;
	      t=t->next;
		}
	cout<<"\n\n\t\tENTER AMOUNT: ";cin>>rpt;
	if(rpt>=t->rp){
		cout<<"\n\n****THERE IS NOT ENOUGH BALANCE IN YOUR ACCOUNT****\n\n";getch();
	}else{t->cw=rpt;
    t->rp=t->rp-rpt;cout<<"\n\n\t\t***TRANSACTION DONE..THANKS..VISIT AGAIN***\n\n";getch();
	} system("cls");return f1();
	}
    int f33(char *acnt){system("cls");long int rpt;char tdisc[20];	cout<<"\n\n\t\t***WELCOME TO YOUR E-WALLET***\n\n";
       	t=s;
		while(strcmp(t->accn,acnt)!=0){
		  if(t->next==NULL) break;
	      t=t->next;
		}
    	cout<<"\n\tDESCRIPTION: \n\t";gets(tdisc);gets(tdisc);
    	cout<<"\n\tRUPEE: ";cin>>rpt;
    	if(rpt>=t->rp){cout<<"\n\n**NO ENOUGH BALANCE IN YOUR ACCOUNT**\n\n";getch();
		}
		else{t->cew=rpt;strcpy(t->disc,tdisc);
			t->rp=t->rp-rpt;cout<<"\n\n\t\t*TRANSACTION DONE!..THANKS & VISIT AGAIN*\n\n";getch();
		} system("cls");return f1();
	}
	int f34(char *acnt){system("cls");
	char pasdob[11],oldpas[10],op[10];
		bankv b;
		ifstream fs;
		fs.open("data");
		cout<<"\n\n\n===================================================\n\n\tWELCOME TO PASSWORD CHANGE PORTAL\n\n===================================================\n\n";
		cout<<"ENTER D.O.B. :    ";cin>>pasdob;
		while(fs.read((char *)&b,sizeof(bankv))){
		if(strcmp(pasdob,b.dob)==0)break;
	}   t=s;
		while(strcmp(t->accn,acnt)!=0){
		  if(t->next==NULL) break;
	      t=t->next;
		}
		if(strcmp(pasdob,b.dob)!=0)return f1();
		else{
			cout<<"\nOLD PASSWORD:  ";cin>>oldpas;
			if(strcmp(oldpas,t->pasw)!=0)return f1();
			else{
				cout<<"\nNEW PASSWORD:  ";cin>>oldpas;cout<<"\nCONFIRM PASSWORD:  ";cin>>op;
				if(strcmp(oldpas,op)!=0){cout<<"\n\n\t\t*NOT SAME..TRY AGAIN!..\n\n";
				return f34(acnt);}
				else{
					strcpy(t->pasw,op);cout<<"\n\n\t****PASSWORD SUCCESSFULLY CHANGED****\n\n";getch();
				}
				}
				} system("cls");return f1();
	}
	int f35(char *acnt){system("cls");char tacct[20];long int rpt;
	    bsecv *t2;
		cout<<"\n\t\t\t**WELCOME IN RUPEE TRANSFER PORTAL**\n\n\n";
		cout<<"\n\n\tYOUR ACCOUNT:  "<<acnt<<endl;
		cout<<"\n\n\tDESTINATION ACCOUNT: ";cin>>tacct;
		t2=s;
		while(strcmp(t2->accn,tacct)!=0){
		  if(t2->next==NULL) break;
	      t2=t2->next;
		}
	    if(strcmp(t2->accn,tacct)!=0){
		cout<<"\n\n\t\t*NOT VALID DESTINATION ACCOUNT*\n\n";getch();
	}else{
		cout<<"\n\nRUPEE: ";cin>>rpt;
		cout<<"\n\n\t\tGO!..";cin>>choice;if(choice==1){
		t=s;
		while(strcmp(t->accn,acnt)!=0){
		  if(t->next==NULL) break;
	      t=t->next;
		}	
		if(rpt>=t->rp){cout<<"\n\n\t**NOT ENOUGH BALANCE IN YOUR ACCOUNT**\n";getch();
	}else {
	t->rp=t->rp - rpt;t->cw=rpt;
	   t2->rp=t2->rp +rpt;t2->cd=rpt;cout<<"\n\n\t**TRANSACTION DONE THANK YOU FOR USING P.S. BANK**\n\n";getch();
	}}}system("cls");return f3();
}
	int f3(){
		ifstream fs;
		bankv b;char accnt[20],paswt[10];
		cout<<"\n=================================================================\n\n\t\t\tWELCOME TO P.S. BANK\n\n=================================================================\n";
		if(s==NULL){
		cout<<"\n\n\n\t\t\t****EMPTY DATA****\n";getch();
		}else{	fs.open("data");
	    cout<<"\nENTER YOUR CURRENT ACCOUNT NUMBER: \n";
		cin>>accnt;
		t=s;
		while(strcmp(t->accn,accnt)!=0){
		  if(t->next==NULL) break;
	      t=t->next;
		}	
		while(fs.read((char *)&b,sizeof(bankv))){
			if(t->vapp==b.appn)break;
		}
		if(strcmp(accnt,t->accn)!=0){
			cout<<"\n\t\t\t****NOT VALID****\n\n"; getch();
			if(i<3){
			i++;system("cls");
			return f3();}
			else
			return f1();
		}
		cout<<"\nENTER YOUR PASSWORD: \n";
		cin>>paswt;
		if(strcmp(paswt,t->pasw)!=0){
			cout<<"\n\t\t\t****NOT VALID****\n\n";
			return f1();
		}
		fs.close();
		system("cls");
		cout<<"\n\t\tWELCOME  "<<b.name<<"\n\n";
		cout<<"\n1. ACC. DETAILS\n\n2. WITHDRAWL\n\n3. YOUR E-WALLET\n\n4. PASSWORD CHANGE\n\n5. RUPEE TRANSFER\n\n6. HELP\n\n7. BACK\n----------------------------------------------------------------\n\n";
		cin>>choice;
			switch(choice)
		{
			case 1: f31(t->accn); break;
			case 2: f32(t->accn); break;
			case 3: f33(t->accn); break;
			case 4: f34(t->accn); break;
			case 5: f35(t->accn); break;
			case 6: f6(); break;
			case 7: f1(); break; 
		}
	}system("cls");return f1();
}
	int f5(){
		cout<<"\n=================================================================\n\nTHIS IS CURRENTLY AVILABLE FOR ONLY P.S. BANKERS\n\n";
		cout<<"DO U HAVE ANY ACCOUNT HERE?..\n\nIF YES THEN GO BACK AND CHOOSE 'ACCOUNT HOLDER' ELSE COME AND JOIN US\n\nTHANK YOU!..\n\n=================================================================\n\n ";getch();system("cls");
		return f1();
	}
	
    int f21()
    {
    	bankv b;
    	ofstream fs;
    	fs.open("data",ios::app);
    	if(wmen==1){
    		cout<<"\n--------------------------------------------------------\n";
    		cout<<"\nWE WELCOME INDIAN WOMEN POWER\nCOME AND JOIN US TO BECOME REAL LAXMI\n\n\t\t***THANK YOU!***\n";
    		cout<<"--------------------------------------------------------\n";
    		cout<<"\t\t\t*****BENIFITS*****\n\n1.Comprehensive Premium for Life+ Accidental Death + 34 Critical illness cover#\n\n2.Attractive Recurring Deposit Plan\n\n3.Healthcare Benefits\n\n";
    		cout<<"4.Lifestyle Offers(in children education,loan,insurance and CASHBACK#)\n\n# terms and condition apply.\n\n";
		getch();
		system("cls");}
    	cout<<"\n following steps u must follow:\n\n* SUBMIT INFO ONLINE\n\n* VISIT BRANCH WITH DOCUMENTS\n\n";
    	cout<<"\t\t\t  ****APPLICATION FORM****\n\t\t----------------------------------------------\n\t\t\t(plz enter valid respective numbers)\n\n";
    	cout<<"Customer Type:\n1. Public\t2. Staff\t3. Senior citizen\t4. Minor\n";
    	cin>>b.ct;
    	cout<<"\nResidental Status:\n1. Resident Individual\t2. Non Residential(NRI)\t3. Foregin National\n";
    	cin>>b.rs;
    	cout<<"\nName: ";
    	gets(b.name);
    	gets(b.name);
    	cout<<"\nDate of Birth(dd/mm/yyyy): ";
    	cin>>b.dob;
    	cout<<"\nNationality: ";
    	cin>>b.nt;
    	if(wmen!=1){
    	cout<<"\nFather name: ";
    	gets(b.fn);
    	gets(b.fn);}
    	cout<<"\nAdhar Number: ";
    	cin>>b.AN;
    	cout<<"\nPAN number: ";
    	cin>>b.PN;
    	cout<<"\nAddress:\n";
    	gets(b.add);
    	gets(b.add);
    	cout<<"\nDistrict: ";
    	cin>>b.dis;
    	cout<<"\nState: ";
    	cin>>b.st;
    	cout<<"\nPIN: ";
    	cin>>b.PN;
    	cout<<"\nMobile Number: ";
    	cin>>b.num;
    	cout<<"\nE-mail address: ";
    	cin>>b.em;
    	cout<<"\nOccupation: ";
    	gets(b.occ);
    	gets(b.occ);
    	cout<<"\nMaritial Status:\n1.Single\t\t2.married\n";
    	cin>>b.ms;
    	if(wmen==1){
    		if(b.ms==2){
    			cout<<"\nHusband name: ";
    			gets(b.hn);gets(b.hn);
			}
			else
			cout<<"\nFather name: ";
			gets(b.fn);gets(b.fn);
		}
		if(wmen==1){
			b.gd=2;}
		else{
    	cout<<"\nGender:\n1.MALE\t\t2.FEMALE\t\t3.OTHER\n";
    	cin>>b.gd;}
    	cout<<"\nDo you have any account in our bank?\n1.YES\t\t\t0.NO\n";
    	cin>>b.ac;
    	if(b.ac==1){
    		cout<<"\nEnter your account number: \n";
    		cin>>b.baccn;
		}
    	cout<<"\nDo you pay income tax:\n1.YES\t\t\t0.NO\n";
    	cin>>b.tx;
    	if(b.tx!=1){
    		cout<<"\n\n**MESSAGE**\n--------------------------\n\nPLEASE SUBMIT 60/61 FORM WITH YOUR DOC.\n\tTHANK YOU!\n\n---------------------------------------\n\n";
		}
		cout<<"\ntotal Annual Income(in rupee): ";
		cin>>b.salary;cout<<"\n\n\tTHANK YOU!..\n";getch();
	    system("cls");
		cout<<"\n\t------------------------------------------------------\n\t\t\t*****THANK YOU!*****\n\tYOUR APPLICATION IS SUBMITED\n\tWE WILL MEET IN BANK WITH YOUR ORIGNAL DOCUMENTS\n";
		cout<<"\n\n\t------------------------------------------------------\n\n\n";
    	cout<<"==============================================================================\n";
    	cout<<"\n\tPLEASE NOTE THE APPLICATION NUMBER FOR FURTHER REQUIRNMENT\n\n\t\tTHANK YOU!\n";
    	b.appn=j;
    	cout<<"\n\t\tAPPLICATION NUMBER:\tAP0B"<<b.appn<<"\n\n";
    	cout<<"==============================================================================\n";
    	getch();
    	j++;
		fs.write((char *)&b,sizeof(bankv));
		fs.close();system("cls");
		return main();

	}
    int f2()
    {
        cout<<"\n                   *****WELCOME OUR NEW ACCOUNT HOLDER*****\n\n";
	    cout<<"which account u want to open\nchoose any one option:\n====================================================\n";
     	cout<<"1. SAVING ACCOUNT\n\n2. WOMEN SAVING ACCOUNT\n\n3. BACK\n";
	    cout<<"\n====================================================\n";	
	    chf();
        	switch(choice)
		{
			case 1: f21(); break;
			case 2: wmen=1;f21();
			 break;
			case 3: f1(); system("cls"); break;

		}
	}
    int f1()
	{   
		cout<<"\nSELECT ANY OPTION & JOIN OUR P.S. BANK\n\n";
		cout<<"--------------------------------------------------\n";
        cout<<"1. NEW ACCOUNT\n\n";
        cout<<"2. ACCOUNT HOLDER\n\n";
        cout<<"3. LOAN & INSURENCE\n\n";
        cout<<"4. YOUR E-WALLET\n\n";
        cout<<"5. HELP\n\n";
        cout<<"***ANY KEY FOR EXIT***\n";
        cout<<"--------------------------------------------------\n\t*****PLEASE LOG OUT BEFORE EXIT*****\n--------------------------------------------------\n\n ";
        chf();
        	switch(choice)
		{
			case 1: f2(); break;
			case 2: f3(); break;
			case 3: f4(); break;
			case 4: f5(); break;
			case 5: f6(); break;
		}
    }
	int chf()
	   { 
        try{
        	cin>>choice;
        	if(choice==2902){	system("cls");
        		admin();
        		system("cls");
        		return 0;
			}
        	system("cls");
        	if(choice > 5 || choice <=0 )
        	{
        		throw choice;
			}
		}
		catch(...){
			cout<<"THANK YOU!...FOR USING MY P.S. BANK.\n\n";
			return 0;
		}
		
	}	
	int addnl(int appt){
		char adaccn[20],adpasw[10];
		cout<<"\n\n\t\t***WELCOME TO PROVIDE ACC. BLOCK***\n\n\n";
		 cout<<"\n\n\n=========================================================\n\n\tACCOUNT NUMBER: \n\n";cin>>adaccn;cout<<adaccn;
		 cout<<"\n\tPASSWORD: \n\n";cin>>adpasw;cout<<adpasw;
		 cout<<"\nTOTAL BANKER :   "<<tb;cout<<"\nTOTAL WOMEN BANKER :   "<<wtb;cout<<"\n\n\t\tOK!..";
	if(s==NULL)
	{
		n=(struct bsecv*)malloc(sizeof(struct bsecv));
		n->vapp=appt;
	    strcpy(n->accn,adaccn);strcpy(n->pasw,adpasw);
		n->rp=0;n->cw=0;n->cd=0;n->cew=0;n->next=NULL;
		s=n;
	}
	else
	{
		t=s;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		n=(struct bsecv*)malloc(sizeof(struct bsecv));
		n->vapp=appt;
	    strcpy(n->accn,adaccn);strcpy(n->pasw,adpasw);
		n->rp=0;n->cw=0;n->cd=0;n->cew=0;n->next=NULL;
		t->next=n;
	}cout<<"\n\n\n\t\t\t***PROVIDED!..\n\n\n";getch();
	}
	
 
