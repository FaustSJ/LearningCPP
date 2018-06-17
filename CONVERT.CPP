#include <iostream.h>
#include <conio.h>

void DtoB(int d);
void BtoD(char b1,char b2,char b3, char b4, char b5, char b6, char b7, char b8);
void DtoH(int d);
void HtoD(char h1, char h2);
void BtoH(char b1,char b2,char b3, char b4, char b5, char b6, char b7, char b8);
void HtoB(char h1, char h2);

void main()
{       char an;
	do{
	clrscr();
	int n;
	char b1,b2,b3,b4,b5,b6,b7,b8;
	int cho;
	char h1, h2;

	cout<<"Welcom to the conversion system!"<<endl;
	cout<<"If you would like to convert..."<<endl;
	cout<<"Decimal to binary, type 1"<<endl;
	cout<<"Binary to decimal, type 2"<<endl;
	cout<<"Decimal to hexidecimal, type 3"<<endl;
	cout<<"Hexidecimal to decimal, type 4"<<endl;
	cout<<"Binary to hexidecimal, type 5"<<endl;
	cout<<"Hexidecimal to binary, type 6"<<endl;
	cout<<endl;
	cin>>cho;


	if (cho==1)
	{

		do{
			cout << "Please enter a number (max of 255): ";
			cin>>n;
			if ((n>255)||(n<=0))
				cout<<"ERROR. Type a new number."<<endl;
		}while((n>255)&&(n<=0));
		cout<<endl;

		DtoB(n);
	}

	if (cho==2)
	{
		cout<<"please enter a binary number,"<<endl;
		cout<<"type out the full 8 digit version: ";
		cin>>b1>>b2>>b3>>b4>>b5>>b6>>b7>>b8;
		cout<<endl;
		BtoD(b1,b2,b3,b4,b5,b6,b7,b8);
	}

	if (cho==3)
	{
		cout<<"Please enter a number that is not over 272: ";
		cin>>n;
		cout<<endl;
		DtoH(n);
	}

	if (cho==4)
	{
		cout<<"Please enter the two charcters or digits: "<<endl;
		cin>>h1>>h2;
		cout<<endl;
		HtoD(h1,h2);
	}

	if (cho==5)
	{
		cout<<"please enter a binary number,"<<endl;
		cout<<"type out the full 8 digit version: ";
		cin>>b1>>b2>>b3>>b4>>b5>>b6>>b7>>b8;
		cout<<endl;
		BtoH(b1,b2,b3,b4,b5,b6,b7,b8);
	}

	if (cho==6)
	{
		cout<<"Please enter the two charcters or digits: "<<endl;
		cin>>h1>>h2;
		cout<<endl;
		HtoB(h1,h2);
	}
	cout<<endl;
	cout<<"Would you like to convert something else? (Y/N) : ";
	cin>>an;
	}while(an=='Y');
	getch();
}

void DtoB(int d)
{
	int b1, b2,b3,b4,b5,b6,b7,b8,bc;
	bc=d;

	b1=bc%2;
	bc=bc/2;
	b2=bc%2;
	bc=bc/2;
	b3=bc%2;
	bc=bc/2;
	b4=bc%2;
	bc=bc/2;
	b5=bc%2;
	bc=bc/2;
	b6=bc%2;
	bc=bc/2;
	b7=bc%2;
	bc=bc/2;
	b8=bc%2;

	cout<<"The binary version of "<<d<<" is:"<<endl;
	cout<<b8<<b7<<b6<<b5<<b4<<b3<<b2<<b1<<endl;

}

void HtoB(char h1, char h2)
{
	int a1,c2,c3;


	switch (h1)
	{
		case '1': a1=16*1;
			break;
		case '2': a1=16*2;
			break;
		case '3': a1=16*3;
			break;
		case '4': a1=16*4;
			break;
		case '5': a1=16*5;
			break;
		case '6': a1=16*6;
			break;
		case '7': a1=16*7;
			break;
		case '8': a1=16*8;
			break;
		case '9': a1=16*9;
			break;
		case 'A': a1=16*10;
			break;
		case 'B': a1=16*11;
			break;
		case 'C': a1=16*12;
			break;
		case 'D': a1=16*13;
			break;
		case 'E': a1=16*14;
			break;
		case 'F': a1=16*15;
			break;
		case 'G': a1=16*16;
			break;
	}

	switch (h2)
	{
		case '1': c2=1;
			break;
		case '2': c2=2;
			break;
		case '3': c2=3;
			break;
		case '4': c2=4;
			break;
		case '5': c2=5;
			break;
		case '6': c2=6;
			break;
		case '7': c2=7;
			break;
		case '8': c2=8;
			break;
		case '9': c2=9;
			break;
		case 'A':c2=10;
			break;
		case 'B': c2=11;
			break;
		case 'C': c2=12;
			break;
		case 'D': c2=13;
			break;
		case 'E': c2=14;
			break;
		case 'F': c2=15;
			break;
		case 'G': c2=16;
			break;
	}
	c3=a1+c2;

	int b1, b2,b3,b4,b5,b6,b7,b8,bc;
	bc=c3;

	b1=bc%2;
	bc=bc/2;
	b2=bc%2;
	bc=bc/2;
	b3=bc%2;
	bc=bc/2;
	b4=bc%2;
	bc=bc/2;
	b5=bc%2;
	bc=bc/2;
	b6=bc%2;
	bc=bc/2;
	b7=bc%2;
	bc=bc/2;
	b8=bc%2;

	cout<<"The binary version of "<<h1<<h2<<" is:"<<endl;
	cout<<b8<<b7<<b6<<b5<<b4<<b3<<b2<<b1<<endl;

}

