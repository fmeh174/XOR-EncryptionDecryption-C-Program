
# 🔐 XOR-EncryptionDecryption-C-Program

A robust, simple C program that preforms bitwise XOR operation to encrypt and decrypt files and binary file processing capabilities.

[![Language](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Compiler](https://img.shields.io/badge/compiler-GCC-orange.svg)](https://gcc.gnu.org/)
[![Platform](https://img.shields.io/badge/platform-Linux-lightgrey.svg)](https://www.linux.org/)

## 🚀 Overview
This project implements a sophisticated file encryption system using bitwise XOR operations. The program demonstrates advanced C programming concepts including file I/O, pointer manipulation, string processing, and robust error handling.

- **File Encryption/Decryption**: Secure XOR-based encryption for any file type
- **Robust Password Validation**: Multi-criteria password strength verification
- **Block-wise Processing**: Efficient handling of large files through block segmentation
- **Cross-platform Compatibility**: Optimized for Linux environments with GCC
- **Memory Safe**: Careful memory management with no global variables
- **Hexadecimal Output**: Debug-friendly hex representation of encrypted data

## 🛠️ Technical Implementation

### Core Algorithms
- **XOR Cipher**: Implements bitwise XOR encryption using password-based keys
- **Block Processing**: Divides input files into password-length blocks for optimal security
- **String Manipulation**: Custom string handling without external dependencies


## ✨ Key Features

### 🔒 **Encryption Capabilities**
- **Symmetric Encryption**: Same operation both encrypts and decrypts files
- **Block-wise Processing**: Efficient memory usage through password-length block segmentation
- **Binary Safe**: Handles all file types including binary data without corruption

### 🛡️ **Security Features**
- **Multi-criteria Password Validation**: Enforces strong password requirements
- **Minimum 8-character length requirement**
- **Mixed character type validation** (alphabetic + numeric)
- **No external dependencies**: Pure C implementation for maximum security

### 🔧 **Technical Excellence**
- **Memory Safe**: Zero global variables, careful pointer management
- **Error Handling**: Comprehensive input validation and edge case management
- **Cross-platform**: Optimized for Linux/Unix environments
- **Debugging Support**: Built-in hexadecimal output for verification

## 🏗️ Architecture & Design

### Function Breakdown
| Function | Purpose | Technical Highlight |
|----------|---------|-------------------|
| `main()` | Program entry & argument validation | Command-line interface design |
| `make_new_name()` | Dynamic filename generation | String manipulation without buffer overflow |
| `is_alpha()` & `is_digit()` | Character validation | Custom implementations without library dependencies |
| `is_valid_password()` | Security policy enforcement | Multi-criteria validation logic |
| `perform_XOR()` | Core encryption engine | Binary file processing with block algorithms |
| `print_first_five()` | Debug output generation | Hexadecimal formatting for verification |

## 🛠️ Installation & Usage

### Prerequisites
- GCC compiler (version 7.0+)
- Linux/Unix environment
- Basic command-line knowledge

### Command Syntax
```bash
./xor_encrypt <filename> <password>
```

### Password Requirements
- ✅ **Length**: 8-15 characters
- ✅ **Alphabetic**: At least one letter (a-z, A-Z)
- ✅ **Numeric**: At least one digit (0-9)
- ✅ **Special**: All printable ASCII characters supported

## 📊 Technical Specifications

### Security Analysis
- **Encryption Method**: Bitwise XOR with password cycling
- **Key Strength**: Depends on password entropy
- **Attack Resistance**: Secure against basic cryptanalysis with strong passwords
- **Note**: Educational/demonstration purpose - not for production security needs

## 🧪 Testing & Validation

The program includes comprehensive testing capabilities:

```bash
# Encrypt test file
./xor_encrypt auckland.jpg abcde1234

# Validate against known results
cmp new-auckland.jpg sample1
# No output = successful implementation

# Test with different password length
./xor_encrypt auckland.jpg abcde12345
cmp new-auckland.jpg sample2
# Validates block processing correctness
```

### Error Handling Examples
```bash
# Invalid arguments
./xor_encrypt
# Output: Usage: ./xor_encrypt filename password

# Weak password validation
./xor_encrypt file.txt weak123
# Output: Password validation with specific error messages

# Non-existent file handling
./xor_encrypt nonexistent.txt strongPass123
# Graceful error handling with file operations
```

## 💡 Implementation Highlights

### Advanced C Programming Techniques
- **Pointer Arithmetic**: Safe manipulation of character arrays and file buffers
- **File I/O Operations**: Binary read/write operations with proper error handling
- **String Manipulation**: Custom implementations without external library dependencies
- **Memory Management**: Stack-allocated variables with careful lifetime management

### Code Quality Features
- **No Global Variables**: Maintains thread safety and reentrancy
- **Modular Design**: Clean separation of concerns across functions
- **Input Validation**: Comprehensive bounds checking and error detection
- **Documentation**: Clear, self-documenting code structure

### Key Technical Decisions
- **No Global Variables**: Maintains thread safety and code clarity
- **Minimal Dependencies**: Only uses `stdio.h` and `string.h`
- **Block-wise Processing**: Optimizes memory usage for large files
- **Error-first Design**: Comprehensive input validation before processing

## 🚧 Development Process

This project demonstrates several software engineering best practices:

- **Modular Design**: Clean separation of concerns across functions
- **Input Validation**: Robust error handling for user inputs
- **Memory Management**: Safe pointer operations and array handling
- **Testing Strategy**: Comprehensive validation with provided test cases
- **Documentation**: Clear code comments and user-facing documentation

## 📚 Learning Outcomes

This project showcases proficiency in:
- **Low-level Programming**: Direct memory manipulation and bitwise operations
- **System Programming**: File I/O operations and command-line interfaces, understanding of computer architecture and bitwise operations
- **Security Concepts**: Understanding of encryption principles and password validation
- **C Programming**: Advanced pointer usage, string manipulation, and function design
- **Testing & Debugging**: Systematic approach to program validation

## 📈 Learning Outcomes & Skills Demonstrated

### Technical Skills
- **C Programming**: Advanced pointer usage, memory management, file I/O
- **Cryptography**: Understanding of encryption principles and implementation
- **Algorithm Design**: Block processing, string manipulation, validation logic
- **System Programming**: Command-line interfaces, binary file operations

---

**Thank you for reading! 😊💝** 