bruh is a CLI that allows you to print 2D pyramids (so triangles !!!) of any height and made by any ASCII character + an offset. 

**Note this project was made to learn how to create CLI with code snippets (here in C).**

## How to use it !
After compiling with your favorite compiler*, just call 
```shell
bruh
```
*Actually, to make it occure from everywhere, you have to add it to your environment variables.*

You can change the height with `-h <value>`, the offset with `-o <value>` and the character with `-c "^<value>"`.\
The default values are :
```c
  char c='*';
  int h=5;
  int offset=0;
```
*\*Examples of compilers : gcc, clang*
