# Monty Bytecode Interpreter
Group project by Yichen Cao and Tingru Liu for Holberton School Australia, Melbourne.

This is a simple interpreter for Monty ByteCodes files developed as part of the **C - Stacks, Queues - LIFO, FIFO** curriculum.

Written in C programming language with vi and vs code editor.

## Table of Contents
* [Requirements](#requirements)
* [Installation](#installation)
* [Authors](#authors)
* [Copyright](#copyright)

## Requirements
* Ubuntu 20.04 LTS
    * [Windows 10 or 11](https://ubuntu.com/tutorials/install-ubuntu-on-wsl2-on-windows-11-with-gui-support#1-overview)
    * [Mac](https://ubuntu.com/download/desktop)
* [GCC](https://gcc.gnu.org/install/index.html) compiler
* Follows the [Betty](https://github.com/alx-tools/Betty/wiki) linter [style](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [documentation](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
* No more than 5 functions per file

## Installation
To run this project, install it locally by cloning our repository using the command ```git clone``` as shown below:

```
git clone https://github.com/yichehnc/holbertonschool-monty
```

### Compilation

Your code will be compiled this way:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

### How it works:

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python).
It relies on a unique stack, with specific instructions to manipulate it.
There is not more than one instruction per line.
There can be any number of spaces before or after the opcode and its argument. 

When you run ```./monty file``` , where file is the path to the file containing Monty byte code:

```
$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
$ ./monty bytecodes/00.m
3
2
1
```

Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:

```
$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
```

### Operator Instruction

These are the intructions (i.e. opcodes) that are recognised by this interpreter.

| **Opcodes** | **Description**|
|----------|----------------|
|`push`| pushes an element to the stack |
|`pall`| prints all the values on the stack, starting from the top of the stack |
|`pint`| prints the value at the top of the stack, followed by a new line |
|`pop`| removes the top element of the stack |
|`swap`| swaps the top two elements of the stack |
|`add`| adds the top two elements of the stack |
|`nop`| doesn’t do anything |

## Authors
To contact the authors of this page and to review the code or submit pull requests, please visit:

- [Yichen Cao](https://github.com/yichehnc)
- [Tingru Liu](https://github.com/tingru0515)

## Copyright

This Monty Bytecode Interpreter was created for educational purposes under the framework and guidance of Holberton School, Melbourne Australia.

 <a href="#top">Back to top</a>