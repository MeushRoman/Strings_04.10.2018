#include <iostream>
#include <string>
#include <fstream>


using namespace std;


int main() {
	//28. Дан символ C и строка S. Удвоить каждое вхождение символа C в строку S. 
	char c = 'l';
	char s[100] = "hello world";
	
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == c) {
			//
			for (int j = strlen(s)+1; j > i; j--)
			{
				s[j] = s[j - 1];
			}
			s[i + 1] = c;
			//
			//s.insert(s.begin() + 1, c); // готовая функция для string s;
			i++;
		}
	}
	cout << s << endl;

	//29. Дан символ C и строки S, S0. Перед каждым вхождением символа C в строку S вставить строку S0.

	char c1 = 'e';
	string s1 = "hello";
	string s2 = "is";

	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] == c1) {
			
			s1.insert(i, s2); //29.

			//s1.insert(i+1, s2); //30. Дан символ C и строки S, S0. После каждого вхождения символа C в строку S вставить строку S0. 

			i += s1.size();
		}
	}
	cout << s1 << endl;

	//31.	Даны строки S и S0.Проверить, содержится ли строка S0 в строке S.Если содержится, то вывести TRUE, если не содержится, то вывести FALSE.
	 
	string S = "hello";
	string  S0 = "lo";

	if (strstr(S.c_str(), S0.c_str())) cout << true << endl; else cout << false << endl;

	//32. Даны строки S и S0.Найти количество вхождений строки S0 в строку S.

	char ss[100] = "olollo hello hellol";
	char ss0[10] = "hello";

	int k = 0;
	int z = 0;
	int x = 0;

	for (int i = 0, j = 0; i < strlen(ss); i++)
	{
		if (ss[i] == ss0[j]) {
			z++;	
			j++;
		}
		else {	
			z = 0;
			j = 0;
			x++;
			if (ss[i] == ss0[j]) {
				z++;
				j++;
				x--;
			}
		}
	
		if (z == strlen(ss0)) {
			j = 0;	z = 0;	k++;
			break;
		}
	}
	cout <<"x = " << x << endl;

	cout << k << endl;

	//33. Даны строки S и S0. Удалить из строки S первую подстроку, совпадающую с S0. Если совпадающих подстрок нет, то вывести строку S без изменений. 

	char sS[100] = "olollo hello hellol";
	char sS0[10] = "lo";

	string str(sS);
	string str1(sS0);

	if (str.find(str1) != string::npos) {
		str.erase(str.find(str1), str1.size());
	}

	cout << str << endl;

	//34. Даны строки S и S0. Удалить из строки S последнюю подстроку, совпадающую с S0. Если совпадающих подстрок нет, то вывести строку S без изменений. 

	string sa1 = "this is example his", sa2 = "his";
	//cin >> sa1 >> sa2;
	if (sa1.rfind(sa2) != string::npos)
		sa1.erase(sa1.rfind(sa2), sa2.size());
	cout << sa1 << endl;

	//35. Даны строки S и S0. Удалить из строки S все подстроки, совпадающие с S0. Если совпадающих подстрок нет, то вывести строку S без изменений. 

	string str5 = "olollo hello hellol";
	string str6 = "lo";

	for (int i = 0; i < str5.size(); i++)
	{
		if (str5.find(str6) != string::npos) {
			str5.erase(str5.find(str6), str6.size());
		}
	}
	
	cout << str5 << endl; 

	//36. Даны строки S, S1 и S2. Заменить в строке S первое вхождение строки S1 на строку S2. 

	string sb = "Test example";
	string sb1 = "e";
	string sb2 = "is";

	//sb.replace(sb.find(sb1), sb1.size(), sb2); // 36.
	//sb.replace(sb.rfind(sb1), sb1.size(), sb2);  //37.  Даны строки S, S1 и S2. Заменить в строке S последнее вхождение строки S1 на строку S2

	//38. Даны строки S, S1 и S2. Заменить в строке S все вхождения строки S1 на строку S2. 

	for (int i = 0; i < sb.size(); i++)
	{
		if((sb.find(sb1) != string::npos))
		sb.replace(sb.find(sb1), sb1.size(), sb2);
	}

	cout << sb << endl;
	

	system("pause");
	return 0;
}
