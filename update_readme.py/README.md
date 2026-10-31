# 🛠️ README Auto-Updater Script

> **Python-powered automation tool for managing university assignment repositories.**

A lightweight and efficient script designed to automatically scan your workspace, organize your assignment folders, and instantly update your main `README.md` directory structure with clean, clickable Markdown links.

---

## 📌 Technical Overview

| Feature | Description |
| :--- | :--- |
| **Language** | Python 3 |
| **Primary Purpose** | Workspace automation & documentation sync |
| **Target Audience** | University programming repositories |
| **Exclusions** | Automatically filters out `.git`, `.vscode`, and `__pycache__` |

---

## 🚀 Key Features

* **Dynamic Folder Scanning:** Automatically detects newly created assignment folders (e.g., `C3_NewTask`) in your workspace directory.
* **Smart Filtering:** Ignores system-level and version control directories to keep your repository index pristine.
* **Instant Markdown Generation:** Rebuilds the document layout from scratch, ensuring perfect table alignment and relative link routing.

---

## ⚙️ How It Works

1. **Workspace Inspection:** The script reads all items in the current execution directory.
2. **Data Filtering:** Removes unwanted system directories and sorts valid assignment folders alphabetically.
3. **Table Compilation:** Injects the discovered folders into a pre-defined, professional Markdown table format with clickable paths.
4. **File Overwriting:** Safely updates your local `README.md` file with the fresh layout.

---

## 💻 Usage Instructions

Open your terminal in the project's root directory and run:

```bash
python update_readme.py