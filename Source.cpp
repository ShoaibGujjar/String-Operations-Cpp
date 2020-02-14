#include<iostream>
using namespace std;
void StringConcatenate(char* str1, char* str2)
{
	int count = 0;
	for (int i = 0; str1[i] != '\0'; i++)
	{
		count++;
	}
	for (int i = 0; str2[i] != '\0'; i++)
	{
		str1[count] = str2[i];
		count++;
	}
	str1[count] = '\0';
	cout << str1;
}
void CompressString(char*a)
{
	int last=0;
	char b;
	for (int i = 0; a[i] != '\n'; i++)
	{
		b = a[i];
		for (int j = i + 1; a[j] != '\n'; j++)
		{
			if (b == a[j])
			{
				for (int k = j + 1; a[k] != '\n'; k++)
				a[k] = a[k+1];
				
			}
			last++;
		}
	}
	
	//a[last++] = '\0';
	cout << a;
}
int main()
{
	char *str3 = new char;
	char *str1 = new char;
	char *str2 = new char;
	cout << "Enter first string :";
	cin.getline(str1,50);
	cout << "Enter second string :";
	cin.getline(str2,50);
	StringConcatenate(str1, str2);
	cout<<'\n';
	cout << "question num 2 enter sentance removr occurrence of charater";
	cin.getline(str3, 50);
	CompressString(str3);
	system("pause");
	return 0;

}