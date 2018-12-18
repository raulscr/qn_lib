
#include "types_qn.h"
#include "q32lib.h"

//	Q32 (unsigned) function impl.


q32_t double_to_q32(double n){
	return (q32_t)(n * 0x100000000);			//	32bit shift (2^32 = 0x100000000)
}

double q32_to_double(q32_t n){
	return (double)(((double long)n) / 0x100000000);
}


q32_t q32_sum(q32_t n1, q32_t n2){
	q63_t	aux;

	aux = (q63_t)n1 + (q63_t)n2;

	if(aux > 0xFFFFFFFF)
		aux = 0xFFFFFFFF;
	else if(aux < 0x0)
		aux = 0x0;
	return (q32_t)aux;
}

q32_t q32_mult(q32_t n1, q32_t n2){

	q63_t	aux;
	aux = (q63_t)n1 * (q63_t)n2;

	return aux >> 32;

}

q32_t q32_div(q32_t n1, q32_t n2){

	q63_t	aux;
	aux = (q63_t)n1 << 32;

	return aux / (q63_t)n2;

}

