# Lab 5 log - Control structures

Name: WONG YAN KANG   Matric: A26CS0465   Date:  12/11/2026

## A1 - if traps (compile with warnings on, then debug)

Paste the compiler warnings you saw (one line each):

A1_if_bugs_broken.cpp:11:17: warning: suggest parentheses around assignment used as truth value [-Wparentheses]
   11 |     if (tickets = 0)
      |         ~~~~~~~~^~~

A1_if_bugs_broken.cpp:19:11: warning: comparisons like 'X<=Y<=Z' do not have their mathematical meaning [-Wparentheses]
   19 |     if (2 < x < 9)
      |         ~~^~~

A1_if_bugs_broken.cpp:26:12: warning: logical not is only applied to the left hand side of comparison [-Wlogical-not-parentheses]
   26 |     if (!n > 9)
      |            ^

A1_if_bugs_broken.cpp:38:8: warning: suggest explicit braces to avoid ambiguous 'else' [-Wdangling-else]
   38 |     if (y % 2 == 1)
      |        ^

A1_if_bugs_broken.cpp:47:19: warning: suggest braces around empty body in an 'if' statement [-Wempty-body]
   47 |     if (level < 3);
      |                   ^


A1_if_bugs_broken.cpp:48:5: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
   48 |     {
      |     ^

```

| Check | Expected output | Actual output | What the debugger showed (variable, line, value) | Fix |
|---|---|---|---|---|
| 1 `if (tickets = 0)` |ticket left =5 |tickets left = 0 |line 11 : tickets changed from 5 to 0 |if(tickets==0) | 
| 2 `if (2 < x < 9)` | |12 is between 2 and 9 |2 < x evaluates to true , and 1 < 9 is true |if (2 < x && x < 9) |
| 3 `if (!n > 9)` |n is not above 9  |n is above 9 |!n evaluates to 0, then 0 > 9 is false. |if (!(n > 9)) |
| 4 dangling else |wrong number  | |the else matched the inner if, skipping execution |Add { }  |
| 5 `if (level < 3);` | |level is low |remove semicolon |if (level < 3) |

## A2 - loop traps

| Loop | Expected output | Actual output | What the debugger showed | Fix |
|---|---|---|---|---|
| 1 `continue` |Loop 1: 10 8 6 4 2 |10 [guard] runaway loop stopped |continue skips the n = n - 1 update, causing an infinite loop |Add n = n - 1; before continue; |
| 2 off by one |Loop 2: total = 15 from 5 terms |Loop 2: total = 10 from 4 terms |The condition i < 5 stops at 4, missing the 5th term. |for (int i = 1; i <= 5; i++) |
| 3 missing update |count down 3... 2... 1... | 3... 3... 3... 3... 3... 3... 3... 3... 3... 3... 3... 3... [guard] runaway loop stopped Go! |seconds stays at 3 because there is no update statement. | Add seconds--; inside the loop|

## B5 - prediction for the slide 94 program (write BEFORE you run it)

- Times the outer loop runs: 4
- Times the inner loop runs (in total): 11
- Output:
x=1  y=1
x=1  y=4
x=1  y=7
x=1  y=10
x=3  y=3
x=3  y=6
x=3  y=9
x=5  y=5
x=5  y=8
x=7  y=7
x=7  y=10

Actual result matched my prediction?  yes 

## Sample runs

Paste one sample run for each of B1, B2, B3, B4, B5, B6 under its own heading.

## Reflection (2 sentences)

Which bug was hardest to see by reading, and what did the debugger show that reading did not?
