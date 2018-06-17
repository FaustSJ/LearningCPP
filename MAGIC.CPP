//Date written: Spring 2012    Comments added in 2018
//Programmer: Sarah Faust
/*This program accepts a number from the user and creates a numerical fractal
of sorts out of a matrix of size numberXnumber.
*/

#include <iostream.h>
#include <conio.h>

void main()
{
		clrscr();

	//gets a number from the user
	int num;
	cout<<"Welcome to Magic Squares!"<<endl;
	cout<<"choose and odd number between 3 and 20: ";
	cin>>num;
	cout<<endl;

	//creates a matrix
	int m[20][20];
	
	//num, being a odd number, it's decimal result will always round down
	int a=num/2;

	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			m[j][i]=0;
		}
	}

    //m[x][y]
	m[0][a]=1;
	//m[max x][y]
	m[num-1][a+1]=2;

	int add,r,c,d;
	r=num-2;
	c=a+2;
	add=3;
	d=num*num;

	do{
		if((r<0)&&(c>num-1))
		{
			r=1;
			c=num-1;
		}

		if(c>num-1)
		{	c=0;
		}
		if(r<0)
		{	r=num-1;
		}
		if(m[r][c]!=0)
		{	r+=2;
			c--;
		}

		m[r][c]=add;
		add++;
		c++;
		r--;
	}while(add<=d);

    //although the matrix is 20x20, only numxnum is printed
	for(int i=0; i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			cout<<"["<<m[j][i]<<"] ";
		}
		cout<<endl;
	}

    //pauses the console until a key is hit
	getch();
}