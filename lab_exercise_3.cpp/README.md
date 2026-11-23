<div align="center">

# 🚀 Lab 3: Algorithm & Flowchart Design

**Universiti Teknologi Malaysia (UTM) | Data Engineering**

[![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)]()
[![VS Code](https://img.shields.io/badge/VS_Code-0078D4?style=flat-square&logo=visual%20studio%20code&logoColor=white)]()
[![Status: Completed](https://img.shields.io/badge/Status-Completed-success?style=flat-square)]()

</div>

> **Author:** WONG YAN KANG (Matric: A26CS0465)  
> **Course:** SCST1133 Data Engineering Ecosystem / C++  
> **Tools Used:** Flowgorithm / diagrams.net, VS Code, C++ Compiler  

---

## 📖 Project Overview

This repository contains the deliverables for **Lab 3**, focusing on computational thinking, algorithm design, and translation into C++ code. The project demonstrates core programming concepts including sequential execution, selection structures (If/Else), and repetition structures (Pre-test and Post-test loops).

---

## 📂 Repository Structure

```text
📦 Lab3-Algorithm-Flowchart
 ┣ 📜 LT3_A26CS0465_WONG (2).pdf     # Main Lab Report (Flowcharts, Pseudocode & Trace Tables)
 ┣ 💻 incometax (1).cpp              # C++ Source Code for Task B1
 ┗ 💻 average-pretestloop (1).cpp    # C++ Source Code for Task B3
```

---

## 🛠️ Task Breakdown

### 🔹 Part A & B: Algorithm Designs (PDF Report)
The `LT3_A26CS0465_WONG (2).pdf` document contains detailed Flowcharts, Pseudocode, and Trace Tables for the following logical problems:
* **A. Even or Odd:** Basic modulo logic to determine number parity.
* **B1. Income Tax:** Sequential calculation using mathematical formulas.
* **B2. Noise Loudness:** Multi-level `if-else` categorization based on decibel inputs.
* **B3. Average of 15 Numbers:** Demonstration of both `pre-test` (while) and `post-test` (do-while) loop structures.
* **B4. Bina Education Applications:** Data filtering using loop termination conditions (`!= "OK"`).
* **B5. Modular Flowchart:** Implementing functions (`AVRG`) with actual and formal parameters.

### 🔹 Part C: C++ Implementations
The conceptual flowcharts are translated into the following working C++ programs:

1. **`incometax (1).cpp`**
   * Computes payable income tax based on user inputs (monthly income and number of kids).
   * **Core Logic:** `tax = 0.25 * (monthlyIncome * 11 - numKids * 450)`

2. **`average-pretestloop (1).cpp`**
   * Uses a `while(count < 15)` pre-test loop to read 15 numerical inputs from the user, sum them up, and output the final average.

---

## 🚀 Quick Start / How to Run

To run these C++ files locally using **Visual Studio Code**:

1. **Clone the repository:**
   ```bash
   git clone <your-github-repo-url>
   cd Lab3-Algorithm-Flowchart
   ```
2. **Compile the code** (Assuming GCC/G++ is installed):
   ```bash
   g++ "incometax (1).cpp" -o incometax
   g++ "average-pretestloop (1).cpp" -o average
   ```
3. **Run the executables:**
   * *Windows:* `.\incometax.exe` or `.\average.exe`
   * *Mac/Linux:* `./incometax` or `./average`

---
<div align="center">
  <i>Developed for SCST1133 Data Engineering Ecosystem / C++ Coursework</i>
</div>