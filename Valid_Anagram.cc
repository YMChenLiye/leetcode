bool isAnagram(char* s, char* t) {

	int first[26]={0};

	int second[26]={0};

	while(*s)    

	{

		int index=*s-'a';

		first[index]++;

		s++;

	}

	while(*t)

	{

		int index=*t-'a';

		second[index]++;

		t++;

	}



	for(int i=0;i<26;i++)

	{

		if(first[i]!=second[i])

		{

			return false;

		}

	}

	return true;

}
