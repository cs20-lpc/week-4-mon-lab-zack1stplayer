[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/I4MrHH3k)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=20392979&assignment_repo_type=AssignmentRepo)
# Week 4 Mon Lab

## Directions

You will be partially implementing the List ADT as a linked list. The `List` abstract class is already given to you, along with the header file for the `LinkedList` class, and a skeleton of its implementation file. A few operations have been given temporary, empty implementations. We will discuss how to do these in the next lecture.

You are also in charge of writing your own driver program (__Make sure to call your file driver.cpp__) to test your `LinkedList` class. Be thorough with your testing by checking all the operations in different scenarios and with various data types.  

### Submit your test results for various scenarios in Canvas - 10 points for test coverage.
With each test case indicate what scenario you are testing. Just adding similar tests won't count.

## Notes

- If you need to access the `length` attribute in your `LinkedList` class, you need to write it as `this->length`
- All nodes are to be treated as dynamic, meaning you have to use the `new` and `delete` operators with them
    + For example, to create a node, you could do
    ```C++
    Node* myNode = new Node;
    ```
- There are some operations that need to consider if it's invalid for it to be called: in those scenarios, make sure to `throw` a `string` exception explaining the error, like this
```C++
throw string("message goes here");
```
- The `<<` stream insertion operator has been overloaded for the `LinkedList` class, meaning you can use `cout` on your `LinkedList` object to print out the nodes inside


