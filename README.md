# ANALYSIS of ALGORITHMS - HEAPSORT
INTRODUCTION
In this project we are going to analyze working principles of heap sort algorithm. We are scripting and applying several functions such as Build-Heap, Heapify, Heap-Sort, Extract- Max, Extract-Min and etc. We are given 10 .csv files, which contain data of employees for 10 days. It is required to find best and worst 3 employees according to certain criteria and give the execution time for each file. There is also another file named numbers.csv that contains more than a million numbers those have to be sorted by heap-sort method.


APPLICATION AND ANALYSIS

Part a.
First I read data from the day1.csv and build the heap using buildMaxHeap function on my code. Then I extract 3 Maximum values from the heap, print it to the screen then insert them back into the heap. After day1, I read all other files and update the heap. If an employee exists in the heap already, updateTheList function is called, else the data is inserted into the heap as a new element. After each day, I apply extractMax function 3 times and insert function 3 times as in day1.

Part b.
According to my code, reading and implementation of first day (day1.csv) is much more faster than reading and updating the heap for the other days. Here is the result after each file (each day):

 

Here is also plot for the running time for each procedure with the same values:

-Why the running time in all other days are higher except Day1?
+Because, for the day1 only buildHeap, and maxHeapify functions are working, while increaseKey, insert, updateTheList and some other functions are calling on other days except day1. Thats why running time is much less than others.

Part c.
In part C I wrote sortNumbers function which only builds a heap, then extract one by one and write it to the output.csv. It also calculates Heap height before every 200 000 numbers and running time after every 200 000 ones. Here is the output for that part:



CONCLUSION
At the end, I have learned how to apply heap sort algorithm and where to use. I have also learned build heap, max heapify, heap sort function algorithms and etc.

