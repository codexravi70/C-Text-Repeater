🔁 C Text Repeater

A beginner-friendly C programming project that takes text input from the user and prints it multiple times using a "for" loop.

📌 Features

- Takes text input from the user.
- Supports text containing spaces.
- Allows the user to choose how many times to repeat the text.
- Uses a "for" loop to print the text repeatedly.
- Displays each repetition with a serial number.

🛠️ Concepts Used

- "printf()" — Displaying output.
- "scanf()" — Taking user input.
- "char" array — Storing text.
- "for" loop — Repeating statements.
- Variables and format specifiers.

💻 Source Code

#include <stdio.h>

int main()
{
    int j;
    char k[100];

    printf("What do you want to write?\n");
    scanf(" %99[^\n]", k);

    printf("How many times do you want to write?\n");
    scanf("%d", &j);

    for (int i = 1; i <= j; i++)
    {
        printf("%d. %s\n", i, k);
    }

    return 0;
}

▶️ How to Run

1. Clone the Repository

Replace "YOUR-USERNAME" with your GitHub username.

git clone https://github.com/YOUR-USERNAME/c-text-repeater.git

2. Open the Project Folder

cd c-text-repeater

3. Compile the Program

gcc main.c -o text_repeater

4. Run the Program

Linux / Termux:

./text_repeater

📷 Example Output

What do you want to write?
Hello World

How many times do you want to write?
3

1. Hello World
2. Hello World
3. Hello World

🎯 Learning Purpose

This project was created to practice basic C programming concepts, including user input, character arrays, format specifiers, and "for" loops.

👨‍💻 Author

Ravi Kumar

📜 License

Free to use for learning and educational purposes.
