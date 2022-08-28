// =================================================================
//
// File: activity.h
// Author: Marco Randu Retana Vargas
// Date: 27/08/2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	n
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int suma;
	for(int i=1; i<=n; i++){
		suma=suma+i;
	}
	return suma;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	n^2
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	if(n<=1) return 1;
	return n + sumaRecursiva(n-1);
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	n
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	return (n*(n+1))/2;
}

#endif /* ACTIVITY_H */
