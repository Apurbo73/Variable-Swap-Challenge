# Variable-Swap-Challenge

---

### 🎯 **Goal**

Start with:

```c
int a = 5, b = 10;
```

After swapping, print:

```
10 5
```

Using **only one `printf` statement**.

---

### ✅ Step-by-step Explanation

#### 1. **Variable Declaration and Initialization**

```c
int a = 5, b = 10, temp;
```

* `a` is set to `5`
* `b` is set to `10`
* `temp` will be used to temporarily hold a value during the swap

---

#### 2. **Swapping Logic**

```c
temp = a;
a = b;
b = temp;
```

This is a standard 3-step variable swap:

* `temp = a;` → `temp = 5`
* `a = b;` → `a = 10`
* `b = temp;` → `b = 5`

Now:

* `a = 10`
* `b = 5`

---

#### 3. **Print the Result**

```c
printf("%d %d", a, b);
```

* `%d` is a **format specifier** for integers
* This prints `a` and `b` with a **space between them**
* Output will be:

```
10 5
```

---

