#include <stdio.h>
#include <stdlib.h>

int main() {
    // String literals always in double quotes
    char *str = "Hello, World!";
    // long sentences can be broken into multiple lines
    /*
    printf("%s", "Selam sana ey \
                 kardeş");
    printf("%s", "Selam sana ey"
                 " kardeş");
    // String literals always stored in memory as an array of characters
    printf("Dünya");
    */
    // "D", "ü", "n", "y", "a", "\0"    (null character) Indicates the end of the string
    // Total 6 bytes read-only memory allocated for the string
    // \0 is not 0 character, it is a null character ASCII code
    // Both printf and scanf functions expects a character pointer as an argument
    // printf("%s", str);
    // scanf("%s", str);
    // Passing Dünya is equivalent to passing the pointer to the letter "D"

    // String literals cannot be modified --> Undefined behavior
    // String literals also known as constant strings. They have been allocated read-only memory, so we cannot alter them.

    // String literal ≠ string constant
    /*
    "H" ≠ 'H'
     */

    /* Declaring and initializing a string literal
    char st[6] = "Hello";
    char st2[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // They both equal to "Hello", we can modify them not string literal, its char array
    char *st3 = "Hello";
    *st3 = 'H';
    // We cannot modify the string literal, string constant
    // Short length initialization
    char st4[4] = "He"; // "H", "e", "\0", "\0"
    // Long length initialization
    // char st5[4] = "Hello";  // Undefined behavior
    // Equal length initialization
    char st6[5] = "Hello";  // "H", "e", "l", "l", "o" -- Undefined behavior
    // Omitting the length
    char st7[] = "Hello";  // "H", "e", "l", "l", "o", "\0"
*/
    // Printing a string literal using printf and puts functions
    printf("%s\n", str);
    printf("%.3s\n", str);  // Prints the first three characters of the string
    printf("%6.3s", str); // Prints the first three characters of the string
    // puts function automatically adds a newline character at the end of the string
    puts(str);
    puts(str);

    // Getting input with scanf and gets functions
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    printf("%s\n", input);
    // Input "Hello World!"
    // Output "Hello" because scanf doesnt store the whitespace character in the string variable
    printf("Enter a string: ");
    gets(input);
    printf("%s\n", input);
    // Input "Hello World!"
    // Output "Hello World!"

    //Both scanf and gets functions never check for the end of the string, they may cause undefined behavior and probably lead to buffer overflow
    // But using %ns format specifier, we can check for the end of the string
    printf("Enter a string: ");
    scanf("%9s", input);
    printf("%s\n", input);

    // gets is unsafe, it can cause buffer overflow

    // Our input function with getchar() function


    system("pause");
}

