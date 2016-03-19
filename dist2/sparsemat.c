#include "sparsemat.h"

#include <stdio.h>
#include <stdlib.h>





sp_tuples * load_tuples(char* input_file)
{

    return NULL;
}

sp_lils * load_lils(char* input_file)
{

    return NULL;
	
}


double gv_lils(sp_lils * mat_l,int row,int col)
{
    return 0;
}

double gv_tuples(sp_tuples * mat_t,int row,int col)
{
    return 0;
}



void set_tuples(sp_tuples * mat_t, int row, int col, double value)
{
    return;
}



void set_lils(sp_lils * mat_l, int row, int col, double value)
{
	return;
}



void save_tuples(char * file_name, sp_tuples * mat_t)
{

	return;
}
void save_lils(char * file_name,sp_lils * mat_l)
{
	return;
}



sp_tuples * add_tuples(sp_tuples * matA, sp_tuples * matB){

	return retmat;
}

sp_lils * add_lils(sp_lils * matA, sp_lils * matB){

	return retmat;
}



sp_tuples * mult_tuples(sp_tuples * matA, sp_tuples * matB){ 
    return retmat;

}

sp_lils * mult_lils(sp_lils * matA, sp_lils * matB){
    return retmat;
}



	
void destroy_tuples(sp_tuples * mat_t){
	
    return;
}  
void destroy_lils(sp_lils * mat_l){
    return;
}




sp_lils * tuples2lil(sp_tuples * input_mat_t){
	

	return new_mat_l;
} 

sp_tuples * lil2tuples(sp_lils * input_mat_l){

	return new_mat_t;
}




