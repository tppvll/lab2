#include <stdio.h>

int main()
{
	char str[100];
	char word1[100];
	char word2[100];
	char words[100][100];
	int i = 0, n = 0, m = 0, k = 0, f = 0;
	printf("Enter the string:");
	fgets(str, 100, stdin);
	for (i = 0; str[i] != 0; i++) 
		if (str[i] == '\n')
			str[i] = 0;
	printf("Enter the first word:");
	fgets(word1, 100, stdin);
	for (i = 0; word1[i] != 0; i++)
		if (word1[i] == '\n')
			word1[i] = 0;
	printf("Enter the second word:");
	fgets(word2, 100, stdin);
	for (i = 0; word2[i] != 0; i++)
		if (word2[i] == '\n')
			word2[i] = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') 
		{
			words[n][m] = str[i];
			m++;
			f = 1;
		}
		else f = 0; 
		if (f == 0 && m != 0)  
		{
			words[n][m] = 0; 
			n++; 
			m = 0; 
		}
		if (f == 0 && m == 0) 
		{
			words[n][0] = str[i];
			words[n][1] = 0; 
			n++;
		}
		i++; 
	}
	if (f == 1)
	{
		words[n][m] = 0; 
		n++; 				
		m = 0; 			
		f = 0; 
	}
	k = n - 1; 
	for (n = 0; n <= k; n++) 
	{
		while (words[n][m] != 0)
		{
			if (words[n][m] == word1[m])
				f = 1;
			else
			{
				f = 0;
				break;
			}
			m++;
		}
		m = 0;
		if (f == 1)
		{
			while (word2[m] != 0)
			{
				words[n][m] = word2[m];
				m++;
			}
			words[n][m] = 0;
			m = 0;
		}
	}
	m = 0;
	for (n = 0; n <= k; n++)
	{
		while (words[n][m] != 0)
		{
			printf("%c", words[n][m]);
			m++;
		}
		m = 0;
	}
}
