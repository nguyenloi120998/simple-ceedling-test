# Simple Ceedling Test Project

Run unit tests for code C on Embedded Linux using **Ceedling**, **Unity**, and **CMock**.

## 📌 What is included?

- **Ceedling**: A build and test management tool for C.
- **Unity**: The unit test framework (provides TEST\_ASSERT\_\* macros).
- **CMock**: Automatically generates mock functions from header files.
- **Gcov**: Optional tool for code coverage reporting.

---

## 🚀 Installation (Tools / Environment)

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

### 3️⃣ Install gcov for test coverage report

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

You can write your own test cases in `my_project`, or you can clone this simple example project to try it out:

```
https://github.com/nguyenloi120998/simple-ceedling-test
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

The output above shows the test results in the terminal.\
Next, we will generate a detailed coverage report using gcov.

---

## 📊 Generate Coverage Report

In `project.yml`, enable the following plugins and settings:

- `gcov`
- `module_generator`
- `report_tests_pretty_stdout`
- `html_detailed`
- `:html_artifact_filename: TestCoverageReport.html`
- `:html_title: Test Coverage Report`

Run the following command:

```bash
ceedling gcov:all
```

Check the coverage report at:

```
my_project/build/artifacts/gcov/gcovr/TestCoverageReport*.html
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

