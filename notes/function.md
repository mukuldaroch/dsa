# 🔹 1. Sorting & Searching

✅ Sorting a vector or string:
```cpp
sort(v.begin(), v.end());  // Ascending order
sort(v.rbegin(), v.rend());  // Descending order
sort(v.begin(), v.end(), greater<int>()); // Another way for descending
```

✅ Checking if an element exists:
```cpp
binary_search(v.begin(), v.end(), x);  // Returns true if x is in v
```

✅ Finding first element >= x (Lower Bound)
```cpp
auto it = lower_bound(v.begin(), v.end(), x);
```

✅ Finding first element > x (Upper Bound)
```cpp
auto it = upper_bound(v.begin(), v.end(), x);
```

# 🔹 2. Max, Min, and Sum Operations

✅ Finding max and min in a vector
```cpp
int max_val = *max_element(v.begin(), v.end());
int min_val = *min_element(v.begin(), v.end());
```

✅ Sum of all elements in a vector
```cpp
int sum = accumulate(v.begin(), v.end(), 0);
```

✅ Counting occurrences of an element
```cpp
int count_x = count(v.begin(), v.end(), x);
```

# 🔹 3. String Manipulation

✅ Reversing a string
```cpp
reverse(s.begin(), s.end());
```

✅ Checking if two strings are anagrams
```cpp
sort(s1.begin(), s1.end());
sort(s2.begin(), s2.end());
if (s1 == s2) { /* They are anagrams */ }
```

✅ Splitting a string into words
```cpp
stringstream ss(str);
string word;
while (ss >> word) { 
    words.push_back(word); 
}
```

# 🔹 4. Unordered Map & Unordered Set

✅ Check if a key exists in unordered_map
```cpp
if (mp.find(key) != mp.end()) { /* Key exists */ }
```

✅ Insert, Erase, and Count in unordered_map
```cpp
mp[key] = value;
mp.erase(key);
mp.count(key);  // Returns 1 if key exists, else 0
```

✅ Insert and Erase in unordered_set
```cpp
st.insert(x);
st.erase(x);
st.count(x);  // Returns 1 if x exists, else 0
```

# 🔹 5. Heap / Priority Queue

✅ Max Heap (default)
```cpp
priority_queue<int> pq;
pq.push(5);
pq.pop();
int maxElement = pq.top();
```

✅ Min Heap
```cpp
priority_queue<int, vector<int>, greater<int>> pq;
pq.push(5);
pq.pop();
int minElement = pq.top();
```

# 🔹 6. Stack & Queue

✅ Stack (LIFO - Last In First Out)
```cpp
stack<int> st;
st.push(1);
st.pop();
int topElement = st.top();
```

✅ Queue (FIFO - First In First Out)
```cpp
queue<int> q;
q.push(1);
q.pop();
int frontElement = q.front();
```

✅ Deque (Double-ended queue)
```cpp
deque<int> dq;
dq.push_front(1);
dq.push_back(2);
dq.pop_front();
dq.pop_back();
```

# 🔹 7. Vector Operations

✅ Initialize a vector of size n with default value 0
```cpp
vector<int> v(n, 0);
```

✅ Resize a vector
```cpp
v.resize(new_size);
```

✅ Insert & Erase in a vector
```cpp
v.insert(v.begin() + index, value);
v.erase(v.begin() + index);
```
✅>>> Remove duplicate elements from a sorted vector
```cpp
v.erase(unique(v.begin(), v.end()), v.end());
```
