#include<stdio.h>
int choose_bank();
int a;
int main()
{
	int n;
	int op;
	do
	{
	printf("\n\nSelect the Bank\n");
	printf("-------------------------------------------------------------------------------\n");
	printf("(1) State Bank of India\n");
	printf("(2) Canara Bank\n");
	printf("(3) City Uninon Bank\n");
	printf("(4) Indian Overseas Bank\n");
	printf("(5) Punjab National Bank\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("Enter the option:");
	scanf("%d",&n);
		switch(n)
			{
				case 1:
					{
						a=choose_bank();
						switch(a)
							{
								case 1:
									{
										printf("\n-Maximum balance /amount No upper limit.\n-No Cheque Book facility available.\n-Withdrawals only using withdrawal form at Branches or through ATMs.\n-Basic Rupay ATM-cum-debit card will be issued.\n");
										printf("-Savings Bank Deposits =8.85 percent* p.a.\n");
										break;
									}
								case 2:
									{
										printf("\n-Low Monthly Average Balance: Rs 5,000.\n-Free Cash Deposit upto Rs 5,00,000/- per Month.\n-Convenience to withdraw and deposit cash at all 22000+ SBI Bank branches.\n-Free Cash Withdrawal from Home Branch.\n");
										printf("-Regular Current Account = 8.85 percent* p.a\n");
										break;
									}
								case 3:
									{
										printf("\n-Under this scheme, the SBI FD interest is paid only upon maturity.\n-Nomination and loan facility is available.\n-Auto-renewal facility is available on the deposit.\n");
										printf("-FD interest rates of 3.00 percent-7.10 percent p.a.\n");
										break;
									}
								case 4:
									{
										printf("\n-Zero Balance Account.\n-No Monthly Average Balance charges.\n-Employee Reimbursement Account (Reimbursement Current Account).\n-Auto Sweep Facility.\n");
										printf("-ROI ranges from 9.60 percent to 11.10 percent p.a\n");
										break;
									}
								default:
										{
											printf("\nEnter the valid Code.");
										}
							}
						break;
						}
				case 2:
						{
							a=choose_bank();
							switch(a)
							{
								case 1:
									{
										printf("\n-ATM cum Debit card.\n-Deposit and withdrawal of cash at branch and ATM at no charges.\n-Passbook, Internet banking, Mobile banking, fund transfers via NEFT/RTGS\n");
										printf("-Savings Bank Deposits =2.90 percent* p.a.\n");
										break;
									}
								case 2:
									{
										printf("\n-Low Monthly Average Balance: Rs 5,000.\n-Free Cash Deposit upto Rs 5,00,000/- per Month.\n-Convenience to withdraw and deposit cash at all 22000+ SBI Bank branches.\n-Free Cash Withdrawal from Home Branch.\n");
										printf("-Regular Current Account = 3.10 percent* p.a\n");
										break;
									}
								case 3:
									{
										printf("\n-An interest rate of 0.50percent or higher than the applicable Canara Bank FD interest rates is paid, irrespective of the deposit amount or period.\n- The depositor can choose either monthly, quarterly, or half-yearly interest payments. \n");
										printf("-FD interest rates of 6.50 percent p.a.\n");
										break;
									}
								case 4:
									{
										printf("\n-Two DDs free (per month) up to the net salary credit received during the previous month.\n-Free Personalised/non-Personalised Cheque Book- up to 200 leaves per annum.\n-Free NEFT/RTGS Charges.\n");
										printf("-ROI ranges from 9.60 percent to 2.90 percent p.a\n");
										break;
									}
								default:
										{
											printf("\nEnter the valid Code.");
										}
							}
							break;
						}
				case 3:
						{
						a=choose_bank();
						switch(a)
						{
							case 1:
								{
									printf("\n-Gain peace of mind knowing your money is insured.-\nEarn interest on your savings.\n-Pay your bills on time, automatically.\n");
									printf("-Savings Bank Deposits =3.60 percent* p.a.\n");
									break;
								}
							case 2:
								{
									printf("\n-Allows for prompt business transactions.\n-No limit on withdrawals.\n-No limit on deposits in the home branch.\n-Enables businessmen to make direct payments using cheques, demand drafts, or pay orders.\n");
									printf("-Regular Current Account = 6.0 percent* p.a\n");
									break;
								}
							case 3:
								{
									printf("\n-Under this scheme, the SBI FD interest is paid only upon maturity.\n-Nomination and loan facility is available.\n-Auto-renewal facility is available on the deposit.\n");
									printf("-FD interest rates of 5.00 percent p.a.\n");
									break;
								}
							case 4:
								{
									printf("\n-Zero Balance Account.\n-No Monthly Average Balance charges.\n-Employee Reimbursement Account (Reimbursement Current Account).\n-Auto Sweep Facility.\n");
									printf("-ROI ranges from 12.00 percent p.a\n");
									break;
								}
							default:
									{
										printf("\nEnter the valid Code.");
									}
						}
						break;
					}
		case 4:
					{
						a=choose_bank();
						switch(a)
						{
							case 1:
								{
									printf("\n-International VISA/MASTER/RUPAY Debit Card.\n-Instant Credit of Outstation Cheque upto Rs.15,000/-.\n-Internet banking & Mobile Banking facility.\n-Nomination facility.\n-Standing Instruction Facility.\n");
									printf("-Savings Bank Deposits =9.5 percent* p.a.\n");
									break;
								}
							case 2:
								{
									printf("\n-All senior citizens investing in IOB fixed deposits are eligible to avail an additional 0.50percent on all deposit schemes.\n-Super senior citizens, aged 80 years and above, are provided an additional interest rate of 0.75percent p.a.\n");
									printf("-Regular Current Account = 8.25 percent* p.a\n");
									break;
								}
							case 3:
								{
									printf("\n-Convenience.\n-Overdraft Facility.\n-Issuance of Cheque Book.\n-Online Transactions Facility like paying bills online.\n-Netbanking.\n");
									printf("-FD interest rates of 3.00 percent p.a.\n");
									break;
								}
							case 4:
								{
									printf("\n-Zero Balance Account.\n-No Monthly Average Balance charges.\n-Employee Reimbursement Account (Reimbursement Current Account).\n-Auto Sweep Facility.\n");
									printf("-ROI ranges from 11.10 percent p.a\n");
									break;
								}
							default:
									{
										printf("\nEnter the valid Code.");
									}
						}
						break;
					}
		case 5:
					{
						a=choose_bank();
						switch(a)
						{
							case 1:
								{
									printf("\n-25 free personalized multicity cheque leaf per year.\n-Free transfer of fund within PNB accounts.\n-Free internet banking.\n-Transferability of accounts to any P.N.B Branch without changing the account number.\n");
									printf("-Savings Bank Deposits =6.75 percent* p.a.\n");
									break;
								}
							case 2:
								{
									printf("\n-Low Monthly Average Balance: Rs 5,000.\n-Free Cash Deposit upto Rs 5,00,000/- per Month.\n-Convenience to withdraw and deposit cash at all 22000+ SBI Bank branches.\n-Free Cash Withdrawal from Home Branch.\n");
									printf("-Regular Current Account = 9.25 percent* p.a\n");
									break;
								}
							case 3:
								{
									printf("\n-Under this scheme, the SBI FD interest is paid only upon maturity.\n-Nomination and loan facility is available.\n-Auto-renewal facility is available on the deposit.\n");
									printf("-FD interest rates of 3.00 - 6.00 percent p.a.\n");
									break;
								}
							case 4:
								{
									printf("\n-Individual (singly or jointly) with others.\n-Minor who have attained the age of 10 years and above in his/her own name on giving proof of age.\n-Minors below the age of 10 years under guardianship of Natural/legal guardian.\n-Proprietorship/Partnership Firm, Commercial Organization, Company / Corporate Body.\n-Hindu Undivided Family\n");
									printf("-ROI ranges from 9.60 percent to 12.60 percent p.a\n");
									break;
								}
							default:
									{
										printf("\nEnter the valid Code.");
									}
						}
						break;
					}
		default:
					{
						printf("\nEntered Bank details are not available...");
						break;
					}
			
			}
			printf("\n\nClick 1 to continue or 0 to quit:");
			scanf("%d",&op);	
	}while(op);
}
int choose_bank()
{
				printf("\nAccounts in Punjab National Bank\n");
				printf("(1) Savings Account\n");
				printf("(2) Current Account\n");
				printf("(3) Fixed Deposit (FD) Account\n");
				printf("(4) Demat Account\n");
				printf("\n");
				printf("Enter the type of Account:");
				scanf("%d",&a);
				return a;
}

