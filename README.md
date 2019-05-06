# CS162B_Lab01_JORDAN

Instructions:
Create a C++ program that will

1. Ask for the user’s name. Assume input consists of 0 or more characters, and will not include whitespace characters (2 pt.).
2. Print out the user’s name (2 pt.).
3. Print out the user’s name with only the first letter revealed and all other letters replaced with #. See examples at the end (4 pts.).
4. Print out the user’s name with all the letters replaced with the next letter ( a -> b, b -> c, ..., y -> z, z -> a ) (4 pts.). Make sure that if the letter was lowercase, the replacement should also be lowercase. Capital letters should be replaced with capital letters as well. All non-letter characters will remain unchanged (4 pts.).
5. For #4, create and use a function that uses a character pointer argument to perform the changes on a per-character basis (4 pts.). See code snippet below to see how the function should be used:
//  for(  int i  = 0; i  < strlen(  name ); i++  ) // for character  arrays

for( int i =  0; i < name.length(); i++  ) // for strings

{    

numberFiveFunc( &name[i] );      // you  can change the function  name

//  NOTE:  this function  DOES NOT print anything

}

cout  << name  << endl;

Note that for strings (string  s), you can treat it as an array of characters (s[0] will get the first character).
