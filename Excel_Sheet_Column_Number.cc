int titleToNumber(char* s) {

	int result=0;

	while(*s)

	{

		result=result*26+(*s-'A' +1);

		++s;

	}

	return result;

}
