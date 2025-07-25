# Computer Networks Lab Repository

This repository contains all lab assignments, reports, and related files for the Computer Networks course (CO 253).

## Directory Structure
Each lab is organized in its own folder (e.g., LAB01, LAB02, ...). Each folder may contain:
- Source code files (`.c`)
- Compiled executables (`.exe`)
- Packet Tracer files (`.pkt`)
- Reports (`.pdf`, `.docx`)
- ZIP archives of submissions

## How to Use
1. **Clone the repository:**
   ```sh
   git clone <your-repo-url>
   cd LABS_GITHUB
   ```
2. **Navigate to the desired lab folder:**
   ```sh
   cd LAB06
   ```
3. **Compile C source files:**
   - On Windows (using GCC):
     ```sh
     gcc Lab06-1.c -o Lab06-1.exe
     ```
   - On Linux/Mac:
     ```sh
     gcc Lab06-1.c -o Lab06-1
     ```
4. **Run the executable:**
   - On Windows:
     ```sh
     Lab06-1.exe
     ```
   - On Linux/Mac:
     ```sh
     ./Lab06-1
     ```

## Lab Descriptions
- **LAB01-LAB05:** Packet Tracer and report-based labs.
- **LAB06-LAB10:** C programming assignments and network simulations.

## Reports
Each lab folder contains a report file (PDF or DOCX) with explanations and results.

## Test Cases
See `TEST_CASES.md` for example inputs and expected outputs for C programs.

## Contributing
- Fork the repository and create a pull request for any changes.
- Add new labs in separate folders.
