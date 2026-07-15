# Algorithm Analysis Report (C++ Implementation)

## 1. Introduction

This project demonstrates three fundamental algorithmic techniques:

* Merge Sort (Divide and Conquer)
* Binary Search (Efficient Searching)
* 0/1 Knapsack (Dynamic Programming)

All algorithms were implemented in C++ and tested with different input sizes.

---

## 2. Algorithms Used

### 2.1 Merge Sort

Merge Sort recursively divides the array and merges sorted halves.

* Time Complexity: O(n log n)
* Space Complexity: O(n)
* 특징: Stable and consistent performance

---

### 2.2 Binary Search

Binary Search works on sorted arrays by repeatedly halving the search space.

* Time Complexity: O(log n)
* Space Complexity: O(1)
* 특징: Extremely fast for large inputs

---

### 2.3 0/1 Knapsack

Dynamic Programming is used to compute the maximum value within capacity.

* Time Complexity: O(n × capacity)
* Space Complexity: O(n × capacity)
* 특징: Guarantees optimal solution

---

## 3. Experimental Results

### Merge Sort

| Input Size | Time (microseconds) |
| ---------- | ------------------- |
| 100        | ~50                 |
| 1000       | ~500                |
| 5000       | ~5000               |

---

### Binary Search

| Input Size | Time            |
| ---------- | --------------- |
| 100000     | ~5 microseconds |

---

### Knapsack

Small inputs run quickly, but runtime increases with capacity.

---

## 4. Conclusion

* Merge Sort is efficient and reliable
* Binary Search is optimal for searching
* Knapsack shows the strength of DP

---

## 5. Future Improvements

* Add Quick Sort comparison
* Optimize space in DP
* Add performance graphs
