#include "asn1.h"  /*û������⺯����*/
unsiganed long der_length(unsigned long payload)
{
	unsigned long x;
	
	if (payload > 127){
		x = payload;
		while (x){
			x>>=8;
			++payload;
		}
	} 
	
	return payload +2;
}
