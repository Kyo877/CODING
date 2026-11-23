# Lab 6, Task A1 - Read the docs table
NAME : WONG YAN KANG    MATRIC NUMBER : A26CS0465
Source: https://en.cppreference.com (search for the function name; the page starts with "Defined in header ...").
Write the signature with the return type first. A gotcha is something that surprised you or that the page warns about.

| Function | Header | Signature (return type first) | One gotcha |
|---|---|---|---|
| sqrt (worked example) | `<cmath>` | `double sqrt(double x)` | A negative argument gives NaN, not a crash |
| pow |'<cmath>'  |'double      pow ( double base, double exp );' |If base is zero and exp is zero, a domain error may occur. |
| fabs |'<cmath>' |'double      abs( double num );' |If the argument is ±0, +0 is returned. |
| floor |'<cmath>' |' double      floor ( double num );'|If num is NaN, NaN is returned.|
| ceil |'<cmath>' |' double      ceil ( double num );'|If num is ±∞, it is returned unmodified. |
| round |'<cmath>' |double      round ( double num ); | num is NaN, NaN is returned. |
| toupper |'<cctype>' |'int toupper( int ch );' |character to be converted. If the value of ch is not representable as unsigned char and does not equal EOF, the behavior is undefined. |
| isalpha |'<cctype>' |int isalpha( int ch ); | Non-zero value if the character is an alphabetic character, zero otherwise.|
| isdigit |'<cctype>' |'int isdigit( int ch );' |Non-zero value if the character is a numeric character, zero otherwise. |
| strlen |'<cstring>' |'std::size_t strlen( const char* str );' |'The behavior is undefined if there is no null character in the character array pointed to by str.' |
| strcmp |'<cstring>'  |'int strcmp( const char* lhs, const char* rhs );' |The behavior is undefined if lhs or rhs are not pointers to null-terminated strings |
| strcpy |'<cstring>' |' char* strcpy( char* dest, const char* src );'|The behavior is undefined if the dest array is not large enough |
| atoi |'<cstdlib>' |'long      atol( const char* str );' |If the value of the result cannot be represented, i.e. the converted value falls out of range of the corresponding return type, the behavior is undefined. |
| atol |'<cstdlib>' |'long      atol( const char* str );'  |If the value of the result cannot be represented, i.e. the converted value falls out of range of the corresponding return type, the behavior is undefined. |
| rand |'<cstdlib>' |' int rand();'|'There are no guarantees as to the quality of the random sequence produced' |
| srand |'<cstdlib>' |'void srand( unsigned seed );' |If std::rand() is used before any calls to srand(), std::rand() behaves as if it was seeded with srand(1).|
| time |'<ctime>' |'std::time_t time( std::time_t* arg );' |The encoding of calendar time in std::time_t is unspecified |
