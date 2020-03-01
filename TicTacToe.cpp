#include<iostream>
#include<stdlib.h>
using namespace std;
char sq[10]={'0','1','2','3','4','5','6','7','8','9'};

void display_board(){
	
	cout<<"                WELCOME            "<<endl;
	cout<<"              TIC TAC TOE          "<<"\n\n";
	
	cout<<"Player1=X\nPlayer2=O\n\n";
	
	cout<<"             |             |            "<<endl;
	cout<<"             |             |            "<<endl;
	cout<<"      "<<sq[1]<<"      |      "<<sq[2]<<"      |      "<<sq[3]<<"       \n";
	cout<<"             |             |            "<<endl;
	cout<<"_____________|_____________|____________"<<endl;
	cout<<"             |             |            "<<endl;
	cout<<"             |             |            "<<endl;
	cout<<"      "<<sq[4]<<"      |      "<<sq[5]<<"      |      "<<sq[6]<<"       \n";
	cout<<"             |             |            "<<endl;
	cout<<"_____________|_____________|____________"<<endl;
	cout<<"             |             |            "<<endl;
	cout<<"             |             |            "<<endl;
	cout<<"      "<<sq[7]<<"      |      "<<sq[8]<<"      |      "<<sq[9]<<"       \n";
	cout<<"             |             |            "<<endl;
    cout<<"             |             |            "<<"\n\n\n\n";
	
}

int winpos()
{
	
	
    if(sq[1]==sq[2] && sq[2]==sq[3])
	  return 1;
	else if(sq[4]==sq[5] && sq[5]==sq[6])
	  return 1;
	else if(sq[7]==sq[8] && sq[8]==sq[9])
	  return 1;
	else if(sq[1]==sq[5] && sq[5]==sq[9])
	  return 1;
	else if(sq[3]==sq[5] && sq[5]==sq[7])
	  return 1;
	else if(sq[1]==sq[4] && sq[4]==sq[7])
	  return 1;
	else if(sq[2]==sq[5] && sq[5]==sq[8])
	  return 1;
	else if(sq[3]==sq[6] && sq[6]==sq[9])
	  return 1;
	  
	  else if(sq[1]=='1' || sq[2]=='2' || sq[3]=='3' || sq[4]=='4' || sq[5]=='5' || sq[6]=='6' || sq[7]=='7' || sq[8]=='8' || sq[9]=='9' )
	    return -1;
	  
	else
	 return 0;
	
	
	
}

int main()
{
	int turn=1;
	int pos=0;
	int win=-1;
	
	
	
	display_board();
	
	
	while(win==-1)
	{
			
		if(turn==1)
		{
			cout<<"Player 1's Turn Please enter a number:";
			cin>>pos;
			if(sq[pos]!='X' && sq[pos]!='O')
			{
				sq[pos]='X';
				turn=2;
				win=winpos();
				system("CLS");
				display_board();
			}
			else
			{
				system("CLS");
				display_board();
				cout<<"\nInvailid Choice Please Enter Again\n";
			}
		}
		
		else if(turn==2)
		{
			cout<<"Player 2's Turn Please enter a number:";
			cin>>pos;
			if(sq[pos]!='X' && sq[pos]!='O')
			{
			
				sq[pos]='O';
				win=winpos();
				turn=1;
				system("CLS");
				display_board();
				
			}
			else
			{
				system("CLS");
				display_board();
				cout<<"\n\nInvailid Choice Please Enter Again\n";
				
			}
	}
	
}

	if(win==0)
	{
		cout<<"Draw Match!\n THANK YOU";
	}
	else if(win==1)
	{
		if(turn==1)
		{
			cout<<"Congratulations!\n Player 2 has Won.";
		}
		else
		{
			cout<<"Congratulations!\n Player 1 has Won.";
		}
	}
}
