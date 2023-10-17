#include <iostream>
#include <cstring>
using namespace std;


//Задание 1
//int mystrlen(const char* str)
//{
//	int length = 0;
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		length += 1;
//	}
//	return length;
//}
//
//int main()
//{
//	setlocale(LC_CTYPE, "RU");
//	char str[] = "Hello";
//	cout << mystrlen(str);
//}


//Задание 2
//char* mystrcpy(char* str1,const char* str2)
//{
//	for (int i = 0; str2[i] != '\0'; i++)
//	{
//		str1[i] = str2[i];
//	}
//	return str1;
//}
//
//int main()
//{
//	setlocale(LC_CTYPE, "RU");
//  char str1[50] = "Hello";
//	char str2[] = "World";
//	cout << mystrcpy(str1,str2);
//}


//Задание 4
//char* mystrchr(char* str, char symb)
//{
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if (str[i] == symb)
//        {
//            return &str[i];
//        }
//    }
//    return 0;
//}
//int main()
//{
//    setlocale(LC_CTYPE, "RU");
//    char str[] = "Hello";
//    char symbol = 'l';
//    cout << mystrchr(str, symbol);
//}



//Задание 5
//char* mystrstr(char* str1, char* str2)
//{
//    for (int i = 0; str1[i] != '\0'; i++)
//       {
//         if (str1[i] == *str2)
//         {
//           return &str1[i];
//         }
//      }
//      return 0;
//}
//int main()
//{
//    setlocale(LC_CTYPE, "RU");
//    char str1[] = "Hello,World!";
//    char str2[] = "Wor";
//    cout << mystrstr(str1, str2);
//}









