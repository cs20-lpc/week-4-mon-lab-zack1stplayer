# Lab 4

## Directions

You will be partially implementing the List ADT as a linked list. The `List` abstract class is already given to you, along with the header file for the `LinkedList` class, and a skeleton of its implementation file. A few operations have been given temporary, empty implementations. We will discuss how to do these in the next lecture.

You are also in charge of writing your own driver program to test your `LinkedList` class. Be thorough with your testing by checking all the operations in different scenarios and with various data types.

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
