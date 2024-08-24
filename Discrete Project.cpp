#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	char choice;
	int row1,col1;
	int row2,col2;
	menu:
	cout<<"Select operation you want to perform on matrix:\n"
		  "\t1: Add two matrix\n"
		  "\t2: Subtract two matrix\n"
		  "\t3: Multiply two matrix\n"
		  "\t4: To find transpose\n"<<endl;
	choice=getche();
	switch(choice)
	{
		case '1':
				system("cls");	
				pdimensions:	
				  cout<<"\tEnter number of rows of 1st matrix"<<endl;
				  cin>>row1;
				  cout<<"\tEnter number of columns of 1st matrix"<<endl;
				  cin>>col1;
				  cout<<"\tEnter number of rows of 2nd matrix"<<endl;
				  cin>>row2;
				  cout<<"\tEnter number of columns of 2nd matrix"<<endl;
				  cin>>col2;
				  if(row1==row2 && col1==col2)
				  {
				  		system("cls");
					int arr1[row1][col1];
				  	cout<<"Enter elements of first matrix"<<endl;
				  	for(int i=0;i<row1;i++)
				  	{
				  		for(int j=0;j<col1;j++)
						  {
						  	cin>>arr1[i][j];
						  }	
					}
						system("cls");
					int arr2[row2][col2];
				  	cout<<"Enter elements of second matrix"<<endl;
				  	for(int i=0;i<row2;i++)
				  	{
				  		for(int j=0;j<col2;j++)
						  {
						  	cin>>arr2[i][j];
						  }	
					}
						system("cls");
						
					cout<<"Matrix 1 is:"<<endl;
					for(int i=0;i<row1;i++)
				  	{
				  		for(int j=0;j<col1;j++)
						  {
						  	cout<<arr1[i][j]<<"\t";
						  }	
						cout<<endl;
					}
					cout<<"Matrix 2 is:"<<endl;
					for(int i=0;i<row2;i++)
				  	{
				  		for(int j=0;j<col2;j++)
						  {
						  	cout<<arr2[i][j]<<"\t";
						  }	
						cout<<endl;
					}
					cout<<"Resultant Matrix is:"<<endl;
					int resultantarr[row1][col1];
					for(int i=0;i<row1;i++)
				  	{
				  		for(int j=0;j<col2;j++)
						  {
						  	resultantarr[i][j]=arr1[i][j]+arr2[i][j];
						  	cout<<resultantarr[i][j]<<"\t";
						  }	
						cout<<endl;
					}
				  }
				  else
				  {
				  	cout<<"Invalid dimensions of matrix\n"
				  		  "For addition of matrix No of rows and columns of both matrix should be equal\n"
				  		  "Enter again"<<endl;
				  		goto pdimensions;  
				  }
				break;
		case '2':
				system("cls");	
				ndimensions:	
				  cout<<"\tEnter number of rows of 1st matrix"<<endl;
				  cin>>row1;
				  cout<<"\tEnter number of columns of 1st matrix"<<endl;
				  cin>>col1;
				  cout<<"\tEnter number of rows of 2nd matrix"<<endl;
				  cin>>row2;
				  cout<<"\tEnter number of columns of 2nd matrix"<<endl;
				  cin>>col2;
				  if(row1==row2 && col1==col2)
				  {
				  		system("cls");
					int arr1[row1][col1];
				  	cout<<"Enter elements of first matrix"<<endl;
				  	for(int i=0;i<row1;i++)
				  	{
				  		for(int j=0;j<col1;j++)
						  {
						  	cin>>arr1[i][j];
						  }	
					}
						system("cls");
					int arr2[row2][col2];
				  	cout<<"Enter elements of second matrix"<<endl;
				  	for(int i=0;i<row2;i++)
				  	{
				  		for(int j=0;j<col2;j++)
						  {
						  	cin>>arr2[i][j];
						  }	
					}
						system("cls");
						
					cout<<"Matrix 1 is:"<<endl;
					for(int i=0;i<row1;i++)
				  	{
				  		for(int j=0;j<col1;j++)
						  {
						  	cout<<arr1[i][j]<<"\t";
						  }	
						cout<<endl;
					}
					cout<<"Matrix 2 is:"<<endl;
					for(int i=0;i<row2;i++)
				  	{
				  		for(int j=0;j<col2;j++)
						  {
						  	cout<<arr2[i][j]<<"\t";
						  }	
						cout<<endl;
					}
					cout<<"Resultant Matrix is:"<<endl;
					int resultantarr[row1][col1];
					for(int i=0;i<row1;i++)
				  	{
				  		for(int j=0;j<col2;j++)
						  {
						  	resultantarr[i][j]=arr1[i][j]-arr2[i][j];
						  	cout<<resultantarr[i][j]<<"\t";
						  }	
						cout<<endl;
					}
				  }
				  else
				  {
				  	cout<<"Invalid dimensions of matrix\n"
				  		  "For Subtraction of matrix No of rows and columns of both matrix should be equal\n"
				  		  "Enter again"<<endl;
				  		goto ndimensions;  
				  }
				break;
		case '3':
				system("cls");	
				mdimensions:	
				  cout<<"\tEnter number of rows of 1st matrix"<<endl;
				  cin>>row1;
				  cout<<"\tEnter number of columns of 1st matrix"<<endl;
				  cin>>col1;
				  cout<<"\tEnter number of rows of 2nd matrix"<<endl;
				  cin>>row2;
				  cout<<"\tEnter number of columns of 2nd matrix"<<endl;
				  cin>>col2;
				  if(col1==row2)
				  {
				  		system("cls");
					int arr1[row1][col1];
				  	cout<<"Enter elements of first matrix"<<endl;
				  	for(int i=0;i<row1;i++)
				  	{
				  		for(int j=0;j<col1;j++)
						  {
						  	cin>>arr1[i][j];
						  }	
					}
						system("cls");
					int arr2[row2][col2];
				  	cout<<"Enter elements of second matrix"<<endl;
				  	for(int i=0;i<row2;i++)
				  	{
				  		for(int j=0;j<col2;j++)
						  {
						  	cin>>arr2[i][j];
						  }	
					}
						system("cls");
					int resultantarr[row1][col2];
					for(int i=0;i<row1;i++)
					{
						for(int j=0;j<col2;j++)
						{
							resultantarr[i][j]=0;
						}	
					}	
				  	for(int i=0;i<row1;i++) 
					{
       				    for(int j=0;j<col2;j++) 
						{
               				for(int k=0;k<col1;k++)
               				{
                  			  resultantarr[i][j] += (arr1[i][k] * arr2[k][j]);
                  			}
           				}
        			}
					cout<<"Matrix 1 is:"<<endl;
					for(int i=0;i<row1;i++)
				  	{
				  		for(int j=0;j<col1;j++)
						  {
						  	cout<<arr1[i][j]<<"\t";
						  }	
						cout<<endl;
					}
					cout<<"Matrix 2 is:"<<endl;
					for(int i=0;i<row2;i++)
				  	{
				  		for(int j=0;j<col2;j++)
						  {
						  	cout<<arr2[i][j]<<"\t";
						  }	
						cout<<endl;
					}
					cout<<"Resultant Matrix is:"<<endl;
					for(int i=0;i<row1;i++)
				  	{
				  		for(int j=0;j<col2;j++)
						  {
						  	cout<<resultantarr[i][j]<<"\t";
						  }	
						cout<<endl;
					}
				  }
				else
				{
					cout<<"Invalid dimensions of matrix\n"
				  		  "For Multiplication of matrix No. of columns of first matrix and no of rows of second matrix should be equal\n"
				  		  "Enter again"<<endl;
				  		goto mdimensions; 
					
				}
				break;
		default:
			cout<<"/nInvalid choice\n"
				  "Enter Again\n"<<endl;
				goto menu;
	}
 return 0;
}
