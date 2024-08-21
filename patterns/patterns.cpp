#include<iostream>
#include<string>
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

void alphaStairs(int size)
{
	cout<<"\n14. Alphabet Stairs\n";
	string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i=1;i<=size;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<alpha[j]<<" ";
		}
		cout<<endl;
	}
}

void alphaDecStairs(int size)
{
	cout<<"\n15. Alphabet DEC Stairs";
	string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i=size;i>=0;i--)
	{
		cout<<endl;
		for(int j=0;j<i;j++)
		{
			cout<<alpha[j]<<" ";
		}
	}
}

void alphaSameStairs(int size)
{
	cout<<"\n16. Alphabet DEC Stairs\n";
	string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i=0;i<=size;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<alpha[i-1]<<" ";
		}
		cout<<endl;
	}
}

void test(int size)
{
	int n=size;
	cout<<"\n1. Alphabet DEC Stairs\n";
	 for(int i=1;i<2*n;i++){
          for(int j =1;j<i+1;j++){
              if(i>n){
                //   int number = 2*n-i;
                  for(int k = 1;k<=(2*n)-i;k++)
                  {

                      cout<<"*";
                  }
				  break;
                }
                else{
                cout<<"*";

            }
          }
          cout<<"\n";
        }
}

void alphaPyramid(int size){
	string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout<<"\n17. Alphabet Pyramid\n";
	int k=0;
	for(int i=0;i<size;i++)
	{
		for(int j=1;j<(size-i);j++)
		{
			cout<<" ";
		}
		for(;k<=i;k++)
		{
			cout<<alpha[k];
		}
		k=k-1;
		for(;k>0;k--)
		{
			cout<<alpha[k-1];
		}
		cout<<"\n";
	}
}

void revAlpha(int size){
	string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout<<"\n18.revAlphabets Stairs\n";
	for(int k=0;k<=size;k++)
	{
		for(int i=0;i<k;i++)
		{
			cout<<alpha[(size-1)-i]<<" ";
		}
		cout<<endl;
			
	}
}

void hole(int size){
	int sp=0;
	for(int k=0;k<size;k++)
	{
		cout<<"\n";
		for(int i=0;i<(size-k);i++)
		{
			cout<<"*";
		}

		for(int i=0;i<2*k;i++)
		{
			cout<<" ";
		}

		for(int i=0;i<(size-k);i++)
		{
			cout<<"*";
		}
	}
	for(int k=size;k>=0;k--)
	{
		for(int i=0;i<(size-k);i++)
		{
			cout<<"*";
		}

		for(int i=0;i<2*k;i++)
		{
			cout<<" ";
		}

		for(int i=0;i<(size-k);i++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}

}

void rectangle(int size){
	cout<<"\n20. Rectangle\n";
	int sp;
	for(int i=0;i<size;i++)
	{
		sp=(i==0||i==size-1)? 0:size-2;
		if(sp==0)
		{
			for(int j=0;j<size;j++)
				cout<<"*";
		}
		else
		{
			cout<<"*";
			for(int j=0;j<sp;j++)
				cout<<" ";
			cout<<"*";
		}
		cout<<"\n";

	}
}

int main(){
	
	int size;
	cout<<"input the number: ";
	cin>>size;
	/* brickofStars(size); */ 
	/* descStars(size); */
	/* descNumber(size); */
	/* descNumberFixed(size); */
	/* revStars(size); */
	/* revNumbers(size); */
	/* chrisTree(size); */
	/* revChrisTree(size); */
	/* rombus(size); */
	/* halfD(size); */
	/* numberPyramid(size); */
	/* numberCone(size); */
	/* numberStairs(size); */
	/* alphaStairs(size); */
	/* alphaDecStairs(size); */
	/* alphaSameStairs(size); */
	/* /1* test(size); *1/ */
	/* alphaPyramid(size); */
	/* revAlpha(size); */
	/* hole(size); */
	/* butterfly(size) */
	rectangle(size);
return 0;}
