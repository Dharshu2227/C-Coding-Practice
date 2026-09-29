# C Programming Practice

This repository contains basic C programming problems created for coding practice and interview preparation.

## 📌 Programs Included

### 1. Armstrong Number

A program to check whether a given number is an Armstrong number.

An Armstrong number is a number where the sum of the cubes of its digits is equal to the original number.

**Example:**

```text
153 = 1³ + 5³ + 3³
153 = 1 + 125 + 27
153 = 153
```

**Sample Input:**

```text
153
```

**Sample Output:**

```text
Armstrong Number
```

**File:** `ArmstrongNumber.c`

---

### 2. Perfect Number

A program to check whether a given number is a Perfect Number.

A Perfect Number is a positive integer equal to the sum of its proper divisors.

**Example:**

```text
6 = 1 + 2 + 3
```

**Sample Input:**

```text
6
```

**Sample Output:**

```text
Perfect Number
```

**File:** `PerfectNumber.c`

---

### 3. FizzBuzz

A program that prints numbers from 1 to 100 based on the following conditions:

* Divisible by 3 → `Fizz`
* Divisible by 5 → `Buzz`
* Divisible by both 3 and 5 → `FizzBuzz`
* Otherwise → Print the number

**Sample Output:**

```text
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
```

**File:** `FizzBuzz.c`

---

## 🛠️ Technologies Used

* C Programming
* Conditional Statements
* For Loop
* While Loop
* Modulo Operator (`%`)
* Basic Number and Digit Manipulation

## 🎯 Purpose

This repository is created to practice fundamental C programming concepts and improve problem-solving skills for coding tests and technical interviews.

## 📂 Project Structure

```text
C-Coding-Practice/
│
├── ArmstrongNumber.c
├── PerfectNumber.c
├── FizzBuzz.c
└── README.md
```

## ▶️ How to Run

Compile a C program using:

```bash
gcc ArmstrongNumber.c -o ArmstrongNumber
```

Then run:

```bash
./ArmstrongNumber
```

For the other programs:

```bash
gcc PerfectNumber.c -o PerfectNumber
./PerfectNumber
```

```bash
gcc FizzBuzz.c -o FizzBuzz
./FizzBuzz
```

**C Programming Practice Repository**
