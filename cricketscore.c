// cricket score card management system
#include<stdio.h>

int main()
{
   // Team A scores
   int a_score[11] = {45, 87, 32, 12, 78, 65, 34, 54, 23, 67, 98};
   // Team B scores
   int b_score[11] = {67, 89, 12, 43, 56, 78, 90, 23, 45, 67, 89};

   // Display header
   printf("\t\t\tCRICKET SCORECARD\n\n");
   printf("Team A\t\t\t\tTeam B\n");
   printf("------------------------------------------\n");

   // Display scores
   for(int i=0; i<11; i++)
   {
      printf("%d\t\t\t\t%d\n", a_score[i], b_score[i]);
   }

   return 0;
}
