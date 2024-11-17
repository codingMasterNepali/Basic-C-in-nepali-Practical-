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
11. Stucture and Unions in C programming:
        Structure in C is a user-defined data types it enables us to store the collection of different data types.
        Each elements of a structure is called a member structure.The 'struct' key used to define the structure.
        Syntax of structure define:
                struct structure_name{
                        data_type member;
                        data_type member;
                        .
                        .
                };
                        #Define
                #Declare
                #Initialization
                #Access to the structure members elements
                        1) dot (. ) operator method
                        2) -> structure pointer operator 
                #Array of Structue in C
                        Declaring an array of structure is same as declaring an array of fundamentals types.
                        Since a anrray is a collection of elements of the same type. In an array of structure,
                        elements of an array is of the struc type.
                #Pointer to structures in C programming
                        The pointer to a structure in C is very similar to the pointer to any in-built data type variable.
                        The Syntax of declaring a pointer to structure variable is:
                                struct structure_name *pointer_variable

                #Structure and Function in C programming
                        Like all other type, you can pass structure as arguments to a function . In fact you can pass individual
                        memberss, structure variable, a pointer to structre etc to the function.Function can return either 
                        an individual members or structure variable or pointers to the structure.
        Unions in C programming  
                Unions are conceptually similar to structures. the only difference in terms of storage in structure each members has 
                its own storage location whereas all members of union uses a single shared memeory location which is equal to the size of 
                of its largest data members.
                Syntax:
                                union union_name{
                                        data_type member;
                                        data_type member;
                                        data_type member;
                                };    


12. The Pre- Processor:
        >As the name suggest pre-processor are programs that process our source code before compilation.
        >The C pre-processor is a macro pre-processor that transforms your code/ program before it is compiled.

        Pre-processor tasks:
        1. Source file inclusion:
                #include<stdio.h> will be replaced by the original implementation of stdio.h file, basically it will remove the #include statement form the source code and includes stdio.h file content into the source program.
        2. Macro Substitution
                A macro is a segment of code which is replaced by the value of macro. macro is defined by the #define directive

                Function in macro definition:
                        Macro:
                        In a macro call the pre-processor replaces the macro template with its macro expansion.
                        Usually macros make the program run faster but increase the program size.
                        Function:
                        In a function call the contorl is passed to a function along with certain arguments, some calculations are performed in the function and as useful value is returned back the function.
                        function make program smaller.
                Nesting:
                        One macro can use another macro in its definition is called macro nesting.
                You can also use one macro in the definition of another macro. That is macro definition may be nested.

                       
        3. Conditional Compilation:
                        In C programing we can insert pre-processor whether to include a block of code or not. to do so. conditional directive can be used .



13. Dynamic Memory Allocation(DMA):
                        1.malloc
                        2.calloc
                        3.realloc
                        4.free
                Memory segment in C programming

                Linked list:
        
       

                


