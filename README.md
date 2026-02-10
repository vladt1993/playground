# Simple App

A minimal C++ project using **CMake** and **Conan** with Debug and Release presets.  
This project currently contains a simple `main.cpp` and does **not include tests** yet.  

---

## Prerequisites

- **CMake >= 3.23**
- **Conan 2.x**
- **C++ compiler** (gcc)
- Optional: Python virtual environment if you want to manage Python tools (`requirements.txt`)

---

## Setup

1. (Optional) Create a Python virtual environment:
```bash
python3 -m venv .venv
source .venv/bin/activate
```

2.  Install Python dependencies (if you have a requirements.txt):

```bash
pip install -r requirements.txt
```

3. Install Conan dependencies:
```bash
# Debug
conan install . -of Debug --build=missing -s build_type=Debug

# Release
conan install . -of Release --build=missing -s build_type=Release
```
---

## Build

**Using CMake presets**


```bash
# Debug
cmake --preset debug
cmake --build --preset debug

# Release
cmake --preset release
cmake --build --preset release
```
