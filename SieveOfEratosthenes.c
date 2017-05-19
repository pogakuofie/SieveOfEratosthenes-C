/**
 * This program print all prime numbers within a selected range(1-100)
 */

//start of program
#include <stdio.h>
#include <math.h>

//main function starts
int main(void){

	int basket[100];//creates an int array of size 100
	int i; //declares i

	//initialize elements of basket[] from index 2 to upper bounds of array to 1
	for (i = 2; i < 100; i++){

            basket[i] = 1;
        }

	//loop through array starting form index 2 to the square root of the size of the array
	int j;//declares j
        for (j = 2; j < sqrt(100); j++){

            //determines weather current array position is 1
            if(basket[j] == 1){

                //if current array position equals 1 then the loop goes through
                //the rest of the array setting the multiple of the current array
                //position to 0
		int k;//declares k
                for (k = j*2; k < 100; k += j){

                        basket[k] = 0;//set array position to false
                }
            }
        }

	//loops through basket[] print array index which is now the prime number if the position is still 1
	int m;//declares m
        for (m = 0; m < 100; m++){

            if(basket[m] == 1) //determines if position equals 1

                printf("%d ", m); //print m which is prime
        }

	return 0;
}//main function ends