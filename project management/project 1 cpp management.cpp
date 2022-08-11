#include<iostream>
using namespace std;

 int main(){
 	int quant;
 	int choice;
 	// quantity
 	int qrooms=0, qpasta=0, qburger=0, qnoodles=0, qshake=0, qchicken=0;
 	// food items shold
 	int srooms=0, spasta=0, sburger=0, snoodles=0, sshake=0, schicken=0;
 	// total price of items
 	int total_rooms=0, total_pasta=0, total_burger=0, total_noodles=0, total_shake=0,total_chicken=0;
 	
 	cout<<"\n\t quantity of iteams we have";
 	cout<<"\n room avaliable: ";
 	cin>>qrooms;
 	cout<<"\n quantity of pasta:";
 	cin>>qpasta;
 	cout<<"\n quantity of burger:";
 	cin>>qburger;
 	cout<<"\n quantity of noodles:";
 	cin>>qnoodles;
 	cout<<"\n quantity of shake:";
 	cin>>qshake;
 	cout<<"\n quantity of chicken: ";
 	cin>>qchicken;
 	
 	m:
 	cout<<"\n\t\t\t please select from the menu option";
 	cout<<"\n\n1) rooms";
 	cout<<"\n2)pasta";
 	cout<<"\n3) burger";
 	cout<<"\n4)noodles";
 	cout<<"\n5) shake";
 	cout<<"\n6) chicken";
 	cout<<"\n7) infomation regarding sales and collection";
 	cout<<"\n8) exit";
 	
 	cout<<"\n\n please enter your choice!";
 	cin>>choice;
 	
 	switch( choice)
 	{
 	 case 1:
 			cout<<"\n\n enter the number of rooms you want:";
 			cin>>quant;
 			if(qrooms-srooms>=quant)
 			{
 				srooms=srooms+quant;
 				total_rooms= total_rooms+quant*1200;
 				cout<<"\n\n\t\t"<<quant<<" room \ rooms have been alloted to you!";
 				
			 }
			 else
			 cout<<"\n\t\only"<<qrooms-srooms<<" room remaining in hotal";
			 break;
			 
	 case 2:
 			cout<<"\n\n enter the quantity of pasta:";
 			cin>>quant;
 			if(qpasta-spasta>=quant)
 			{
 				spasta=spasta+quant;
 				
				 total_pasta= total_pasta+quant*150;
 				cout<<"\n\n\t\t"<<quant<<" number of pasta order!";
 				
			 }
			 else
			 cout<<"\n\t\only"<<qpasta-spasta<<" pasta remaining in hotal";
			 break;
	 
	 case 3:
 			cout<<"\n\n enter the quantity of burger:";
 			cin>>quant;
 			if(qburger-sburger>=quant)
 			{
 				sburger=sburger+quant;
 				total_burger= total_burger+quant*120;
 				cout<<"\n\n\t\t"<<quant<<"number of burger order !";
 				
			 }
			 else
			 cout<<"\n\t\only"<<qburger-sburger<<" burger remaining in hotal";
			 break;
			 
			 
	 case 4:
 			cout<<"\n\n enter the quantity of noodles:";
 			cin>>quant;
 			if(qnoodles-snoodles>=quant)
 			{
 				snoodles=snoodles+quant;
 				total_noodles= total_noodles+quant*130;
 				cout<<"\n\n\t\t"<<quant<<"number of noodles order !";
 				
			 }
			 else
			 cout<<"\n\t\only"<<qnoodles-snoodles<<" noodles remaining in hotal";
			 break;
			 
			 
	 case 5:
 			cout<<"\n\n enter the quantity of shake:";
 			cin>>quant;
 			if(qshake-sshake>=quant)
 			{
 				sshake=sshake+quant;
 				total_shake= total_shake+quant*160;
 				cout<<"\n\n\t\t"<<quant<<"number of shake order !";
 				
			 }
			 else
			 cout<<"\n\t\only"<<qshake-sshake<<" shake remaining in hotal";
			 break;
 	case 6:
 			cout<<"\n\n enter the quantity of chicken:";
 			cin>>quant;
 			if(qchicken-schicken>=quant)
 			{
 				schicken=schicken+quant;
 				total_chicken= total_chicken+quant*200;
 				cout<<"\n\n\t\t"<<quant<<"number of chicken order !";
 				
			 }
			 else
			 cout<<"\n\t\only"<<qchicken-schicken<<" chicken remaining in hotal";
			 break;
	case 7:
		cout<<"\n\t\tdetails of sales and collection";
		cout<<"\n\n number of rooms we had : "<<qrooms;
		cout<<"\n\n number of rooms we give for rent "<<srooms;
		cout<<"\n\n remaining rooms: "<<qrooms-srooms;
		cout<<"\n\n total rooms collection for a day : "<<total_rooms;
		
    	cout<<"\n\n number of pasta we had : "<<qpasta; 
		cout<<"\n\n number of pasta we sold "<<spasta;
		cout<<"\n\n remaining pasta: "<<qpasta-spasta;
		cout<<"\n\n total pasta collection for a day : "<<total_pasta;
		
		cout<<"\n\n number of burger we had : "<<qburger; 
		cout<<"\n\n number of burger we sold "<<sburger;
		cout<<"\n\n remaining burger: "<<qburger-sburger;
		cout<<"\n\n total  burger collection for a day : "<<total_burger;
		
		
		cout<<"\n\n number of noodles we had : "<<qnoodles; 
		cout<<"\n\n number of noodles we sold "<<snoodles;
		cout<<"\n\n remaining noodles: "<<qnoodles-snoodles;
		cout<<"\n\n total noodles collection for a day : "<<total_noodles;
		
		
		cout<<"\n\n number of shake we had : "<<qshake; 
		cout<<"\n\n number of shake we sold "<<sshake;
		cout<<"\n\n remaining shake: "<<qshake-sshake;
		cout<<"\n\n total shake collection for a day : "<<total_shake;
		
		cout<<"\n\n number of chicken we had : "<<qchicken; 
		cout<<"\n\n number of chicken we sold "<<schicken;
		cout<<"\n\n remaining chicken: "<<qchicken-schicken;
		cout<<"\n\n total chicken collection for a day : "<<total_chicken;
		
		cout<<"\n\n\n total collection for the day"<<total_rooms+total_pasta+total_burger+total_noodles+total_shake+total_chicken;
		break;
		case 8:
			exit(0);
			default:
				cout<<"\n please select the number mentioned above!";	
		
}
goto m;
 }