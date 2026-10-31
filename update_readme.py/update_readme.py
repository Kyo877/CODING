import os

# Configuration
readme_file = "README.md"
ignored_dirs = {".git", ".vscode", "__pycache__"}

def update_readme():
    # Get all items in the current directory and filter out non-folders and ignored ones
    all_items = sorted(os.listdir("."))
    subfolders = [item for item in all_items if os.path.isdir(item) and item not in ignored_dirs]

    # Build the README content structure
    content = """# 📚 Fundamental Programming Concepts (2026/2027)

This repository contains all my coding assignments, labs, and exercises for **Degree Year 1 - Fundamental Programming Concepts**.

---

## 🛠️ About This Repository
* **Course:** Fundamental Programming Concepts
* **Academic Year:** 2026/2027
* **Program:** Degree Year 1
* **Language/Tools:** C++, VS Code, Git & GitHub

---

## 📂 Directory Structure

| Folder / File | Description |
| :--- | :--- |
| [`README.md`](./README.md) | Repository documentation |
"""

    # Loop through each folder and append it to the markdown table
    for folder in subfolders:
        content += f"| [`{folder}/`](./{folder}) | C++ solution for {folder} |\n"

    content += """
---

## 🚀 Purpose
To track my coding progress, complete university assignments, and build a strong foundation in programming concepts.
"""

    # Write the generated content back to README.md
    with open(readme_file, "w", encoding="utf-8") as f:
        f.write(content)
    
    print("README updated successfully!")

if __name__ == "__main__":
    update_readme()