# In-Class Installation: Day 1

This is the hands-on setup you complete in class on Day 1. By the end you will
have the course repository, a C toolchain, the `edu_unit` test runner, VS Code
configured for C, all AI features turned off, and one passing test submitted to
Gradescope.

**Prerequisite:** the pre-class installation is done — WSL 2 with Ubuntu, plus
Windows-side VS Code. See [PreClassInstallation.md](PreClassInstallation.md).

Budget about 45 minutes. You need your Ubuntu password (for `sudo`), an
internet connection, and about 1 GB of free space.

## Part 1: Get the course repository

Open an **Ubuntu** terminal (Start menu → Ubuntu, or `wsl` in Windows Terminal)
and run:

```bash
cd ~
git clone https://github.com/RHIT-CSSE/csse120-ece.git
cd csse120-ece
```

The repository is public, so this needs no GitHub account or sign-in. If you
already cloned it, just `cd ~/csse120-ece` instead.

Check the checkout:

```bash
ls
```

You should see `Class-Materials`, `Homework`, `edu_unit`, and `syllabus.md`.

> You work in your own copy. Your edits stay on your machine — you do not push
> to this repository. Graded work is submitted on Gradescope as source files.

## Part 2: Install the C toolchain

The course compiles with `clang`, debugs with `gdb`, and checks memory with
`valgrind`:

```bash
sudo apt update
sudo apt install -y clang gdb valgrind libc6-dev
```

`sudo` asks for your **Ubuntu** password (the one you created in the pre-class
installation); nothing appears as you type.

| Package | Why it is installed |
|---|---|
| `clang` | The C compiler this course uses, and what the tests build with |
| `gdb` | The debugger VS Code drives when you set breakpoints |
| `valgrind` | The memory checker used in later lessons |
| `libc6-dev` | The C standard library headers, including `stdio.h` |

Confirm all three tools are present:

```bash
clang --version
gdb --version
valgrind --version
```

Each prints a version line; exact version numbers depend on the Ubuntu release.
If any says `command not found`, the `apt` step did not finish — re-run it and
read the error.

## Part 3: Put `edu_unit` on your PATH

Course tests are written in the in-house `edu_unit` format (the `*.lua` files
next to each `*.c` file). The repository ships a prebuilt `edu_unit` binary, so
there is nothing to compile. One script links it into `~/.local/bin` and makes
sure that directory is on your `PATH`:

```bash
cd ~/csse120-ece/Class-Materials/01-SystemConfiguration
./setup_edu_unit.sh
```

Expected output:

```text
Linked /home/<you>/csse120-ece/edu_unit -> /home/<you>/.local/bin/edu_unit
Ensured ~/.local/bin is on PATH in /home/<you>/.bashrc
Open a new terminal (or run: source ~/.bashrc), then try: edu_unit --help
```

Load the new `PATH` in your current terminal (you only need to do this
one time):

```bash
source ~/.bashrc
edu_unit --help
```

You should see usage text beginning `edu_unit — Lua spec -> unit-tested C
programs`. 

## Part 4: Configure VS Code for C

Open the repository in VS Code **from the Ubuntu terminal**:

```bash
cd ~/csse120-ece
code .
```

If VS Code asks *Do you trust the authors of the files in this folder?*, choose
**Yes, I trust the authors**. Extensions and debugging do not work in a
restricted window.

The green status bar item at the bottom-left should read **WSL: Ubuntu**.

### Install the C/C++ Extension Pack

1. Press `Ctrl+Shift+X` to open the Extensions view.
2. Search for `C/C++ Extension Pack` (publisher **Microsoft**).
3. Click **Install**. In a WSL window the button reads **Install in WSL:
   Ubuntu** — that is what you want, because the compiler lives in Ubuntu.

From a WSL window's terminal you can also install it with:

```bash
code --install-extension ms-vscode.cpptools-extension-pack
```

Then check the Extensions view: the pack must appear under **WSL: Ubuntu**.
If it landed on the Windows side instead, use **Install in WSL** there.


## Part 5: Turn off AI features

Using an LLM for graded work is prohibited in this course (syllabus Rule 4), so
VS Code is configured with AI features off.

**This repository already does it for you.** It ships
[`.vscode/settings.json`](../../.vscode/settings.json) containing:

```json
{
    "chat.disableAIFeatures": true
}
```

That setting hides chat and inline suggestions in VS Code and disables the
Copilot extension. It applies automatically when you open the repository folder
(as in Part 4) and is shared with everyone who clones the repo. To apply it to
**every** folder you open, use the Settings dialog:

1. Open Settings with `Ctrl+,`.
2. Type `disableAIFeatures` in the search box.
3. Select the **User** tab so the change applies everywhere (the **Workspace**
   tab only covers this repository).
4. Check **Disable AI Features**.


## Part 6: Your first edit, test, and submission

This is the loop you will use every day: edit a `.c` file, run its `edu_unit`
spec, then submit the source file to Gradescope. Today's program is a setup
check written just for this session.

### Open the setup-check program

Stay in the VS Code window for the repository (if you closed it, run
`cd ~/csse120-ece && code .`). In the Explorer, open
`Class-Materials/01-SystemConfiguration/hello/hello.c`.

In the VS Code terminal, move into that folder:

```bash
cd Class-Materials/01-SystemConfiguration/hello
```

### Step 1: Watch the tests fail

