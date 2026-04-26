*This project has been created as part of the 42 curriculum by abdualsh*

# ft_printf

## Instructions


## Description

### Background
The task of the ft_printf project is twofold: firstly, to attempt to emulate printf, and secondly, to understand how to handle a project that relies on organizing and arranging files and folders, merging functions, and transitioning from one function to another.  

Initially, I decided to finish the project with the BONUS. This project took a long time, a lot of effort, and a lot of energy. All the students decided to avoid the bonus because of its difficulty. I decided to face the challenge.


### Divide the project into six sections.
* Library  
	* ft_printf [ft_printf.c]
* Core
	* core_loop [core_loop.c]
	* parse_format [parse_format.c]
	* dispatch_conversion [dispatcher.c]
* Process
	* process_char [process_char.c]
	* process_hex [process_hex.c]
	* process_int [process_int.c]
	* process_percent [process_percent.c]
	* process_ptr [process_ptr.c]
	* process_str [process_str.c]
	* process_uint [process_uint.c]
* Print system
	* print_char [print_char.c]
	* print_hex [print_hex.c]
	* print_signed [print_number.c]
	* print_ptr_val [print_ptr.c]
	* Print_str [print_str.c]
	* print_unsigned [print_number.c]
* Pading system
	* print_with_padding[print_padding.c]
* helping
	* ft_isdigit.c
	* ft_putchar.c
	* ft_putnchar.c
	* ft_putstrn.c
	* ft_strlen.c
	* ft_utoa.c
	* ft_xtoa.c

### How it works
The system is based on six parts, some helpful and some main. The helping part is called "helping", a term borrowed from the Libft project, hence its name. It assists functions in completing their tasks. The main part is divided into five sections, starting with "Library", which is responsible for reading user input. Next, we move to three main pillars: the core, which handles commands, creates structures, erases previous data, and performs other actions; the loop, which completes all user input in the format; and the dispatch, which is responsible for expanding the system to the next level.  

When moving to the process level, the simple goal is to clean the data and move it to the print level. when we enter the print system, you'll see that we've moved to the printing task, executing commands according to the type of character used.This forms the penultimate printing stage. Then we'll move to the final level, which I call the padding system, and at the same time, I like to call it the "Bonus" because it's the key to accurate correction of spacing, zeros, and other parameters, and to determinng the printing strategy. Finally, it returns the information to four functions at the print level.

## Algorithm and Data Structure
To Help you understand everything and how the code works, after we divided it into 5 + 1 main section, we will explain each section in detail: how the functin moves, why this loop is used, why this line of code is selected, and much more. This will allow you to delve deeply into the project.

### LIBRARY

* ft_printf [ft_printf.c]  
```c
int	ft_printf(const char *format, ...)
```
**int:** it will come out, in the lenght of it print.  
__const char *format:__ This is the list he will read to execute the orders.  
__...__: Variable list to compensate for the symbols inside the format

```c
	va_list	ap;
	int		total;
```



### CORE

* core_loop [core_loop.c]

* parse_format [parse_format.c]

* dispatch_conversion [dispatcher.c]

### PROCESS

* process_char [process_char.c]

* process_hex [process_hex.c]

* process_int [process_int.c]

* process_percent [process_percent.c]

* process_ptr [process_ptr.c]

* process_str [process_str.c]

* process_uint [process_uint.c]

### PRINT SYSTEM

* print_char [print_char.c]

* print_hex [print_hex.c]

* print_signed [print_number.c]

* print_ptr_val [print_ptr.c]

* Print_str [print_str.c]

* print_unsigned [print_number.c]

### PADING SYSTEM

* print_with_padding[print_padding.c]

### HELPING

* ft_isdigit.c

* ft_putchar.c

* ft_putnchar.c

* ft_putstrn.c

* ft_strlen.c

* ft_utoa.c

* ft_xtoa.c


## AI Disclosure

## Resources 