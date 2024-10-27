1. Write a simple "hello world" C program.

####--Practice operators---####  
 1. Arithmetic operator 
         [ addition (+), subtration (-) , multiplication (*), division(/), modulus or remainder(%)]
2. Relational operators
        is equal to ->> [==]
        is not equal to ->>[!=]
        greater than ->> [>]
        less than  ->> [<]
        greater than equal to   ->> [>=]
        less than equal to  ->> [<=]

3. Assignment operator
        Assignment operator are used to assign value to a variable. The left side operand of hte assigning operator is a variable and the right side operand of the assignment operator is a value.
        int a;  // variable declaration 
         a = 5; // variable initialization
         int b = 6; 
         Types of Assignment operators:
                = assign value to a variable
                += This is the combination of + and + operator
                -= This is the combination of - and = operator
                
4. Bit wise operator
        The bitwise operators are the operators used to perform the operations on the data at bit level. its consists of two digits either 0 or 1 .
        Types of it:
                &  bitwise AND operator
                |  bitwise OR operator
                ^  bitwise exclusive OR  operator
                ~   One's complement operator(unary operator)
                <<  left shift operator
                >>   right shift operator
5. Size of operator:
        The sizeof () operator is the most common operator in C. It is a compiler time unary oprator and used to compute the size of its operand. It returns the size of a variable. TI can be applied to any data type. such that float type, pointer type variables. It gives the size of a data type.
                        sizeof(int);
                        sizeof(char);
                        sizeof(float);
                        sizeof(double);
6. Input and Output Function:
        (a)Input Function:
                        scanf() 
                        getchar() 
                        gets()
        (b)Output Function:
                        printf()
                        putchar()
                        puts()
7. Function in C: // see folder named function_in_C

8. Storage Classes in C:
        Giving additional information to the variable is known as storage class.
        every variable declaration describe three things:
                (a) data type of the variable
                (b) name of the variable
                (c) size of the variable
        additional information about the variable:
                default value of the variable
                location/ storage
                visibility/scope
                life time of the variable
        Types of storage classes:(all are keywords)
                (a) auto
                (b) register
                (c) static
                (d) extern
9.     Array and String in C:
        An array is a collection of similar data type
        one -dimensional array:
                It is also called linear array concepetually one-dimensional array acts as a row, where elements are stored one after another
        two-dimensional array:
                Two dimensional array is used to represents the elements of the array in the form of row and column.
        Passing array to function:
                an array name can be used as an arguments to a function thus 
                permitting the entire array to be passed to the function
        String in C:
                String is a collection of similar type of character elements in array.
                The string can be defined as the one-dimensional array of character terminiated by a null ('\0'). the termination character \0 is importatn in a string since it is the only way to identity where the string ends.
                Two way of declaring a string in C langauge:
                        By char array
                        By string literal
                String handling function in C:
                        strcat
                        strcmp
                        strcp
                        strlen
10. Pointers in C programming:
        1.Pointer declaration.
        2.Pointer initialization.
        3.Single pointer
        4.Double pointer 
        5.Pointer to array
        6. Pointer to strings
        7. Types of operation used in c programming
         ==>> There are four arithmetic operators that can be used in pointer.
                a) Increment
                b) Decrement
                c) Addition
                d) Subtraction
        8. Types of Pointer in C programming
                a) Wild pointer
                b) NULL pointer
                c) void pointer
                d) Dangling pointer


                        
        
       

                


