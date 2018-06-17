#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void pegCol(int &c1,int&c2,int&c3);
void pegOne(int &n1);
void pegTwo(int &n2,int ch);
void pegTri(int &n3,int ch1,int ch2);
void pegChk(int a1, int a2, int a3,int an1,int an2,int an3);

void main()
{
	clrscr();
	randomize();
	int c1,c2,c3,g1,g2,g3,count;
	pegCol(c1,c2,c3);
	count=0;

	cout<<"There are three pegs."<<endl;
	cout<<"Each peg can be any of five colors:"<<endl;
	cout<<"blue = 1"<<endl;
	cout<<"red = 2"<<endl;
	cout<<"green = 3"<<endl;
	cout<<"orange = 4"<<endl;
	cout<<"purple = 5"<<endl;
	cout<<"Your job is to find the correct color of each peg"<<endl;
	cout<<endl;
	cout<<endl;
	do
	{
		pegOne(g1);
		pegTwo(g2,g1);
		pegTri(g3,g1,g2);
		pegChk(g1,g2,g3,c1,c2,c3);
		count=count+1;

	}while((g1!=c1)||(g2!=c2)||(g3!=c3));

	cout<<"You broke the code in "<<count<<" guesses."<<endl;

	getch();
}

void pegCol(int & c1,int & c2,int & c3)
{
	c1=random(5)+1;
	do
	{
		c2=random(5)+1;
	}while(c2==c1);
	do
	{
		c3=random(5)+1;
	}while((c3==c1)||(c3==c2));
}

void pegOne(int&n1)
{
	int temp;
	cout<<"Peg one: ";
	cin>>temp;
	n1=temp;

}

void pegTwo(int&n2,int ch)
{
	int temp;
	do
	{cout<<"Peg two: ";
	cin>>temp;
	if (temp==ch)
		cout<<"Can't have duplicates."<<endl;
	}while(temp==ch);
	n2=temp;
}

void pegTri(int&n3,int ch1,int ch2)
{
	int temp;
	do
	{cout<<"Peg Three: ";
	cin>>temp;
	if ((temp==ch1)||(temp==ch2))
		cout<<"Can't have duplicates."<<endl;
	}while((temp==ch1)||(temp==ch2));
	n3=temp;
}

void pegChk(int a1, int a2, int a3,int an1, int an2, int an3)
{
	int p,c;
	p=0;
	c=0;

	if((a1==an1)||(a1==an2)||(a1==an3))
		c=c+1;
	if((a2==an1)||(a2==an2)||(a2==an3))
		c=c+1;
	if((a3==an1)||(a3==an2)||(a3==an3))
		c=c+1;
	if(a1==an1)
		p=p+1;
	if(a2==an2)
		p=p+1;
	if(a3==an3)
		p=p+1;

	cout<<"You have "<<p<<" pegs right and "<<c<<" colors right."<<endl;
}




