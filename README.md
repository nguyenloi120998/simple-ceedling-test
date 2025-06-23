# Simple Ceedling Test Project

This project demonstrates how to create and run unit tests for C code using **Ceedling**, **Unity**, and **CMock**.

## 📌 What is included?

- **Ceedling**: A build and test management tool for C.
- **Unity**: The unit test framework (provides TEST\_ASSERT\_\* macros).
- **CMock**: Automatically generates mock functions from header files.
- **Gcov**: Optional tool for code coverage reporting.

---

## 🚀 Installation (Toolchain / Environment)

### 1️⃣ Install Ruby (if not installed)

Ceedling is a Ruby gem. Check your Ruby installation:

```bash
ruby -v
gem -v
```

If Ruby is missing:

```bash
sudo apt update
sudo apt install ruby ruby-dev build-essential
```

---

### 2️⃣ Install Ceedling (includes Unity + CMock + CException)

```bash
sudo gem install ceedling
sudo gem update ceedling
```

✅ Verify installation:

```bash
ceedling version
```

Expected output:

```
🌱 Welcome to Ceedling!

 Ceedling => 1.x.x
 ----------------------
 /var/lib/gems/.../ceedling-1.x.x/

 Build Frameworks
 ----------------------
 CMock => x.x.x
 Unity => x.x.x
 CException => x.x.x
```

---

### 3️⃣ (Optional) Install gcov for test coverage report

```bash
sudo apt install gcov
gcov --version
```

---

## 🚀 Create and Run Project

### Create a new Ceedling project

```bash
ceedling new my_project
cd my_project
```

### Run all tests

```bash
ceedling test:all
```

### Run a specific test file

```bash
ceedling test:test_simple_module.c
```

---

## ✅ Example Test Output

```
Building test: test_simple_module.c
Linking test_simple_module.out...

Running test_simple_module.out...

FAILED TEST SUMMARY
[test/test_simple_module.c]
  Test: test_sum_operation
  At line (8): "Expected 6 Was 5"

  Test: test_div_operation
  At line (24): "Expected 1 Was 0"

-----------------------
OVERALL TEST SUMMARY
  TESTED:  4
  PASSED:  2
  FAILED:  2
  IGNORED: 0

BUILD FAILURE SUMMARY
Unit test failures.
```

---

## 📂 Project Structure

```
src/                # Your source code (.c/.h)
test/               # Test files
vendor/             # Ceedling, Unity, CMock frameworks
build/              # Build artifacts
project.yml         # Ceedling config
```

---

## 🔗 Notes

- Ceedling automatically includes Unity and CMock — no need to install them separately.
- To generate code coverage report:
  ```bash
  ceedling gcov:all
  ```
  Check reports in `build/artifacts/gcov/`.

---

## 🗨 License

This is a simple educational example project for learning purposes.

