#  SpeakNumber (Num2Speech)

**SpeakNumber** is a C-based project that converts any number up to 999,999,999 into spoken audio using pre-recorded `.wav` files. It's designed for Windows systems using the `PlaySound` API, making it ideal for learning multimedia handling in C.

---

## 🎯 Features

- 🔢 Converts numbers into spoken words
- 📁 Uses `.wav` sound files organized by number range
- 🔊 Plays sound using Windows `PlaySound()` API
- 🧩 Modular and easy to update or extend
- 💻 Works via console input

---

## 📽️ Demo

> Input: `123456789`  
> Output (audio plays):  
> "One hundred twenty-three million four hundred fifty-six thousand seven hundred eighty-nine"

---

## 🗂️ Folder Structure

```
SpeakNumber/
├── project1.c
├── README.md
├── .gitignore
└── wordproject/
    ├── 0_to_10/
    │   └── 0.wav, 1.wav, ..., 9.wav
    ├── 11_to_19/
    │   └── 11.wav, ..., 19.wav
    ├── 20_to_90/
    │   └── 20.wav, ..., 90.wav
    └── other/
        ├── welcome.wav
        ├── askToNumber.wav
        ├── hundred.wav
        ├── thousand.wav
        ├── lakh.wav
        ├── crore.wav
        └── last.wav
```

---

## ⚙️ How It Works

- The program breaks the input number into parts (crore, lakh, thousand, hundred, etc.).
- Plays respective sound clips using the helper function `PlayMusic()`.
- The base path to all audio files is stored in one variable, keeping the code clean and DRY.

---

## 🛠️ Requirements

- Windows OS
- GCC / MinGW compiler (for `gcc`)
- Proper folder structure and `.wav` files

---

## 🧪 Compilation

Use this to compile your code:

```bash
gcc project1.c -o SpeakNumber.exe -lwinmm
```

> `-lwinmm` links the Windows multimedia library required for `PlaySound()`.

---

## ▶️ Run the Program

```bash
./SpeakNumber.exe
```

or just double-click the `SpeakNumber.exe` file in Windows.

---

## 🧠 Why Use This Project?

- Learn multimedia handling in C
- Practice string and number manipulation
- Create a beginner-level speech project
- Modify it for other languages or educational purposes

---

## 📧 Contact

**Bhavya Godhaniya**  
📫 Email: [bhavyagodhaniya2004@gmail.com](mailto:bhavyagodhaniya2004@gmail.com)  
🌐 GitHub: [Bg987](https://github.com/Bg987)

---

## 📝 License

This project is open-source. Feel free to use or modify it for learning or personal use.

---

## 📌 Notes

- Make sure all `.wav` files are placed correctly, and filenames match exactly.
- Folder paths use double backslashes `\` because of Windows path syntax in C.
