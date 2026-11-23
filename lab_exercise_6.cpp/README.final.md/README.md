# Lab 6 log - Predefined functions

Name: ____    Matric: ____    Date: ____

## A2 - predictions (write BEFORE you run A2_gotchas.cpp)

| Line | My prediction | Actual output | Which cppreference page explains it? |
|---|---|---|---|
| 1 `toupper('a')` |A |65 | |
| 2 `static_cast<char>(toupper('a'))` |a |A |https://en.cppreference.com/cpp/locale/ctype/toupper |
| 3 `floor(-2.5)` and `ceil(-2.5)` |-3 -2 |-3 -2 |https://en.cppreference.com/cpp/numeric/math/floor |https://en.cppreference.com/cpp/numeric/math/ceil |
| 4 `round(2.5)` and `round(-2.5)` |3 3 |3 -3 |https://en.cppreference.com/cpp/numeric/math/round|
| 5 `strcmp("tea", "tea")` |tea |0 |https://en.cppreference.com/cpp/string/byte/strcmp |
| 6 `strlen("nasi lemak")` |nasi lemak |10 |https://en.cppreference.com/cpp/string/byte/strlen |
| 7 `isdigit('5')` and `isdigit(5)` |5 |1 0 |https://en.cppreference.com/cpp/string/byte/isdigit |
| 8 `sqrt(2.0) * sqrt(2.0) == 2.0` |2.0 |0 | https://en.cppreference.com/cpp/numeric/math/sqrt|

## B4 - dice

Counts from three runs in play mode: 172 , 164 , 168
Test mode (seed 42) printed Check: OK both times?  yes 
My count with seed 42 (temporary print line): 152    A classmate on another operating system got: 152

## B6 - predictions (write BEFORE you run B6_convert.cpp)

| Text typed | atoi (my prediction) | atof (my prediction) | Actual atoi | Actual atof |
|---|---|---|---|---|
| `12abc` |12 |12 |12 |12 |
| `abc` |0 |0 |0 |0 |
| (empty line) |0 | 0| 0|0 |
| `3.9` |3 |3.9 |3 |3.9 |
| `-8` |8 |8 |-8 |-8 |

## Sample runs

Paste one sample run for each of B1, B2, B3, B5 under its own heading.


## Reflection (2 sentences)

Which function surprised you most, and where in the documentation could you have seen it coming?

cstdlib 
sooooooooooooooooooo harddddddddddddddddddd ！！！！！！ i spend 2 day to learn 