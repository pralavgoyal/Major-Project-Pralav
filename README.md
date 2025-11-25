# 📚 Digital Assignment Tracker (C Project)

A simple **menu-driven C program** that helps students manage and track their assignments effectively.  
The program allows adding assignments, searching by subject, displaying all assignments, and updating their status.

---

## 🚀 Features

- ➕ Add new assignments  
- 📋 Display all assignments  
- 🔍 Search assignments by subject  
- 🔄 Update assignment status (Pending / Completed)  
- 🆔 Automatic assignment ID generation  
- 🧩 Modular programming using `header` and `utility` files  
- 💾 Uses array-based tracking system

---

## 📂 Project Structure

Digital-Assignment-Tracker/
│
├── include/
│ └── assignment_tracker.h # Header file
│
├── src/
│ ├── assignment_tracker.c # Function definitions
│ └── main.c # Entry point of program
│
└── README.md # Project documentation


---

## 🛠️ Compilation & Execution

Open terminal in the root project folder and run:

```bash
gcc src/main.c src/assignment_tracker.c -I include -o assignment_tracker

To run the program:

./assignment_tracker


| Option | Description              |
| ------ | ------------------------ |
| 1      | Add Assignment           |
| 2      | Display All Assignments  |
| 3      | Update Assignment Status |
| 4      | Search by Subject        |
| 5      | Exit Program             |


🖥️ Sample Output

--- Digital Assignment Tracker ---
1. Add Assignment
2. Display All Assignments
3. Update Assignment Status
4. Search by Subject
5. Exit
Enter your choice:


🧪 Example Usage

Add assignment → Enter subject and due date → Status automatically set to Pending

Display assignments → Shows all tasks with ID, subject, due date, status

Update status → Change from Pending to Completed

Search by subject → Find a specific assignment quickly

Exit program


📦 Requirements

GCC Compiler

VS Code / Code::Blocks / Any C IDE

Windows / Linux / macOS

Basic understanding of C programming

📈 Advantages

Easy to use

Helps track academic deadlines

Efficient searching and updating

Simple data structure

Can be improved using file handling or pointers

🔮 Future Improvements

Add file handling to save assignments permanently

Use linked list for dynamic storage

Add priority levels for assignments

Implement GUI or web-based interface

👨‍💻 Author

Pralav Goyal
🎯 ENFP | Passionate about practical and innovative coding
📬 Open to collaboration and improvement suggestions

🤝 Contributing

Contributions, bug reports, and feature requests are welcome!
To contribute:

Fork the repository

Make changes

Submit a pull request

📄 License

This project is licensed under the MIT License.
You are free to use, modify, and distribute this software.
