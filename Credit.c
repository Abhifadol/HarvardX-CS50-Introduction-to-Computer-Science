#include <stdio.h>
#include<cs50.h>
#include<math.h>

int main(void) 
{
  long int card_no ;
  card_no=get_long("Number: ") ;
  int digit=0;
  int count=0;
  int sum_a=0;
  int sum_b=0;
  long long temp_no=card_no ;
  long long company_id=card_no ;
  while(card_no!=0)
    {
      digit=card_no%10;
      if(count%2==0)
      sum_a=sum_a+digit ;
      else
        {
      	  int m=digit*2 ;
		  if(m>=10)
      	  sum_b=sum_b+(m%10)+1 ;
		  else
		  sum_b=sum_b+m ;
        }
      card_no=(card_no-digit)/10;
      count++;
    }
      int total_sum=sum_a+sum_b ;
      if(total_sum%10!=0)
        {
          printf("INVALID\n");
        }
      if(total_sum%10==0)
        {
        	while(company_id>100)
            {
              company_id=company_id-(company_id%10) ;
              company_id = company_id/10;
            }
          if((company_id > 50 && company_id < 56) && (count==16))
            {
              printf("MASTERCARD\n");
            }
          else if((company_id >39 && company_id < 50) && (count==13 || count==16))
            {
              printf("VISA\n");
            }
          else if((company_id==34 || company_id==37) && (count==15))
            {
              printf("AMEX\n");
            }
          else 
            {
              printf("INVALID\n");
            }
        }
      return 0;
}
