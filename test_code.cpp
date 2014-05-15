// test_code.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;

/*
Sample input:
6
1 1 2 2 3 4
Sample output:
4
Explanation:
The distinct triplets are
(1,2,3)
(1,2,4)
(1,3,4)
(2,3,4)

*/
void ascending_tripletes_all(int a[], int sizea)
{
	int triple[3];
	int j =0;int k =0;
	int flag=0;
	for(int k=0;k < 3;k++)
	{
		triple[k]=0;
	}
		
	for(int i=0; i<sizea ; i++)
	{
		if (a[i] == a[i+1])
			continue;
		for(int j=i+1; j < sizea; j++)
		{
			if (a[j] == a[j+1])
				continue;
			for(int k=j+1;k < sizea; k++)
			{
				if (a[k] == a[k+1])
					continue;
				//cout<<"count" << i << j << k << "members"<< a[i] << a[j] << a[k]<< endl;
				if(a[i]<a[j] && a[j] < a[k]){
					//cout<<a[i]<<a[j]<<a[j+1] <<endl;
					triple[0] = a[i];
					triple[1] = a[j];
					triple[2] = a[k];
				 cout<< triple[0] << triple[1] << triple [2] << endl;
				}
			}
		}

	}
}

/*

Input = a= {1,1,2,3,6,5}
O/p=> {1,2,3,5,6}
for a array with duplicate elements arange in ascending order
*/



int * sort_Numbers(int a[], int size)
{
	int m =0;
	int c[5]={0};
	int k =0;
	for(int i=0; i< size && m < 4 ;)
	{
		for(int j=i+1; j < size ; j++)
		{
			if(a[i]== a[j])
			{
				//cout <<"Elmenets";
				i++;
				continue;
			
			}
			else
			{
			   //cout<< "i" << a[i]<<endl;				
				c[m++]= a[i++];
				/*Not sure why the c[m] is showing 0*/
				//cout<<"c"<<c[m]<<m <<endl;		
			}
		}
	}

	int *Newarry = (int*) malloc(sizeof(int)*m);
	for(int l=0; l < m; l++)
	{
		Newarry[l] = c[l];
		cout<<Newarry[l]<<endl;
	}
	cout<<endl;

//arange the array in Increasing order
		
	for(int i=0; i<m; i++)
	{
		for(int j=0; j < m; j++)
		{
			if(Newarry[i] < Newarry[j])
			{
				cout<<"Swap"<<Newarry[i]<<Newarry[j]<<endl;
				k = Newarry[i];
				Newarry[i]=Newarry[j];
				Newarry[j]=k;
			}
			
		}
	}

	for(int l=0; l < m; l++)
	{
		
		cout<<Newarry[l];

	}
	 cout<<endl;
	return Newarry;

}


/*
array a={1,2,4,6,3,8}
O/p: {2,1,6,4,8,3}

Exchange the pair of Numbers to form the largest possible Number which can be formed

*/



int * maximize(int a[], int size)
{

	for(int i=0; i<size ; i++)
	{
		if((a[i] < a[i+1]) && (i%2==0))
		{
			int temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}

	}
		return a;

}


/*
Postional array reversal 
 linked list: 1 -> 2 -> 3-> 4-> 5-> 6 reverse the list each N nodes. eg. if N = 3 the output should 
 be 3-> 2-> 1-> 6-> 5-> 4. Also provide a mechanism to prevent errors. For the same example, if N = 4,
 the result should be: 4-> 3-> 2-> 1-> 5-> 6 (The last two nodes can't be reversed)
 */

class Llist{
				int data;
				llist *ptr;
public:
		Llist( )


};
void Link-revr-pos(int a[],int size)
{
	

}


int main()
{

	int a[6]= {1,1,4,2,3,4};
	
	//ascending_tripletes_all(a,6);
	//int *c = maximize(a,6);
	//int *c  = sort_Numbers(a,6);



	
	for(int i=0; i<4 ;i++)
	{
		cout<<c[i];
	}
	getch();

}