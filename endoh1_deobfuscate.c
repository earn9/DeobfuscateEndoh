// Re-assignment:
// G -> Gravity
// P -> Pressure
// V -> Velocity
// These are read in from command line args

// Endoh:
// "Though some assignments may look meaningless, it is actually meaningful;
// it extracts “integer part of real part” from a complex value by assigning
// (and casting) it to an integer-type variable."

// Essential info: in C, a = b EVALUATES to 0, and performs an assignment
// as a 'side effect.' Assignment in the initialization of a for loop will
// make the compiler complain; when he uses this, Mr. Endoh wraps the
// expressions in parens to silence that.


// Use of the comma operator in C:
// For example, in the statement
// *r++ = w, r
//
// The contents of the address pointed to by r is set to w (a complex double).
// The assignment produces a return value of 0, which the comma promptly discards.
// r is returned (a pointer)
// The contents of r are incremented (postfix operator)
//
// Mr. Endoh uses the comma extensively to perform assignment inline.

#include <stdio.h>//  .IOCCC                                         Fluid-  #
#include <unistd.h>  //2012                                         _Sim!_  #
#include <complex.h>  //||||                     ,____.              IOCCC-  #

double complex	a[97687],
// Endoh: "Every five entries of double complex a[] contain information
// of one particle: position, wall-flag, density, force, and velocity.
       *p, *q, *r = a, w = 0, d;
int	x, y;
char b[6856] = "\x1b[2J" //clears the screen (ANSI escape code). '\x1b' is equivalent to ESC.
               "\x1b[1;1H     "; // Moves the cursor to line 1, char 1
                                 //TODO: unclear if whitespace important

char *o = b, *t;

int main(){

	for (; 0 < (x = getc(stdin));){
		w = x > 10 ? 32 < x ? 4[*r++ = w, r] = w + 1, *r = r[5] = x == 35, r += 9 : 0, w - I : (x = w + 2); // why the heck are there two semicolons
    }

	for (;; puts(o), o = b + 4) { 
        // while(true){ 
        // puts(o) // clears the screen, returns 0
        // the comma discards the return value
        // o = b + 4 // o points to the 4th elem of b
		for (p = a; p[2] = p[1] * 9, p < r; p += 5){
			for (q = a; w = cabs(d = *p - *q) / 2 - 1, q < r; q += 5){
				if (0 < (x = 1 - w)){
					p[2] += w * w;
                }
            }
        }
		for (p = a; p[3] = Gravity, p < r; p += 5){
			for (q = a; w = cabs(d = *p - *q) / 2 - 1, q < r; q += 5){
				if (0 < (x = 1 - w)){
					p[3] += w * (d * (3 - p[2] - q[2]) * Pressure + p[4] * Velocity - q[4] * Velocity) / p[2];
                }
            }
        }

		for (x = 011; 2012 - 1 > x++;){
			b[x] = 0;
        }

		for (p = a; (t = b + 10 + (x = *p * I) + 80 * (y = *p / 2), *p += p[4] += p[3] / 10 * !p[1]), p < r; p += 5) {
			x = 0 <= x && x < 79 && 0 <= y && y < 23 ? 1[1[*t |= 8, t] |= 4, t += 80] = 1, *t |= 2 : 0;
        }

		for (x = 011; 2012 - 1 > x++;){ //marching squares algorithm?
			b[x] = " '`-.|//,\\" "|\\_" "\\/\x23\n"[x % 80 - 9 ? x[b] : 16];;
        }

		usleep(12321);
	} 
    
    return 0;
}
