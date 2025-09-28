
Rush00 – Rectangle Printer (42 Berlin)
The goal is to print rectangles made of ASCII characters. The program takes a width (x) and a height (y) and draws a frame. We ended up solving every variant for the bonus, but the core idea is the same everywhere.




Quick start

Build (only the files you need)
gcc -Wall -Wextra -Werror *.c -o rush

Run (main.c currently calls rush(5, 5))
./rush

We only use write(1, &c, 1) for output (via our ft_putchar).
main.c is just a tiny test driver; evaluators may use a different main.





Files


ft_putchar.c – one-char output using write.

include <unistd.h>
void ft_putchar(char c) { write(1, &c, 1); }

rush00.c (or rush01,02,03,04.c in our other projects ) – the rectangle logic: 
void rush(int x, int y); → loops over the grid (or the pattern of the rectangle) and prints.
char logic(int r, int c, int x, int y); → decides what to print at one cell (or in each position)
main.c – sample calls to rush(x, y) for quick testing.


In other variants we swapped which characters we print (/, \, * or A, B, C). The structure stays identical.




How it works (step by step)


Think of the output as a grid with rows and columns: 
c = current column index (0 … x - 1)
r = current row index (0 … y - 1)



1) The drawer (rush)

void rush(int x, int y)
{
    int r = 0;
    while (r < y)                 // for each row
    {
        int c = 0;
        while (c < x)             // for each column
        {
            ft_putchar(logic(r, c, x, y));  // ask what to draw
            c++;
        }
        ft_putchar('\n');          // end of row
        r++;
    }
}


2) The decider (logic)


We compute which character belongs at (r, c) by checking corners first, then edges, then inside:
char logic(int r, int c, int x, int y)
{
   /* corners (zero-based) */
    if (r == 0     && c == 0)        return '/';   // top-left
    if (r == 0     && c == x - 1)    return '\\';  // top-right
    if (r == y - 1 && c == 0)        return '\\';  // bottom-left
    if (r == y - 1 && c == x - 1)    return '/';   // bottom-right

    /* borders */
    if (r == 0 || r == y - 1 || c == 0 || c == x - 1)
        return '*';

    /* interior */
    return ' ';
}
For the “ABC” version, swap the returned characters (e.g., corners A/C, edges B).

Why corners first? When x == 1 or y == 1, a cell can be both an “edge” and a “corner”; deciding corners first keeps the characters correct.




Examples
rush(1, 5) (slashes version)
/
*
*
*
\
rush(4, 4) (slashes version)
/**\
*  *
*  *
\**/
rush(4, 4) (ABC version)
ABB A
B  B
B  B
CBB C




Common pitfalls (what we tripped on)
THIS IS IMPORTANT TO REMEMBER WHERE WE INVESTED TOO MUCH TIME AND WHERE WE FIGURED OUT THE LOGIC 
By tweaking the equation and the sides of the rectangle to find the correct dimensions of the corners and the body.


Mixed dimensions Compare columns with x - 1 and rows with y - 1. If you accidentally compare c with y - 1, the slashes land in the wrong places.
Newline inside inner loop Only print '\n' after finishing the entire row, otherwise you get a single vertical line.
Wrong bound in inner loop The inner loop must be while (c < x), not < y and not <= x.
Backslash escaping Use '\\' when returning/printing a backslash.


Norm & style (what we kept in mind)


Functions ≤ 25 lines.
No ternary operator, one statement per line.
Declarations at the start of the block.
Header comment block present.
Only allowed function: write (through ft_putchar).
No trailing spaces; keep line length reasonable.


This is why we split the code into a tiny rush (loops only) and a tiny logic (decisions only).




Testing tips


Change the values in main.c:

rush(1, 5);
rush(4, 4);
rush(5, 1);
rush(5, 3);

For quick debugging, you can temporarily return 'C'/'E'/'I' from logic to visualize Corners, Edges, and Interior, then switch back to the final characters.





How to switch character sets


We used two sets during development:

Slashes set: corners / and \, edges *, spaces inside.
ABC set: corners A/C, edges B, spaces inside.


To change, just adjust the return values in logic. Everything else stays the same.




Team notes


We were required to build one version; we implemented all variants for bonus practice.
We paired on the loops and split the decision logic so it’s easier to read and maintain.
If any part looks confusing, start from rush(x, y), add a small grid (e.g., x=3, y=2), and trace (r, c) as it moves. Seeing the order makes everything click.





Troubleshooting checklist


Only a single column prints → check inner loop uses c < x and newline is after that loop.
Slashes on wrong corners → confirm c uses x - 1, r uses y - 1, and corners are checked before edges.
Nothing prints → make sure x > 0 and y > 0, and main actually calls rush.
