#include <iostream.h>
#include <conio.h>
const int row=3;
const int col=3;

void display(char m[row][col]);
void play(char m[row][col],int plr);
int review(char m[row][col]);


void main()
{
	char answer;
   do{

	clrscr();
	char board[row][col];
	cout<<"Welcome to Tic-Tac-Toe!"<<endl;

	for(int r=0;r<3;r++)
	{
		for(int c=0;c<3;c++)
		{
			board[r][c]=' ';
		}
	}

	int winner=0;
	int player=1;
	int moves=0;

	do{
		clrscr();

		display(board);
		play(board,player);
		moves++;
		winner=review(board);

		if(player==1)
			player=2;
		else
			player=1;

	}while((winner==0)&&(moves<9));
	clrscr();
	display(board);
	cout<<endl;
	if(winner==1)
		cout<<"Player 1 wins!";
	else if(winner==2)
		cout<<"Player 2 wins!";
	else
		cout<<"Cat!";

	cout<<endl;
	cout<<"Would you like to play again? (y/n) ";
	cin>>answer;

   }while(answer=='y');

	getch();
}

void display(char m[row][col])
{
	cout<<endl;
	cout<<"     Welcome to Tic-Tac-Toe!"<<endl;
	cout<<endl;

	for(int r=0;r<3;r++)
	{
		cout<<"\t";
		for(int c=0;c<3;c++)
		{
			cout<<"["<<m[r][c]<<"]";
		}
		cout<<endl;
	}
}

void play(char m[row][col],int plr)
{
	cout<<endl;
	int r,c;
	do{
		cout<<"     Pick a row (0,1,2): ";
		cin>>r;
		cout<<"     Now pick a collum (0,1,2): ";
		cin>>c;

	}while(m[r][c]!=' ');

	if(plr==1)
		m[r][c]='X';
	else
		m[r][c]='0';

}

int review(char m[row][col])
{
	int oc=0,xc=0;

	for(int r=0;r<3;r++)
	{
		for(int c=0;c<3;c++)
		{
			if(m[r][c]=='X')
				xc++;
			if(m[r][c]=='0')
				oc++;
		}
		if(xc==3)
			return 1;
		if(oc==3)
			return 2;
		xc=0;
		oc=0;
	}

	for( r=0;r<3;r++)
	{
		for(int c=0;c<3;c++)
		{
			if(m[c][r]=='X')
				xc++;
			if(m[c][r]=='0')
				oc++;
		}
		if(xc==3)
			return 1;
		if(oc==3)
			return 2;
		xc=0;
		oc=0;
	}

	for(int c=0;c<3;c++)
		{
			if(m[c][c]=='X')
				xc++;
			if(m[c][c]=='0')
				oc++;
		}
		if(xc==3)
			return 1;
		if(oc==3)
			return 2;
		xc=0;
		oc=0;
	if((m[0][2]=='X')&&(m[1][1]=='X')&&(m[2][0]=='X'))
		return 1;
	if((m[0][2]=='0')&&(m[1][1]=='0')&&(m[2][0]=='0'))
		return 2;
	return 0;

}





