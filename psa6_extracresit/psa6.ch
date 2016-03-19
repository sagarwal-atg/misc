#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

//Function definitions
/*=============================================================================*/

// define (implement) all the functions here; document each function
// the function is to read note and duration  array from a text file

double* readArrayFromFile(char *str_array, int *length)
{
    FILE *uns_array_file;
// double unsorted_num
    //int i ;
    int arr_length = 1;
    double *arr_mem;
    arr_mem = (double*)calloc(arr_length,sizeof(double));

    uns_array_file = fopen(str_array, "r");
    if (uns_array_file == NULL)
    {
        printf("Error: cannot open the file for reading\n");
        exit(-1);
    }
    //printf("#############\n");
    //fscanf( uns_array_file ,"%lf", (arr_mem )  );
    while( !feof(uns_array_file) )
    {
        //for (i=0; i < length ; i++)
        //printf("zzzzsssssz\n");

        fscanf( uns_array_file ,"%lf", (arr_mem + arr_length -1)  );

       // printf("befr %d\n" ,arr_length);

        arr_length++;

        //printf("%d\n" ,arr_length);

        arr_mem = realloc(arr_mem , (arr_length)*sizeof(double));

        //printf("arr_mem %p\n" ,arr_mem);
    }


    arr_mem =(double*)realloc(arr_mem, (arr_length -1 ) * sizeof(double));
    *length = arr_length-1;
    //printf("zzzzzzzzzzzzzz\n");
    fclose(uns_array_file);
    return arr_mem;
}

// this is while-loop controlled , one for loo

void bs_array( double *scores_arr, int length)
{
    double temp;
    bool list_sorted = false;

    int j ,i1;



    while(!list_sorted)
    {
// Bubble sort to Asscending ordfer
//one for loop to do bubble sort

        list_sorted =true;
        for(j=0; j< length-1 ; j++)
        {
            if(*(scores_arr+j)> *(scores_arr+j+1))
            {
                //printf(" \n j = %d  j%.2lf  j+1 %.2lf", j, scores_arr[j], scores_arr[j+1] );
                // doing swap here
                temp = *(scores_arr+j);
                *(scores_arr+j) = *(scores_arr+j+1);
                *(scores_arr+j+1) =temp;
// check sorted flag?
                list_sorted =false;

            }
        }


    }
    printf("The sorted array is:");
    for(i1 =0; i1 < length ; i1++)
        printf( "%.2lf  ", *(scores_arr+i1));
    printf("\n");
    printf("All done");


}


// the function is to write note and duration  array into a text file

void writeArrayToFile(char *arr1, double *val_array, int length )
{
    FILE *arr;
// double unsorted_num
    int i;

    arr = fopen(arr1, "w");
    if (arr == NULL)
    {
        printf("Error: cannot open arr for writing\n");
        exit(-1);
    }
    for (i=0; i < length; i++)
    {
        fprintf( arr ,"%.2lf ", *(val_array+i)  );
    }

    fclose(arr);

}

/*********
this function By entering the integer from 1 to 9 : pick from input1~9.txt
******/
int chooseFile()
{
    int user_num;

    int i=0;
    printf("Please enter the integer number of the following files you want to sort\n" );
    for(i=0; i< 10; i++)
    {
        printf("input%d.txt\n", i);
    }
    scanf("%d" ,&user_num);
    return user_num;
}










#include <stdbool.h>
# include <stdlib.h>
//#include "sorting_functions_headers.h"
int main()

{
    double *temp_array;
    int i1, user_choice;
    char user_input[20];
    //double *array_mem;
    int length = 0;


    /*********
    this function By entering the integer from 1 to 9 : pick from input1~9.txt
    ******/



    user_choice = chooseFile();

// this function will copy the user input file, and give it to readArrayFromFile to read and store the array in temp_array
    sprintf(user_input, "input%d.txt", user_choice);
    printf("%s\n", user_input);
    temp_array = readArrayFromFile(user_input, &length);

    for(i1 =0; i1 < 10 ; i1++)
        printf( "%.2lf  \n",temp_array[i1]);

// bs_array sorts the array from the input temp_array
    bs_array(temp_array, length);

    writeArrayToFile("scores_output.txt",temp_array, length);

    free(temp_array);
    return 0;
}


/*=============================================================================*/




















/*


#ifndef LAB_5_FUNCTIONS_H
#define LAB_5_FUNCTIONS_H
// your function declarations go here



double* readArrayFromFile(char *str_array, int *length);

void bs_array( double *scores_arr, int length);

void writeArrayToFile(char *arr1, double *val_array, int length );

int chooseFile();
#endif
*/
