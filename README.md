
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

* **Technique:** Divide and Conquer.
* **Enhancement:** Lazy Propagation (for efficient range updates).
* **Time Complexity:** O(log N) per query or update, where N is the number of data points.
* **Space Complexity:** O(N), because it stores extra information for each segment in a tree structure.
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
* **Space Complexity:** O(N × L), where N is the number of words stored, and L is the average length of words (because each character needs its own node in the tree).
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
* **Space Complexity:** O(1), since only a few bits or integers are used regardless of data size.
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
* **O(K)**, where K is the number of top items being tracked.
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

## **Graph Traversal & Shortest Path Algorithms in Microsoft Products (Bing Maps, Azure, LinkedIn)**


### **4. Priority Queues for Job Prioritization in Microsoft Azure**

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

<br><br><br>
# 4.Use Case and Efficiency Overview
<br>
<br><br><br>
# 5.Learnings and Key Takeaways
<br>
This portfolio shows how the right choice of data structures and algorithms can help solve real business problems across different areas. Each use case explains which algorithms are used, the challenges involved, the benefits gained, and the design techniques applied. It also shows how the concepts learned in APS and DSA classes can be used to tackle practical issues with a focus on efficiency.

By connecting classroom learning with real-world examples, the portfolio highlights how well-chosen algorithms can improve services and drive innovation. It emphasizes the value of understanding algorithms to make smarter, faster, and more effective solutions in everyday technology.
<br><br><br>
