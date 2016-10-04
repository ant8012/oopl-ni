// ----------
// Fill.h
// ----------

#ifndef Fill_h
#define Fill_h

void fill (vector<int>::iterator b, vector<int>::iterator e, int val) {
	while (b != e) {
		*b = val;
		++b;
	}
}

#endif // Fill_h
