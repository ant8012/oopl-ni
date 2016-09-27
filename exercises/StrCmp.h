#ifndef StrCmp_h
#define StrCmp_h

int my_strcmp(const char* first, const char* second) {
	int index = 0;
	while(first[index] != '\0' || second[index] != '\0') {
		if(first[index] != second[index]) {
			return first[index] - second[index];
		}
		++index;
	}
	if(first[index] == '\0' && second[index] == '\0') {
		return 0;
	}
	if(first[index] == '\0') {
		return -second[index];
	}
	if(second[index] == '\0') {
		return -first[index];
	}
}