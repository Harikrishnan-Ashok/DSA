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

void rombus(int size)
{
	cout<<"\n 9. the diamond \n";
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
		cout<<"\n";
	}
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

void halfD(int size)
{
	cout<<"\n10.Half Diamond\n";
	int i;
	for(i=1;i<=size;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=0;i<size;i++)
	{
		for(int j=(size-1);j>i;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

	void numberPyramid(int size)
{
	cout<<"\n11.Number Pyramid\n";
	int p;
	for(int k=0;k<size;k++)
	{
		if(k%2==0){p=1;}
		else{p=0;}
		for(int i=0;i<=k;i++)
		{
			cout<<p<<" ";
			if(p==1){p=0;}
			else{p=1;}
		}
		cout<<"\n";
	}
}

void numberCone(int size)
{
	cout<<"\n12. Number Cone \n";
	for(int k=1;k<size;k++)
	{
		for(int i=1;i<=k;i++){cout<<i;}
		for(int j=0;j<(2*(size-k))-2;j++)
		{	
			cout<<" ";
		}
		for(int i=k;i>=1;i--){cout<<i;}
		cout<<"\n";
	}
}

void numberStairs(int size)
{
	cout<<"\n13. Number Stais\n";
	int var=1;
	for(int k=0;k<size;k++)
	{
		for(int i=0;i<=k;i++)
		{
			cout<<var<<" ";
			var++;
		}
		cout<<endl;
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
	rombus(size);
	halfD(size);
	numberPyramid(size);
	numberCone(size);
	numberStairs(size);
return 0;}