In the VS Code terminal (`` Ctrl+` ``), which already runs in Ubuntu:

```bash
edu_unit hello.lua
```

Expected output — the test compiles your file, runs `main`, and checks its
output:

```text
RunFailure        hello.c::main
  2 of 2 row(s) failed
  row 1: main(), output contains "Hello World!"
          output does not contain 'Hello World!': got 'Hello, World\x0a'
  row 2: main(), output contains "Welcome to CSSE 120"
          output does not contain 'Welcome to CSSE 120': got 'Hello, World\x0a'
Points: 0 / 3
edu_unit: 1 case(s) did not succeed
```

`edu_unit` exits 0 only when every case succeeds, so a failing run also tells
your shell that something is wrong.

### Step 2: Make the small change

In `main`, change the existing `printf` so it prints `Hello World!` with no
comma and with an exclamation mark, then add a second `printf` under the TODO 2
comment:

```c
    printf("Hello World!\n");
    printf("Welcome to CSSE 120\n");
```

The finished `main` looks like this:

```c
int main(void) {
    printf("Hello World!\n");
    printf("Welcome to CSSE 120\n");

    return 0;
}
```

Type the changes rather than pasting — the muscle memory is the point of Day 1.

### Step 3: Build and run it yourself

```bash
clang hello.c -o hello.bin
./hello.bin
```

Expected output:

```text
Hello World!
Welcome to CSSE 120
```

### Step 4: Re-run the tests

```bash
edu_unit hello.lua
```

Expected output:

```text
Success           hello.c::main
Points: 3 / 3
```

The spec in `hello.lua` checks that the program's output *contains* those two
lines; it does not require an exact match.

### Step 5: Submit on Gradescope

1. Open Gradescope and the assignment your instructor links for today.
2. Choose **Submit** and upload
   `~/csse120-ece/Class-Materials/01-SystemConfiguration/hello/hello.c`.
3. Wait for the autograder. A correct submission shows **3 / 3**.

The file lives in Ubuntu's filesystem, not on `C:`, so the browser's file picker
will not list it under Documents. Look for a Linux tag in your file picker. 

Submit the `.c` **source** file — never `hello.bin`, and never files from the
`out/` directory that `edu_unit` creates. Later lessons work the same way: edit
the module's `.c` file, run `edu_unit <module>.lua`, upload that `.c` file.

## Final checklist

| # | Check | How |
|---|---|---|
| 1 | Course repo cloned into your home directory | `ls ~/csse120-ece` shows `Class-Materials` and `edu_unit` |
| 2 | Compiler, debugger, and memory checker installed | `clang --version`, `gdb --version`, `valgrind --version` all print versions |
| 3 | `edu_unit` runs from any directory | `edu_unit --help` prints usage |
| 4 | C/C++ Extension Pack installed in WSL | Extensions view shows `C/C++` under **WSL: Ubuntu** |
| 5 | AI features disabled | `disableAIFeatures` checked on the **User** tab in Settings (`Ctrl+,`) |
| 6 | Setup-check program passes locally | `edu_unit hello.lua` prints `Points: 3 / 3` |
| 7 | Setup-check program submitted | Gradescope shows **3 / 3** |

## Troubleshooting

| Symptom | Fix |
|---|---|
| `git clone` asks for a username/password or fails with `Permission denied (publickey)` | Use the `https://` URL shown above, not an `ssh` URL. The repository is public. |
| `E: Could not get lock /var/lib/dpkg/lock-frontend` | Another `apt` run is still going. Wait for it to finish, then re-run your command. |
| `clang: command not found` | The `apt install` step did not complete. Re-run `sudo apt install -y clang gdb valgrind libc6-dev`. |
| `fatal error: 'stdio.h' file not found` | `libc6-dev` is missing. Install it: `sudo apt install -y libc6-dev`. |
| `edu_unit: command not found` | You have not loaded the new `PATH`. Run `source ~/.bashrc`, or open a new terminal. Check that `~/.local/bin/edu_unit` exists. |
| `edu_unit: cannot execute binary file: Exec format error` | The shipped runner is an x86-64 Linux binary and this laptop is ARM. Tell the instructor. |
| `code: command not found` | Reopen the terminal; if it persists, re-run the VS Code installer with **Add to PATH** checked (pre-class step). |
| VS Code shows `Install in WSL` for the C/C++ extension | That button is correct in a WSL window — click it so the extension runs where `clang` lives. |
| The trust prompt never appeared and the AI setting is not applied | Command Palette → **Workspaces: Manage Workspace Trust** → trust this folder, then reload the window. |
| `edu_unit hello.lua` still fails after your edits | Read the `row N` line: it names the text your output is missing. Check that the first `printf` says exactly `Hello World!` (no comma), that the second is inside `main`, and that both end with `;` and use `\n`. |
| Local tests pass but Gradescope gives 0 / 3 | You uploaded the wrong file or an unedited copy. Upload `hello.c` itself, not `hello.bin` or anything in `out/`. |

## Reference

- [PreClassInstallation.md](PreClassInstallation.md) — WSL, Ubuntu, and VS Code
  installation
- Git, [`git clone`](https://git-scm.com/docs/git-clone)
- Visual Studio Code, [Developing in WSL](https://code.visualstudio.com/docs/remote/wsl)
  and [C/C++ extension pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack)
- Visual Studio Code, [Set up GitHub Copilot](https://code.visualstudio.com/docs/setup/copilot)
  — the `chat.disableAIFeatures` setting used above

*Instructions checked against the vendor documentation above in November 2026.*
