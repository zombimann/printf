## The prototype
   'int _printf(const char *format, ...)'

## The pseudocode
1. For each tag in the format string (`tag`)
   - If the tag is `%` followed by `d`
    - Print the next available `int` value
    - Break
   - If the tag is `%` followed by `s`
    - Print the next available string pointer (`char *`)
    - Break
   - else
     - Print the format tag
     - Break
   - newline

2. Print function (integer 'intval')
   - `_putchar('0' + `intval')
   - `_putchar('\n')`

3. Print function (string 'strval')
   ```
	while (*strval != '\0')
	      _putchar(*strval++);
	_putchar('\n');
	```
4. `_putchar`
   `write(1, &c, 1)`