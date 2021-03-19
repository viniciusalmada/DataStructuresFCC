## Outline

### What is a static Array?

A static array is a fixed length container containing `n` elements **indexable** from the range `[0, n-1]`.

> _Q_: What is meant by being 'indexable'?
> 
> _A_: This means that each slot/index in the array can be referenced with a number.

### When and where is a static Array used?

* Storing and accessing sequential data;
* Temporarily storing objects;
* Used by IO routines as buffers;
* Lookup tables and inverse lookup tables;
* Can be used to return multiple values from a function;
* Used in dynamic programming to cache answers to sub-problems;

### Complexity

| Operation | Static Array | Dynamic Array |
|:---------:|:------------:|:-------------:|
| Access    | O(1)         | O(1)          |
| Search    | O(n)         | O(n)          |
| Insertion | N/A          | O(n)          |
| Appending | N/A          | O(1)          |
| Deletion  | N/A          | O(n)          |

### Dynamic Array

The dynamic array can **grow** and **shrink** in size.

> _Q_: How can we implement a dynamic array?
> 
> _A_: One way is to use a static array!

1. Create a static array with an initial capacity.
2. Add elements to the underlying static array, keeping track of the number of elements.
3. If adding another elements will exceed the capacity, then create a new static array with twice the capacity and copy the original elements into it.

