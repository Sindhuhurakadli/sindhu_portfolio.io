
---

# 🌐 **DSA Sphere – A Portfolio of Possibilities**

### 🧩 *Where Algorithms Meet Real-World Innovation*

---

## 📝 Course Details


<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Name</dt>
<dd>Sindhu</dd>
<dt>SRN</dt>
<dd>01fe22bcs216</dd>
<dt>Course Instructor</dt>
<dd>Prakash Hegade</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
<dt>Portfolio Topic/Domain</dt>
<dd>Microsoft</dd>
</dl>


> *“Putting you first in every click — redefining Microsoft service management.”*

---

## 🔗 **Navigation Index**

✨ Tap a section to explore deeper insights:

1. [🌱 Introduction: Microsoft’s Digital Ecosystem](#1-introduction)
2. [🎯 Objectives: Why This Portfolio Matters](#2-objectives)
3. [📈 From Business Cases to Algorithmic Blueprints](#3-business-use-cases-and-algorithmic-mapping)
4. [📊 Use Case Evaluation & Efficiency Metrics](#4-performance-insights-and-metrics)
5. [🧠 Key Learnings and Reflections](#5-learnings-and-final-takeaways)

---

## 1. 🌱 Introduction: Microsoft’s Digital Ecosystem

<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/Microsoft-365.jpg?raw=true" width="70%">
  <br><i>Figure: Microsoft—Empowering every person and organization on the planet to achieve more.</i>
</p>

Microsoft is more than a tech giant—it’s a **digital enabler**. Whether you’re a developer building the next big app, a student working on assignments, or an enterprise architect designing cloud solutions, Microsoft meets you where you are.

With products rooted in **efficiency, intelligence, and connectivity**, Microsoft offers an unmatched ecosystem for businesses and individuals alike. These services present real-world challenges and optimization opportunities—**perfect use cases for algorithmic problem-solving**.

---

### 🛠️ Core Services Explored

| Service                    | Description                                                |
| -------------------------- | ---------------------------------------------------------- |
| 💻 **Windows OS**          | Operating system powering global computing.                |
| 🧰 **Microsoft 365**       | Productivity toolkit: Word, Excel, PowerPoint & more.      |
| ☁️ **OneDrive**            | Cloud storage accessible anytime, anywhere.                |
| 💬 **Microsoft Teams**     | Collaboration suite for communication and teamwork.        |
| 🔧 **Azure**               | Robust cloud computing with AI, analytics, and dev tools.  |
| 📧 **Outlook**             | Integrated email and calendar manager.                     |
| 🖥️ **Visual Studio**      | IDE for building and debugging apps in real time.          |
| 🐙 **GitHub**              | Code collaboration and version control powerhouse.         |
| 📊 **Power BI**            | Business insights through interactive visualizations.      |
| 🧱 **Power Apps**          | No-code/low-code app builder for rapid deployment.         |
| 🌐 **Microsoft Edge**      | Fast, secure browser with built-in productivity tools.     |
| 🎮 **Xbox**                | Immersive gaming platform with global reach.               |
| 🧑‍💼 **LinkedIn**         | Professional networking and career development.            |
| 🖊️ **Surface Devices**    | Elegant hardware solutions tailored for productivity.      |
| 🗣️ **Cortana**            | AI assistant for seamless task management.                 |
| 🛡️ **Microsoft Defender** | Always-on cybersecurity for personal and enterprise needs. |

> 🎯 *Every product is an opportunity to optimize, automate, and innovate using algorithms.*

<br>
# 2.Objectives

1. Apply theoretical knowledge gained from Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses to real-world challenges of microsoft.

2. Identify key algorithms, data structures, or system design techniques currently in use or with potential applications in enhancing Microsoft features.

3. To connect Microsoft tools with basic DSA concepts and show how they solve real-world problems.

4. To provide a detailed analysis of each algorithm’s complexity and performance.
<br><br><br>
# 3.Business Use Cases➡️Algorithmic Solutions

### **1. Hash Tables in Microsoft Outlook (Email Deduplication and Search)**

**How it's used:**

Hash tables in Microsoft Outlook can be used to improve performance by giving each email a unique code, which makes it easy to detect and remove duplicates. They also speed up contact lookup when typing names or email addresses and make searching through emails faster by organizing and indexing them efficiently.

**Challenges:**

* Must be very fast so Outlook feels smooth.
* Needs to avoid mix-ups where different emails get the same code.

**Why it’s useful:**

* Faster email search and better organization.
* Saves space by removing repeated emails.
* Improves user experience, making Outlook quicker and easier to use.
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/2016-05-07-objc-hashtable-hashstate-next.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [1] Hash maps for deduplication of emails
  <br>
</p><br>

 **Algorithms, Design Techniques, Performance Analysis:**

* **Design Technique:** Hashing, Direct Access Table
* **Time Complexity:**
  * **Average Case:** O(1) for insert, delete, and lookup
  * **Worst Case:** O(N) (when many keys collide and are stored in a list or tree)
* **Space Complexity:** O(N), where N is the number of key-value pairs

---
[View Hash map's code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/hash.cpp){:target="_blank"}<br>

<br><br>

### **2.Segment Trees in Microsoft (Azure Monitoring and Analytics)**

Can be used in Microsoft Azure to analyze system logs or monitor metrics like CPU or memory usage over time. Segment trees make it easy to quickly calculate things like the average CPU usage between two time points, even when handling large amounts of data.

**Challenges:**
Handling large and constantly changing datasets while still giving fast results for real-time dashboards.

**Market Benefits:**

* Faster dashboard updates with live metrics.
* Better real-time analytics for users to monitor and respond to system issues quickly.

<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/segment_tree.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [2] Segment Tree for monitoring and analytics
  <br>
</p><br>
### **Algorithms, Design Techniques, and Performance Analysis**

* **Technique:** Divide and Conquer
* **Enhancement:** Lazy Propagation (for efficient range updates)
* **Time Complexity:** O(log N) per query or update, where N is the number of data points
* **Space Complexity:** O(N), because it stores extra information for each segment in a tree structure
---
[View Segment tree's code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/segment_tree.cpp){:target="_blank"}<br>
<br><br>

### **3.Tries in Microsoft Word (Spell Checking and Autocomplete)**

Tries can be used in Microsoft Word to store dictionary words in a way that allows fast and efficient lookup based on prefixes. Tries (also called prefix trees) help Word quickly check if a word is spelled correctly and offer suggestions as you type.

**Application in Microsoft:**
Tries store thousands of dictionary words in a tree-like structure, where each node represents a character. This allows Word to instantly find all words that begin with a certain prefix, making features like spell check, autocomplete, and word suggestions very fast and accurate.

**Challenges:**
Managing the storage and fast retrieval of **hundreds of thousands of words**, while keeping the memory usage efficient and ensuring **prefix-based search** works instantly.

**Market Benefits:**

* Real-time typing assistance through fast and smart word suggestions.
* Accurate spell checking, improving writing quality.
* Enhanced user experience, especially for fast typers and professional writers.
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/tries.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [3] Tries for spelling checking and autocomplition
  <br>
</p><br>

### **Algorithms, Design Techniques, and Performance Analysis**

* **Data Structure:** Trie (Prefix Tree)
* **Design Technique:** Character-based hierarchical tree
* **Time Complexity:** O(L) per operation (L = length of the word or prefix)
* **Space Complexity:** O(N × L), where N is the number of words stored, and L is the average length of words (because each character needs its own node in the tree)
---
[View Tries code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/tries.cpp){:target="_blank"}<br>
<br><br>

### **4. Bit Manipulation in Microsoft Security (Access Control & Encryption)**

This can be used in Microsoft security tools like BitLocker or Windows Defender to perform fast and efficient low-level operations. Bit manipulation allows the system to quickly manage permissions and handle encryption tasks using compact and high-speed logic.

**Application in Microsoft:**

* Bit masks are used to assign and check user permissions, like read/write/execute rights.
* Bitwise operations are used in encryption algorithms to ensure data is securely encoded or decoded, especially in tools like BitLocker.

**Challenges:**

* Needs to be extremely fast and efficient, especially at the operating system level.
* Must use minimal memory and CPU, particularly for real-time security checks and cryptographic operations.

**Market Benefits:**

* Faster access control, making systems more responsive.
* Lightweight and secure encryption, protecting user data without slowing down performance.
* Supports scalable and secure computing, crucial for enterprise environments.
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/bit_manu.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [4] Bit Manipulation for Access Control & Encryption.
  <br>
</p><br>

### **Algorithms, Design Techniques, and Performance Analysis**

* **Technique:** Bit Masking, Bitwise Operations
* **Time Complexity:** O(1) for most operations like AND, OR, XOR, and shifts
* **Space Complexity:** O(1), since only a few bits or integers are used regardless of data size
---

[View Bit Manipulation code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/bit.cpp){:target="_blank"}<br>

<br><br>

### **5. Heaps in Microsoft Store’s Recommendation Engine**

This can be used in the Microsoft Store to show users the most relevant or trending apps by maintaining a list of top-rated or most-clicked products. Heaps help efficiently manage and update the top-K product recommendations in real time as user interactions or product rankings change.

**Application in Microsoft:**
Microsoft Store uses heaps to keep track of the top-K apps or products based on factors like relevance score, user activity, and purchase trends. As a user browses, heaps quickly pull the most relevant items from massive datasets to recommend in real time.

**Challenges:**

* Handling millions of users and products efficiently.
* Updating recommendations instantly as user preferences or product popularity changes.

**Market Benefits:**

* Faster and personalized recommendations during browsing.
* Higher user engagement with more relevant suggestions.
* Increased app sales through better product discovery.
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/binary-heap-update.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [5] Heap of product recommendation.
  <br>
</p><br>

### **Algorithms, Design Techniques, and Performance Analysis**

* **Techniques Used:**

  * **Min-Heap / Max-Heap:** To maintain the top-K elements (e.g., most relevant apps).
  * **Priority Queue:** To dynamically sort products based on user relevance scores.
  * **Heap Sort (if needed):** For final sorted recommendations.

* **Time Complexity:**

  * Insertion into heap: **O(log K)**
  * Extracting top-K items: **O(K log K)**

* **Space Complexity:**
* **O(K)**, where K is the number of top items being tracked
---
[View Heap operations code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/heap.cpp){:target="_blank"}<br>

<br><br>

### **6.Graph Traversal & Shortest Path Algorithms in Microsoft Products (Bing Maps, Azure, LinkedIn)**

#### **I. Dijkstra’s Algorithm in Bing Maps (Microsoft)**

**Application in Microsoft:**
Dijkstra’s algorithm is used in Bing Maps to find the shortest path between two locations in a road network where each road (edge) has a weight such as distance or estimated travel time.

**Challenges:**

* Efficiently computing shortest paths in massive, real-time road networks
* Handling dynamic updates like traffic congestion and road closures

**Market Benefits:**

* Accurate and optimal route suggestions
* Better real-time navigation decisions
* Enhanced user satisfaction and competitiveness with other navigation platforms
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/Dijkstra.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [6] Dijkstra's in bing maps.
  <br>
</p><br>
**Algorithms, Design Techniques, Performance Analysis:**

* **Dijkstra’s Algorithm** using Min-Heap (Priority Queue)
* **Greedy + Dynamic Programming approach**
* **Time Complexity:** O((V + E) log V)
* **Space Complexity:** O(V)
[View Dijkstra's code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/dijkstra.cpp){:target="_blank"}<br>

#### **II. A\* Algorithm in Bing Maps (Microsoft)**

**Application in Microsoft:**
A\* is used in Bing Maps for efficient and intelligent pathfinding. It enhances Dijkstra’s by incorporating heuristics like straight-line (Euclidean) distance to speed up searches.

**Challenges:**

* Designing effective and admissible heuristics
* Balancing search accuracy and computation time
* Reacting quickly to real-time map updates

**Market Benefits:**

* Faster route calculations with nearly optimal results
* Improved user experience with low-latency directions
* Scalability to millions of users and devices
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/A_search.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [7] A\* for path finding.
  <br>
</p><br>
**Algorithms, Design Techniques, Performance Analysis:**

* **A\* Search Algorithm**
* **Heuristic-based Best-First Search**
* **f(n) = g(n) + h(n)** (cost so far + estimated cost to goal)
* **Time Complexity:** O((V + E) log V) depending on heuristic quality
* **Space Complexity:** O(V)
---
[View A\* Search Algorithm code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/A_search){:target="_blank"}<br>

#### **III. Breadth-First Search (BFS) in Bing Maps (Microsoft)**

**Application in Microsoft:**
BFS is used in Bing Maps for computing the shortest path in unweighted graphs or approximating minimal steps (like turns or intersections) in uniform networks such as grids or small urban areas.

**Challenges:**

* Managing rapid traversal in densely connected graphs
* Supporting parallel queries for large-scale user bases
* Ensuring fast responses in bandwidth-constrained scenarios

**Market Benefits:**

* Lightweight, quick estimates for nearby or local routing
* Real-time responsiveness in mobile applications
* Efficient computation for preloading or fallback navigation modes
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/BFS.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [8] Breadth-First Search in Bing Maps.
  <br>
</p><br>
**Algorithms, Design Techniques, Performance Analysis:**

* **Breadth-First Search (BFS)** using a queue
* **Level-order traversal** of nodes
* **Time Complexity:** O(V + E)
* **Space Complexity:** O(V)
---
[View Breadth first serach code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/bfs.cpp){:target="_blank"}<br>
<br><br>


### **7. Priority Queues for Job Prioritization in Microsoft Azure**

**Application in Microsoft:**
Microsoft Azure can use priority queues to schedule and prioritize cloud jobs, tasks, and virtual machine requests. For example, Azure Batch or Azure Kubernetes Services (AKS) schedules tasks based on urgency, user-defined priority, and system resource availability using a heap-based priority queue.

**Challenges:**

* Efficient task scheduling in massively distributed systems
* Fair resource allocation among competing jobs
* Supporting preemption, dynamic scaling, and SLA-based dispatching

**Market Benefits:**

* Improved resource utilization and task throughput
* Better support for real-time, mission-critical applications
* Higher customer satisfaction via SLA adherence and fast response
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/priority_queue.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [9] Priority Queues for job prioritization in microsoft azure.
  <br>
</p><br>
**Algorithms, Design Techniques, Performance Analysis:**

* Min-Heap / Max-Heap implementation of Priority Queues

* Tasks/jobs ordered by custom priority scores or timestamps

* Used in: Azure Batch Scheduler, Azure Functions runtime, AKS, and VM provisioning logic

* **Time Complexity:**

  * Insertion into Priority Queue: O(log N)
  * Fetch highest/lowest priority task: O(1)
  * Deletion (pop): O(log N)

* **Space Complexity:** O(N), where N = number of active jobs/tasks in the queue
---
[View Priority Queue code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/priority_queue.cpp){:target="_blank"}<br>
<br><br>

### **8. Skip Lists in Microsoft Azure Table Storage & Search Indexing**

**Application in Microsoft:**
Skip lists can be utilized in Microsoft Azure Table Storage and Microsoft Search (e.g., Outlook Search, Bing Enterprise Search) to maintain sorted indexes of entities, documents, or records based on keys like timestamps, relevance, or custom scores. They allow fast insertions, deletions, and searches in distributed key-value stores or full-text indexes.

**Challenges:**

* Maintaining sorted access to large-scale dynamic data
* Achieving low-latency range queries and insertions** in scalable cloud systems
* Avoiding lock contention and excessive rebalancing (as in traditional trees)

**Market Benefits:**

* Faster indexing and querying for enterprise search and storage
* Real-time updates to search indexes without full reprocessing
* Improved performance in document retrieval and structured logging systems
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/skip_list.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [10] Skip Lists in Microsoft Azure Table Storage & Search Indexing
  <br>
</p><br>
**Algorithms, Design Techniques, Performance Analysis:**

* **Skip Lists:** Probabilistic balancing via multiple levels

* **Layered linked lists** simulate balanced trees with simpler logic

* **Used in:** Azure Table Storage, Microsoft Search backend components

* **Time Complexity:**

  * **Search:** O(log n) on average
  * **Insertion:** O(log n) on average
  * **Deletion:** O(log n) on average

* **Space Complexity:** O(n), where n is the number of elements in the skip list
---
[View Skip List code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/skiplist.cpp){:target="_blank"}<br>
<br><br>

### **9. Assignment Problem in Microsoft Azure Resource Allocation & Project Scheduling**

**Application in Microsoft:**
The Assignment Problem is used in Azure Resource Scheduling, workforce task allocation, and cloud service mapping, where a set of resources (e.g., virtual machines, containers, employees) must be optimally assigned to a set of tasks or jobs with minimal cost or maximum efficiency.

It also appears in project planning tools like Microsoft Project, where workers are assigned to tasks based on skill, availability, and priority.

**Challenges:**

* Minimizing cost or time while maximizing resource efficiency
* Handling large-scale, dynamic environments in real-time (e.g., Azure datacenters)
* Balancing load across heterogeneous resources and users

**Market Benefits:**

* Optimal resource utilization in cloud environments
* Faster execution of customer workloads
* Improved productivity and cost savings in enterprise tools like Microsoft Project

**Algorithms, Design Techniques, Performance Analysis:**

* **Hungarian Algorithm (Kuhn-Munkres Algorithm)** for optimal assignment

* **Greedy & Dynamic Programming** for approximations in real-time systems

* **Used in:**

  * Azure VM/container-job scheduling
  * Task allocation in Microsoft Project & Planner
  * Meeting room or device assignment in Microsoft 365

* **Time Complexity:**

  * **Hungarian Algorithm:** O(n³), where n is the number of agents/tasks
  * **Greedy Approaches:** O(n²) or faster for real-time heuristics

* **Space Complexity:** O(n²) for storing cost matrix
---
[View Assignment problem code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/assigmnet.cpp){:target="_blank"}<br>
<br><br>
Absolutely! Below is a **separate breakdown** for each **sorting algorithm** used in **Windows Explorer** and **Azure Storage**, formatted exactly like before:

---

## **10. Sorting Algorithms in Microsoft Products (Windows Explorer, Azure Storage)**

---

### **I Merge Sort in Windows Explorer File Sorting**

**Application in Microsoft:**
**Merge Sort** can be used in **Windows Explorer** to sort files by name, date, type, or size, especially when stable sorting is required (e.g., files with equal names are ordered by last modified date). Its divide-and-conquer approach ensures predictable performance even on large datasets.

**Challenges:**

* Stability needed during complex multi-criteria sorting
* Memory efficiency for large folder structures
* Responsive UI sorting in Explorer while handling background file changes

**Market Benefits:**

* Reliable and consistent sorting of file attributes
* Predictable performance even with large file systems
* Enhanced user experience for sorting large directories
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/How-merge-sort-works.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [11]  Merge Sort in Windows Explorer File Sorting
  <br>
</p><br>
**Algorithms, Design Techniques, Performance Analysis:**

* **Merge Sort:** Divide-and-conquer, stable sorting

* **Used in:** Internal sorting mechanisms in Windows Explorer

* **Time Complexity:** O(n log n)

* **Space Complexity:** O(n)

---
[View Merge sort code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/mergesort.cpp){:target="_blank"}<br>
<br><br>
### **II Quick Sort in Azure Table Storage Indexing**

**Application in Microsoft:**
**Quick Sort** can be often used in Azure Storage indexing engines (e.g., Table Storage) when quick in-memory sorting is required for non-stable or performance-first operations like sorting partitioned datasets by key or timestamp.

**Challenges:**

* Efficient in-memory sort for real-time data operations
* Handling large volumes of requests on dynamic datasets
* Optimizing for average-case time over stability

**Market Benefits:**

* Fast indexing for real-time key lookups
* Lower overhead for small-to-medium Azure tables
* Suitable for parallelized sorting in distributed environments
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/quick%20sort.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [12] Quick Sort in Azure Table Storage Indexing
  <br>
</p><br>
**Algorithms, Design Techniques, Performance Analysis:**

* **Quick Sort:** Divide-and-conquer, unstable, in-place

* **Used in:** In-memory sorting operations during Azure indexing or cache warm-up

* **Time Complexity:**

  * Average: O(n log n)
  * Worst: O(n²)

* **Space Complexity:** O(log n)
[View Quick sort code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/quicksort.cpp){:target="_blank"}<br>
<br><br>
---

### **III Radix Sort in Azure Blob Storage Key Sorting**

**Application in Microsoft:**
**Radix Sort** can be used in Azure Storage systems for **key-based sorting** of blobs or table rows when sorting by structured keys like timestamps, alphanumeric IDs, or UUIDs. It works well when the key size is fixed and predictable.

**Challenges:**

* High-performance key sorting in large distributed systems
* Avoiding comparison-based sorting for fixed-length keys
* Ensuring scalability across millions of records

**Market Benefits:**

* Fast sorting for fixed-format identifiers
* Improved throughput for indexing and metadata search
* Efficient pre-processing for range queries in blob and table storage
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/radixsort.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [13] Radix Sort in Azure Blob Storage Key Sorting
  <br>
</p><br>
**Algorithms, Design Techniques, Performance Analysis:**

* **Radix Sort:** Non-comparison sort for fixed-length data

* **Used in:** Azure Blob/Table Storage indexing layers

* **Time Complexity:** O(nk), where k = key length

* **Space Complexity:** O(n + k)

---

[View Radix sort code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/randixsort.cpp){:target="_blank"}<br>
<br><br>

---


### **11. Modular Inverse in Azure Key Vault & Encryption**

**Application in Microsoft:**
**Modular Inverse** is crucial in **Azure Key Vault** and other cryptographic services that rely on **RSA encryption/decryption**, **digital signatures**, and **elliptic curve cryptography (ECC)**. It is used to compute the multiplicative inverse modulo `n`, essential in private key operations like computing `d` in RSA where $ed \equiv 1 \mod \phi(n)$.

**Challenges:**

* Secure key generation and private key recovery
* Ensuring operations are resistant to timing attacks
* Precision and efficiency in large-number arithmetic

**Market Benefits:**

* Secure encryption/decryption with strong mathematical guarantees
* Enables digital signatures and authentication protocols
* Integral to RSA key lifecycle management in Azure Key Vault

**Algorithms, Design Techniques, Performance Analysis:**

* **Extended Euclidean Algorithm** for modular inverse

* **Used in:** RSA decryption, ECC signature generation, Azure Key Vault, Azure Confidential Ledger

* **Time Complexity:** O(log n)

* **Space Complexity:** O(1) (constant extra space)
[View Modular inverse code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/modularinverse.cpp){:target="_blank"}<br>
<br><br>
---

### **12. Fermat’s Little Theorem in Azure Cryptographic Protocols**

**Application in Microsoft:**
**Fermat’s Little Theorem** is used in **Azure’s cryptographic functions**, especially in **modular exponentiation**, **primality testing**, and **efficient inverse computation** when the modulus is a prime number. It's commonly applied in RSA, Diffie-Hellman key exchange, and signature schemes.

**Challenges:**

* Efficient primality testing for key generation
* Performing large exponentiations with modular constraints
* Ensuring randomness and security in key operations

**Market Benefits:**

* Speeds up cryptographic computations
* Reduces computational cost of public key operations
* Strengthens security with mathematically sound checks

**Algorithms, Design Techniques, Performance Analysis:**

* Fermat's Little Theorem: $a^{p-1} \equiv 1 \mod p$

* Used for fast exponentiation, modular inverses (with prime moduli)

* **Used in:** RSA/ECC in Azure Key Vault, Azure TLS handshakes, Azure IoT Hub encryption

* **Time Complexity:** O(log p) for modular exponentiation

* **Space Complexity:** O(1)

---
[View Fermat’s Little Theorem code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/fermats.cpp){:target="_blank"}<br>
<br><br>
### **13 Prime Factorization in Azure Key Lifecycle Management (RSA Security)**

**Application in Microsoft:**
**Prime Factorization** underlies the security of RSA, used in **Azure Active Directory**, **Azure Key Vault**, and **Azure confidential computing**. Though Azure never factors primes directly, the **difficulty of factorization** ensures the hardness of breaking RSA keys (i.e., computing `d` without knowing the primes `p`, `q`).

**Challenges:**

* Generating large, secure primes for RSA keys
* Preventing factorization attacks using quantum or lattice-based methods
* Safeguarding keys against side-channel leaks

**Market Benefits:**

* Foundation of modern public-key security
* Ensures trust in secure access control and identity verification
* Vital for data protection, secure messaging, and trusted certificate chains

**Algorithms, Design Techniques, Performance Analysis:**

* RSA security depends on infeasibility of factoring $n = pq$

* Key generation uses probabilistic prime generation, not direct factorization

* **Used in:** Azure Key Vault RSA keys, SSL/TLS in Azure Web Apps, Microsoft Defender Key Signing

* **Time Complexity (Factorization):**

  * Classical: Super-polynomial (e.g., $e^{(n \log n)^{1/3}}$)
  * Quantum (Shor's Algorithm): Polynomial (not yet practical at scale)

* **Space Complexity:** Varies with method

---
[View Prime factorization code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/primefactor.cpp){:target="_blank"}<br>
<br><br>

## **14. Indexing in Microsoft Databases (SQL Server, Azure SQL, Cosmos DB)**

---

### **I Binary Search Tree (BST) in Basic Indexing and Query Execution**

**Application in Microsoft:**
**Binary Search Trees (BSTs)** are foundational structures in indexing. In SQL Server and **Azure SQL**, simplified forms of BSTs are used in **expression evaluation**, **query planning**, and certain **non-balanced index structures** where insertions are infrequent but lookups are common.

**Challenges:**

* Maintaining order without enforcing balance
* Dealing with degraded performance in unbalanced trees
* Supporting low-insertion and read-heavy workloads

**Market Benefits:**

* Simpler logic for small-to-medium static index structures
* Lower overhead when balanced trees aren't needed
* Lightweight for in-memory filtering and decision trees
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/binary-search-tree-sorted-array-animation.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [14] Binary Search Tree (BST) in Basic Indexing and Query Execution
  <br>
</p><br>
**Algorithms, Design Techniques, Performance Analysis:**

* Simple BST insertion/search/delete
* **Used in:** Expression trees, basic in-memory filtering
* **Time Complexity:**

  * Best/Average: O(log n)
  * Worst: O(n) (unbalanced)
* **Space Complexity:** O(n)

---
[View Binary search tree code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/binarysearchtree.cpp){:target="_blank"}<br>
<br><br>

### **II AVL Tree in Azure Cosmos DB Query Indexes**

**Application in Microsoft:**
**AVL Trees** are used in **read-intensive applications** within **Cosmos DB** or in in-memory database engines like **SQL Server In-Memory OLTP**. These trees self-balance after each insert/delete, ensuring consistent performance.

**Challenges:**

* Maintaining balance during frequent updates
* Higher rotation cost than red-black trees
* Overhead in memory for storing balance factors

**Market Benefits:**

* Faster range queries and index lookups
* Stable performance for real-time reads
* Suitable for consistent, low-latency workloads
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/avltree.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [15] AVL Tree in Azure Cosmos DB Query Indexes
  <br>
</p><br>
**Algorithms, Design Techniques, Performance Analysis:**

* **AVL Tree:** Self-balancing BST using height differences
* **Used in:** Memory-optimized table indexing, low-latency data queries
* **Time Complexity:** O(log n) for all operations
* **Space Complexity:** O(n)

---
[View AVL code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/avltree.cpp){:target="_blank"}<br>
<br><br>

### **III Red-Black Tree in SQL Server & Azure Storage Indexing**

**Application in Microsoft:**
**Red-Black Trees** are widely used in **SQL Server’s B+-tree index maintenance**, **lock manager subsystems**, and **internal heaps**. They provide a balance between performance and simplicity for dynamic insertions/deletions, ensuring tree height stays within 2x of the optimal.

**Challenges:**

* Maintaining balance during insertions/deletions
* Managing color changes and rotations efficiently
* Supporting large dynamic datasets

**Market Benefits:**

* Efficient and predictable indexing performance
* Scales well with high-concurrency workloads
* Reduces downtime for index rebuilding
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/red-black-tree.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [16] Red-Black Tree in SQL Server & Azure Storage Indexing
  <br>
</p><br>
**Algorithms, Design Techniques, Performance Analysis:**

* Red-Black Tree: Balanced binary tree with color rules
* **Used in:** SQL Server B-tree base, query optimizer, row store indexes
* **Time Complexity:** O(log n)
* **Space Complexity:** O(n)

---
[View Red-Balck tree code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/redblacktree.cpp){:target="_blank"}<br>
<br><br>
### **IV Binary Tree Variants in Full-Text Search & Query Optimization**

**Application in Microsoft:**
General **Binary Trees** are used in **full-text search indexing**, **query parse trees**, and **expression evaluations** in Microsoft’s database systems. They allow fast traversal and structural representation of parsed SQL or search queries.

**Challenges:**

* Balancing tree construction speed with query complexity
* Representing complex expressions in minimal space
* Ensuring rapid traversal for query planning

**Market Benefits:**

* Boosts performance of keyword and semantic search
* Supports advanced query evaluation in SQL Server & Azure Cognitive Search
* Enables fine-grained token-level optimization
<p align="center">
  <img src="https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/images/binarytree.gif?raw=true" alt="Microsoft Infrastructure">
  <br>
  [17] Binary Tree Variants in Full-Text Search & Query Optimization
  <br>
</p><br>
**Algorithms, Design Techniques, Performance Analysis:**

* Binary Trees for structured representation of queries and tokens
* **Used in:** Full-text indexing engine, expression parsers, execution plan evaluators
* **Time Complexity:** O(log n) (when balanced)
* **Space Complexity:** O(n)

---
[View binary tree code here](https://github.com/Sindhuhurakadli/sindhu_portfolio.io/blob/main/codes/binarytree.cpp){:target="_blank"}<br>
<br><br>
<br><br><br>
# 4.Use Case and Efficiency Overview
<br>
<br><br><br>
# 5.Learnings and Key Takeaways
<br>
This portfolio shows how the right choice of data structures and algorithms can help solve real business problems across different areas. Each use case explains which algorithms are used, the challenges involved, the benefits gained, and the design techniques applied. It also shows how the concepts learned in APS and DSA classes can be used to tackle practical issues with a focus on efficiency.

By connecting classroom learning with real-world examples, the portfolio highlights how well-chosen algorithms can improve services and drive innovation. It emphasizes the value of understanding algorithms to make smarter, faster, and more effective solutions in everyday technology.
<br><br><br>
