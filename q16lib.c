
#include "types_qn.h"
#include "q16lib.h"

//	Q16 (unsigned) function impl.


q16_t double_to_q16(double n){
	return (q16_t)(n * 0x10000);			//	16bit shift (2^16 = 0x10000)
}

double q16_to_double(q16_t n){
	return (double)(((double long)n) / 0x10000);
}


q16_t q16_sum(q16_t n1, q16_t n2){
	q31_t	aux;

	aux = (q31_t)n1 + (q31_t)n2;

	if(aux > 0xFFFF)
		aux = 0xFFFF;
	else if(aux < 0x0)
		aux = 0x0;
	return (q16_t)aux;
}

q16_t q16_mult(q16_t n1, q16_t n2){

	q31_t	aux;
	aux = (q31_t)n1 * (q31_t)n2;

	return aux >> 16;

}

q16_t q16_div(q16_t n1, q16_t n2){

	q31_t	aux;
	aux = (q31_t)n1 << 16;

	return aux / (q31_t)n2;

}

