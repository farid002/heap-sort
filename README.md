# ANALYSIS of ALGORITHMS - HEAPSORT

In this project we are going to analyze working principles of Heap Sort algorithm. We are scripting and applying several functions such as Build-Heap, Heapify, Heap-Sort, Extract- Max, Extract-Min and etc. We are given 10 .csv files, which contain data of employees for 10 days. It is required to find best and worst 3 employees according to certain criteria and give the execution time for each file. There is also another file named numbers.csv that contains more than a million numbers those have to be sorted by heap-sort method.


# APPLICATION AND ANALYSIS

Part a.
First data from the day1.csv is read and the data is read by using buildMaxHeap function in the code. Then 3 Maximum values were extracted from the heap, printed to the screen, and inserted back into the heap. After day1, all other files are read and the heap is updated. If an employee exists in the heap already, updateTheList function is called, else the data is inserted into the heap as a new element. After each day, I apply extractMax function 3 times and insert function 3 times as in day1.

Part b.
According to my code, reading and implementation of first day (day1.csv) is much more faster than reading and updating the heap for the other days. Here is the result after each file (each day):

![alt text](https://github.com/farid002/heap-sort/blob/master/static/10days.jpg)
 

Here is also plot for the running time for each procedure with the same values:

![alt text](https://github.com/farid002/heap-sort/blob/master/static/analysis.jpg)

-Why the running time in all other days are higher except Day1?
+Because, for the day1 only buildHeap, and maxHeapify functions are working, while increaseKey, insert, updateTheList and some other functions are calling on other days except day1. Thats why running time is much less than others.

Part c.
In part C I wrote sortNumbers function which only builds a heap, then extract one by one and write it to the output.csv. It also calculates Heap height before every 200 000 numbers and running time after every 200 000 ones. Here is the output for that part:

![alt text](https://github.com/farid002/heap-sort/blob/master/static/numbers.jpg)


# CONCLUSION
At the end, what can be learned from this repo are:

1) how to apply Heap Sort algorithm,

2) build "heap",

3) do "max-heapify",

4) generate "heapSort" function,

5) develop  related algorithms and etc.

