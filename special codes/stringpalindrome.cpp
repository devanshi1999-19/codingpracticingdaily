#include <bits/stdc++.h>
using namespace std;
bool sentencePalindrome(string str)
{
	int l = 0, r = str.length() - 1;
	for (int i = 0; i <= r; i++)
		str[i] = tolower(str[i]);
	while (l <= r) {
		if (!(str[l] >= 'a' && str[l] <= 'z'))
			l++;
		else if (!(str[r] >= 'a' && str[r] <= 'z'))
			r--;
		else if (str[l] == str[h])
			l++, r--;
		else
			return false;
	}
	return true;
}
int main()
{
	string str = "A man, a plan, a canal: Panama.";

	if (sentencePalindrome(str))
		cout << "Sentence is palindrome.";
	else
		cout << "Sentence is not palindrome.";

	return 0;
}
