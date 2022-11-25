https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// test tsig/bits data types

#include <stdio.h>
#include "defs.h"
#include "reln.h"
#include "tuple.h"
#include "tsig.h"
#include "bits.h"

int main(int argc, char **argv)
{
	Reln r = openRelation("R");
	printf("Tuple: ");
	Tuple t = readTuple(r, stdin);
	Bits b = makeTupleSig(r, t);
	showBits(b); putchar('\n');
	printf("Query: ");
	Tuple q = readTuple(r, stdin);
	Bits bq = makeTupleSig(r, q);
	showBits(bq); putchar('\n');
	if (isSubset(bq,b))
		printf("Matches\n");
	else
		printf("No match\n");
	return 0;
}
