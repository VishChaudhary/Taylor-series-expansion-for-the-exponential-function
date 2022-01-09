#include <stdio.h>

int main()


{
    float x, i, ans, nth_term;
    float accuracy = 0.0001;
 
    printf("\nChoose a value for x:  ");
    scanf("%f",&x); // X value which we input

    (nth_term = 1, i=1, ans=0); //initialises the answer to be 0
    while(nth_term >= accuracy)  //this is the terminating condition

        {
            (ans += nth_term);
            ((nth_term *= (x/i)), i++);  //is creating the formula for taylor series, x^n/n!
        }

    printf("e^%f = %f\n\n",x,ans);
    
    return 0;
}