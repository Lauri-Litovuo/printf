# printf

This project was completed as part of the curriculum for the Hive Helsinki Coding School. The goal of the project was to recode the printf() function from libc and create a library that contains ft_printf(), a function that mimics the original printf(). The function had to handle the following conversions: cspdiuxX%. The project also required the use of a variable number of arguments.

During this project, I learned many aspects of C programming, including memory allocation, pointers, and the use of variadic functions. I also focused on increasing the readability of my code by learning best practices for in-file commenting.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [License](#license)
- [Tests](#tests)
- [Security](#security)

## Installation

To install the ft_printf library, follow these steps:

1. Clone the repository: `git clone git@github.com:Lauri-Litovuo/printf.git ft_printf`
2. Change into the project directory: `cd ft_printf`
3. Compile the library: `make`

And you're good to go!

## Usage

To use the ft_printf library, include the header file `ft_printf.h` in your C file and compile your program with the library:

```
#include "ft_printf.h"

int main()
{
    char *name = "Lauri";
    char *employment = "a student at Hive Helsinki Coding School";

    ft_printf("Hello, my name is %s and I am %s.\n", name, employment);
    ft_printf("Want to work together?\n");

    return 0;
}
```

This example demonstrates how to use the ft_printf function to print out a funnier formatted string with variables. The `%s` conversion specifier is used to print out the `name` variable, `%d` is used to print out the `age` variable, and `%f` is used to print out the `height` variable with two decimal places. The `\n` character is used to print out a newline at the end of each string. The last string is just a fun statement about the author's love for pizza.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


## Security

Please note that each function in the ft_printf library has its own limitations. Be sure to read the documentation carefully and test your code thoroughly to avoid any security vulnerabilities. It is important to note that this ft_printf library does not handle all format specifiers that the original printf does. Be sure to check the documentation for a full list of supported conversions.