void BtoD(char b1,char b2,char b3, char b4, char b5, char b6, char b7, char b8)
{
	int c;
	c=0;

	if (b1=='1')
		c=c+128;
	if (b2=='1')
		c=c+64;
	if (b3=='1')
		c=c+32;
	if (b4=='1')
		c=c+16;
	if (b5=='1')
		c=c+8;
	if (b6=='1')
		c=c+4;
	if (b7=='1')
		c=c+2;
	if (b8=='1')
		c=c+1;
	cout<<"The digit value of "<<b1<<b2<<b3<<b4<<b5<<b6<<b7<<b8<<" is "<<c<<endl;
}

void DtoH(int d)
{
	int c1,c2;

	c1=d/16;
	c2=d%16;

	switch (c1)
	{
		case 1: cout<<c1;
			break;
		case 2: cout<<c1;
			break;
		case 3: cout<<c1;
			break;
		case 4: cout<<c1;
			break;
		case 5: cout<<c1;
			break;
		case 6: cout<<c1;
			break;
		case 7: cout<<c1;
			break;
		case 8: cout<<c1;
			break;
		case 9: cout<<c1;
			break;
		case 10: cout<<"A";
			break;
		case 11: cout<<"B";
			break;
		case 12: cout<<"C";
			break;
		case 13: cout<<"D";
			break;
		case 14: cout<<"E";
			break;
		case 15: cout<<"F";
			break;
		case 16: cout<<"G";
			break;
	}

	switch (c2)
	{
		case 1: cout<<c2;
			break;
		case 2: cout<<c2;
			break;
		case 3: cout<<c2;
			break;
		case 4: cout<<c2;
			break;
		case 5: cout<<c2;
			break;
		case 6: cout<<c2;
			break;
		case 7: cout<<c2;
			break;
		case 8: cout<<c2;
			break;
		case 9: cout<<c2;
			break;
		case 10: cout<<"A";
			break;
		case 11: cout<<"B";
			break;
		case 12: cout<<"C";
			break;
		case 13: cout<<"D";
			break;
		case 14: cout<<"E";
			break;
		case 15: cout<<"F";
			break;
		case 16: cout<<"G";
			break;
	}

}

void HtoD(char h1, char h2)
{
	int a1,c2,c3;


	switch (h1)
	{
		case '1': a1=16*1;
			break;
		case '2': a1=16*2;
			break;
		case '3': a1=16*3;
			break;
		case '4': a1=16*4;
			break;
		case '5': a1=16*5;
			break;
		case '6': a1=16*6;
			break;
		case '7': a1=16*7;
			break;
		case '8': a1=16*8;
			break;
		case '9': a1=16*9;
			break;
		case 'A': a1=16*10;
			break;
		case 'B': a1=16*11;
			break;
		case 'C': a1=16*12;
			break;
		case 'D': a1=16*13;
			break;
		case 'E': a1=16*14;
			break;
		case 'F': a1=16*15;
			break;
		case 'G': a1=16*16;
			break;
	}

	switch (h2)
	{
		case '1': c2=1;
			break;
		case '2': c2=2;
			break;
		case '3': c2=3;
			break;
		case '4': c2=4;
			break;
		case '5': c2=5;
			break;
		case '6': c2=6;
			break;
		case '7': c2=7;
			break;
		case '8': c2=8;
			break;
		case '9': c2=9;
			break;
		case 'A':c2=10;
			break;
		case 'B': c2=11;
			break;
		case 'C': c2=12;
			break;
		case 'D': c2=13;
			break;
		case 'E': c2=14;
			break;
		case 'F': c2=15;
			break;
		case 'G': c2=16;
			break;
	}
	c3=a1+c2;
	cout<<"The decimal version is: "<<endl;
	cout<<c3;

}

void BtoH(char b1,char b2,char b3, char b4, char b5, char b6, char b7, char b8)
{
	int c1, c2;
	c1=0;
	c2=0;

	if (b1=='1')
		c1=c1+8;
	if (b2=='1')
		c1=c1+4;
	if (b3=='1')
		c1=c1+2;
	if (b4=='1')
		c1=c1+1;
	if (b5=='1')
		c2=c2+8;
	if (b6=='1')
		c2=c2+4;
	if (b7=='1')
		c2=c2+2;
	if (b8=='1')
		c2=c2+1;

	cout<<"The hexidecimal version is: "<<endl;

	switch (c1)
	{
		case 1: cout<<c1;
			break;
		case 2: cout<<c1;
			break;
		case 3: cout<<c1;
			break;
		case 4: cout<<c1;
			break;
		case 5: cout<<c1;
			break;
		case 6: cout<<c1;
			break;
		case 7: cout<<c1;
			break;
		case 8: cout<<c1;
			break;
		case 9: cout<<c1;
			break;
		case 10: cout<<"A";
			break;
		case 11: cout<<"B";
			break;
		case 12: cout<<"C";
			break;
		case 13: cout<<"D";
			break;
		case 14: cout<<"E";
			break;
		case 15: cout<<"F";
			break;
	}

	switch (c2)
	{
		case 1: cout<<c2;
			break;
		case 2: cout<<c2;
			break;
		case 3: cout<<c2;
			break;
		case 4: cout<<c2;
			break;
		case 5: cout<<c2;
			break;
		case 6: cout<<c2;
			break;
		case 7: cout<<c2;
			break;
		case 8: cout<<c2;
			break;
		case 9: cout<<c2;
			break;
		case 10: cout<<"A";
			break;
		case 11: cout<<"B";
			break;
		case 12: cout<<"C";
			break;
		case 13: cout<<"D";
			break;
		case 14: cout<<"E";
			break;
		case 15: cout<<"F";
			break;
	}
}












