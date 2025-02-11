# Installation and Initialization Process for Windows Users

## Initialize C

1. **Download MinGW**: [MinGW-w64 Download](https://sourceforge.net/projects/mingw-w64)
2. **Run Installer**: Choose `C++`, `C`
3. **Set Installation Directory**: `C:\mingw-w64`

## Initialize CS50

1. **Download CS50 GitHub Repository**: [CS50 Library](https://github.com/cs50/libcs50)
2. **Extract the File to**: `C:\cs50`
   - In the extracted folder, you should see the following files:
     - `cs50.h` (Header file)
     - `cs50.c` (Source file for the library)
3. **Compile CS50 Library**:
   ```bash
   cd C:\cs50
   gcc -c cs50.c -o cs50.o
   ar rcs libcs50.a cs50.o
   ```

## Configure Environment Variables

1. **Open Environment Variables**:
   - Press `Windows + R`
   - Type `sysdm.cpl` and press **Enter**
   - Navigate to **Advanced** > **Environment Variables**
   - Find `Path`, then click **Edit** > **New**
   - Add the following paths:
     - `C:\mingw-w64\mingw32\bin`
     - `C:\mingw\bin` (if applicable)
     - `C:\cs50`
   - Click **OK** to save

## Use the CS50 Library

Now, you can include `cs50.h` in your C programs and link the CS50 library when compiling.

### Compilation and Execution

1. Navigate to the directory where your `hello.c` file is located.
2. Compile using:
   ```bash
   gcc hello.c -o hello -IC:\cs50 -L C:\cs50 -lcs50
   ```
3. Run the compiled program:
   ```bash
   ./hello


Here you are
