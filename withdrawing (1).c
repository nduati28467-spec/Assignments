/*
NAME-Sharon Murugi 
REG NO-CT101/G/28467/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION-withdrawing
 
*/
#include<stdio.h>
//main function
int main(){
	int account_balance=2800;
	int withdraw;
	printf("\nyour account balance is: %d",account_balance);
	
	while(account_balance>=0)
	{
		printf("\n amount to be withdrawn:");
		scanf(" %d",&withdraw);
		account_balance=account_balance-withdraw;
		
		printf("your new balance is %d",account_balance);
		
	}
	return 0;
}
