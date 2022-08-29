#include<iostream>
main()
{
   int vote_age;
   printf("enter age:");
   scanf("%d",&vote_age);
   if (vote_age<18)
	{
		printf("you are allowed to vote after %d years .\n",18-vote_age);
	}
  else
	printf("you are eligible to vote.\n");
	
}
