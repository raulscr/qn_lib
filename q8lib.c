
#include "types_qn.h"
#include "q8lib.h"

//	Q8 (unsigned) function impl.


q8_t double_to_q8(double n){
	return (q8_t)(n * 0x100);			//	8bit shift (2^8 = 0x100)
}

double q8_to_double(q8_t n){
	return (double)(((double long)n) / 0x100);
}


q8_t q8_sum(q8_t n1, q8_t n2){
	q15_t	aux;

	aux = (q15_t)n1 + (q15_t)n2;

	if(aux > 0xFF)
		aux = 0xFF;
	else if(aux < 0x0)
		aux = 0x0;
	return (q8_t)aux;
}

q8_t q8_mult(q8_t n1, q8_t n2){

	q15_t	aux;
	aux = (q15_t)n1 * (q15_t)n2;

	return aux >> 8;

}

q8_t q8_div(q8_t n1, q8_t n2){

	q15_t	aux;
	aux = (q15_t)n1 << 8;

	return aux / (q15_t)n2;

}

