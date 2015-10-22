/*
 * bank.h
 *
 *  Created on: Oct 21, 2015
 *      Author: Mariam
 */

#ifndef BANK_H_
#define BANK_H_



#include <iostream>
using namespace std;
class bank_acc{
private:
	string name;
	string accnum;
	double balance;
public:
	void deposit_balance(double x){
		balance=balance +x ;
	}
	double withdraw_balance(double x){
		if(x<0 || x>balance )
			return 0;
		else
			return balance-x ;
	}
	bank_acc(){
	   accnum = 2000 ;
	   balance = 2000 ;
	}


	bank_acc(string client,string num,double bal){
		name=client;
		accnum=num;
		balance=bal;
	}
};

#endif /* BANK_H_ */
