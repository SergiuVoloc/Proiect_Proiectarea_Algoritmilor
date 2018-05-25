#include <stdio.h>
#include <stdlib.h>
#include <time.h>



  int random (void) {

    int i;
    time_t t;
    float r;
   // Intializes random number generator */
   srand((unsigned) time(&t));

   // Print 5 random numbers from 0 to 32000 */

    r = ((float)rand()/(float)(500)) * 1.0 ;





    r = ((float)rand()/(float)(100)) * 1.0 ;
      printf("%.2f\n", r ) ;



   return 0 ;
}



int main ()
{
    //int i , n ;
    //scanf("%d",&n);
    random();


}
