/**
 * File:    video_store.c *
 * Author:  Victor Barriga *
 * Email:   victorbarriga@live.com *
 * A biginner's guide to thinking like a programmer *
*/

#include <stdio.h>

int main()
{
    int total_dollars = 0;
    int total_days_at_3_dollars = 0;
    int total_days_at_2_dollars = 0;
    int transaction_code = 0;
    int days_for_one_video = 0;

    do
      {
	if(transaction_code == 2)
	  total_days_at_2_dollars += days_for_one_video;
	
	if(transaction_code == 3)
	  total_days_at_3_dollars += days_for_one_video;
	cout<<"Please enter a transaction code and number of days a video was rented: ";
	cin>>transation_code>>days_for_one_video;
      } while(transactio_code != 0) 
} 
      

