# Student Report Card System

A simple console-based student report card management system written in C. This program allows teachers to manage student grades and visitors to view student information.

## 🌟 Features

- **Dual Access System**
  - Teacher access (password protected)
  - Guest/Visitor access
- **Teacher Functions**
  - Add marks for students
  - View complete student information
- **Guest Functions**
  - View student information and marks
- **Input Validation**
  - Secure password system
  - Input handling for both numeric and character inputs
- **Support for Multiple Students**
  - Can handle records for 3 students
  - Stores basic information and marks for 6 subjects

## 📋 Prerequisites

- GCC Compiler
- Basic command line knowledge

## 🚀 Installation

1. Clone this repository or download the source code:
```bash
git clone https://github.com/yourusername/report-card-system.git
```
2. Navigate to the project directory:
```bash
cd report-card-system
```
3. Compile the program:
```bash
gcc main.c -o report_card
```
4. Run the executable:
```bash
./report_card
```

## 💡 Usage Guide

### Teacher Access
1. Select option `1` for Teacher access
2. Enter the default password: `100`
3. Choose from available operations:
   - Option 1: Add marks for students
   - Option 2: View student information
   - Option 3: Quit teacher section

### Guest Access
1. Select option `2` for Guest access
2. Enter student ID (1-3) to view their information
3. System will display available student data

### Important Notes
- The system doesn't persist data between sessions
- Teacher must input marks before they can be viewed
- Maximum 6 attempts allowed for teacher password
- Marks must be greater than 0 to be valid

## 📚 Subject Structure
The system manages marks for 6 subjects:
1. Myanmar
2. English
3. Mathematics
4. Chemistry
5. Physics
6. Biology

## ⚠️ Limitations
- Fixed number of students (3)
- No data persistence
- Single teacher password
- No data modification after entry
- No grade calculations or statistics

## 🔒 Security
- Default teacher password: 100
- 6 attempts maximum for password entry
- Input validation for all user inputs

## 🤝 Contributing
Feel free to fork this project and submit pull requests. You can also open issues for bugs or feature suggestions.

## 📝 License
This project is open source and available under the [MIT License](LICENSE).

## 👨‍💻 Developer
Originally developed by Aung Kyaw Thu (Aungkyaw0)

---
**Note**: For testing purposes, you need to first login as a teacher to input student marks before accessing them through any account type.
