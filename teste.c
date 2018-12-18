

#include <stdio.h>
#include "qnlib.h"

void test();


int main(){

	test();

}

void test(){
	puts("\tSUM\t\tMULT\t\tDIV");

	q7_t a7 = double_to_q7(0.03125), b7 = double_to_q7(0.25), c7 = double_to_q7(0.125);
	printf("Q7\t%.4f\t\t%.4f\t\t%.4f\n", q7_to_double(q7_sum(c7, b7)), q7_to_double(q7_mult(c7, b7)), q7_to_double(q7_div(a7, b7)));


	q8_t a8 = double_to_q8(0.03125), b8 = double_to_q8(0.25), c8 = double_to_q8(0.125);
	printf("q8\t%.4f\t\t%.4f\t\t%.4f\n", q8_to_double(q8_sum(c8, b8)), q8_to_double(q8_mult(c8, b8)), q8_to_double(q8_div(a8, b8)));


	q15_t a15 = double_to_q15(0.03125), b15 = double_to_q15(0.25), c15 = double_to_q15(0.125);
	printf("q15\t%.4f\t\t%.4f\t\t%.4f\n", q15_to_double(q15_sum(c15, b15)), q15_to_double(q15_mult(c15, b15)), q15_to_double(q15_div(a15, b15)));


	q16_t a16 = double_to_q16(0.03125), b16 = double_to_q16(0.25), c16 = double_to_q16(0.125);
	printf("q16\t%.4f\t\t%.4f\t\t%.4f\n", q16_to_double(q16_sum(c16, b16)), q16_to_double(q16_mult(c16, b16)), q16_to_double(q16_div(a16, b16)));


	q31_t a31 = double_to_q31(0.03125), b31 = double_to_q31(0.25), c31 = double_to_q31(0.125);
	printf("q31\t%.4f\t\t%.4f\t\t%.4f\n", q31_to_double(q31_sum(c31, b31)), q31_to_double(q31_mult(c31, b31)), q31_to_double(q31_div(a31, b31)));


	q32_t a32 = double_to_q32(0.03125), b32 = double_to_q32(0.25), c32 = double_to_q32(0.125);
	printf("q32\t%.4f\t\t%.4f\t\t%.4f\n", q32_to_double(q32_sum(c32, b32)), q32_to_double(q32_mult(c32, b32)), q32_to_double(q32_div(a32, b32)));

}
