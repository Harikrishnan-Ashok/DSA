#include<iostream>
using namespace std;

void brickofStars(int size)
{
	cout <<"\n1.block of stars\n";
	for(int i=0;i<size;i++)
	{
		for (int j=0;j<size;j++)
		{
			cout <<"*";
		}
		cout<<"\n";
	}
}

void descStars(int size)
{
	cout<<"\n2.desending stars\n";
	for (int i=1;i<=size;i++)
	{
		for (int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}

void descNumber(int size)
{
	cout<<"\n3.desending Numbers\n";
	for (int i=0;i<=size;i++)
	{
		for (int j=1;j<i+1;j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
}

void descNumberFixed(int size)
{
	cout<<"\n4.desending Numbers Fixed\n";
	for (int i=1;i<=size;i++)
	{
		for (int j=0;j<i;j++)
		{
			cout<<i;
		}
		cout<<"\n";
	}
}

void revStars(int size)
{
	cout<<"\n5.Reverse Stars\n";
	for(int i=size;i>0;i--)
	{
		for(int j=i;j>0;j--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}

void revNumbers(int size)
{
	cout<<"\n6.Reverse Numbers\n";
	for(int i=size;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
}

void chrisTree(int size)
{
	cout<<"\n7.Christmas Tree \n";
	int i;
	for(int k=(size-1);k>=0;k--)
	{
		int sp=0;
		for( i=0;i<(k);i++)
		{
			cout<<" ";
			sp++;
		}
		for(int j=0;j<2*(size-i)-1;j++)
		{
			cout<<"*";
		}
		/* for(i=0;i<(k);i++) */
		/* { */
		/* 	cout<<" "; */
		/* } */
		cout<<"\n";
	}
}

void revChrisTree(int size)
{
	cout<<"\n8.Reverse Christmas Tree\n";
	for(int i=0;i<size;i++)
	{
		int sp=0;
		for(int j=0;j<i;j++)
		{
			cout<<" ";
			sp++;
		}
		for(int j=0;j<2*(size-sp)-1;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}


int main(){
	
	int size;
	cout<<"input the number: ";
	cin>>size;
	brickofStars(size); 
	descStars(size);
	descNumber(size);
	descNumberFixed(size);
	revStars(size);
	revNumbers(size);
	chrisTree(size);
	revChrisTree(size);
return 0;}
