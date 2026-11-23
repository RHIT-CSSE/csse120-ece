# System Configuration: WSL, Ubuntu 26.04 LTS, VS Code, and YuJa Verity

Before the first class, install three things on your own Windows laptop:

1. **WSL 2** (Windows Subsystem for Linux) with an **Ubuntu 26.04 LTS** distribution
2. **Visual Studio Code** (VS Code) with the **WSL** extension
3. **YuJa Verity** — the Chrome extension and Lockdown App used for proctored quizzes and tests

All three installs are free. Budget about 40 minutes, and expect one reboot.

> These instructions assume a Windows machine. If you plan to use a Mac or a
> computer that already runs Linux, talk to the instructor before class. Your
> life will probably easier if you use the standard Rose laptop and WSL
> configuration as opposed to do something custom.

## What you need

| Requirement | Details |
|---|---|
| Windows version | Windows 11 (recommended), or Windows 10 version 21H2 or later, 64-bit |
| Permissions | Ability to run PowerShell **as administrator** (your own laptop normally qualifies) |
| Virtualization | Enabled in the BIOS/UEFI (most laptops ship with it on) |
| Disk space | ~10 GB free |
| Network | Internet access; about 1 GB of downloads |

Check your Windows version by pressing `Win+R`, typing `winver`, and pressing Enter.

Check virtualization by opening **Task Manager** (`Ctrl+Shift+Esc`) → **Performance** →
**CPU**, and looking at the **Virtualization** row. It must say **Enabled**. If it says
**Disabled**, see [Enable virtualization on Windows](https://support.microsoft.com/en-us/windows/enable-virtualization-on-windows-c5578302-6e43-4b4b-a449-8ced115f58e1)
before continuing.

## Part 1: Install WSL 2 and Ubuntu 26.04 LTS

### Step 1: Enable WSL

Open the Start menu, type `PowerShell`, right-click **Windows PowerShell**, and choose
**Run as administrator**. Then run:

```powershell
wsl --install --no-distribution
```

This turns on the Windows features WSL needs (including the Virtual Machine Platform)
without installing a Linux distribution yet. Step 2 then installs the distribution, so
you control which release you get.

**Restart your computer when prompted.** WSL cannot start a distribution until after
the reboot.

### Step 2: Install Ubuntu 26.04 LTS

**Option A — Microsoft Store (fewest steps):**

1. Open **Microsoft Store** and search for `Ubuntu`.
2. Choose the app named **Ubuntu** from publisher **Canonical Group Limited** (not
   "Ubuntu Pro"), then click **Get** (or **Install**).
3. Click **Open**, or launch **Ubuntu** from the Start menu, once the download finishes.

The Store app tracks the current LTS release. As of the start of this term it installs
**Ubuntu 26.04.1 LTS** under the distribution name `Ubuntu`. Step 4 confirms the
version you actually got.

**Option B — PowerShell (explicit release):**

```powershell
wsl --install Ubuntu-26.04
```

This installs the same release under the distribution name `Ubuntu-26.04`. To see the
available names, run `wsl --list --online`; they are case-sensitive. If the command
fails or hangs, re-run it as `wsl --install Ubuntu-26.04 --web-download`, or use
Option A.

### Step 3: Create your Linux account

The first time Ubuntu starts, it decompresses itself (this takes a minute or two) and
then asks you to create a UNIX username and password:

- **Username**: lowercase letters and digits, no spaces (for example, `jsmith`). This is
  separate from your Rose account and you can name it anything you wish.
- **Password**: typing does not echo anything — no asterisks, no dots. Type it and press
  Enter twice.   This does not need to be super secure.

### Step 4: Verify the install

In PowerShell:

```powershell
wsl --list --verbose
```

Expected output looks like one of these (`VERSION` must be `2`):

```text
  NAME        STATE           VERSION
* Ubuntu      Running         2
```

```text
  NAME            STATE           VERSION
* Ubuntu-26.04    Running         2
```

The name matches the option you chose in Step 2. If the list contains more than one
distribution, start the 26.04 one by name, for example `wsl -d Ubuntu-26.04`, or make
it the default with `wsl --set-default <NAME>`.

### Where to keep your files

Work inside your Linux home directory (`/home/<your-username>`), not under `/mnt/c`.
Files on the Windows `C:` drive are mounted at `/mnt/c` and are dramatically slower to
build from Ubuntu. Your Linux files are also reachable from Windows Explorer by typing
`\\wsl$\` in the address bar and opening the folder named after your distribution
(`Ubuntu` or `Ubuntu-26.04`).

## Part 2: Install Visual Studio Code

VS Code runs **on Windows**, not inside Ubuntu. The WSL extension lets the Windows copy
edit and debug code that lives in your Ubuntu distribution.

### Step 1: Download and run the installer

1. Go to <https://code.visualstudio.com/download>.
2. Download the **Windows** installer for your CPU:
   - Most Intel/AMD laptops: **User Installer · x64** <= this is probably what you want
   - Snapdragon/ARM laptops: **User Installer · Arm64**
3. Run the downloaded `VSCodeUserSetup-...exe`. The **User Setup** does not need
   administrator rights and updates itself cleanly.
4. On the **Select Additional Tasks** page, make sure **Add to PATH** is checked. That
   gives you the `code` command used below.

### Step 2: Install the WSL extension

1. Open VS Code.
2. Press `Ctrl+Shift+X` to open the Extensions view.
3. Search for `WSL`, choose the extension named **WSL** published by **Microsoft**
   (identifier `ms-vscode-remote.remote-wsl`), and click **Install**.

### Step 3: Verify the whole setup end to end

1. Open Ubuntu from the Start menu (or run `wsl` in a terminal).
2. Create a folder and open it in VS Code:

   ```bash
   mkdir /tmp/testdir
   cd /tmp/testdir
   code .
   ```

3. The first `code .` in a distribution downloads the **VS Code Server** into Ubuntu and
   takes a minute; a progress notification is normal.
4. A VS Code window opens. The green indicator in the **bottom-left corner** should read
   **WSL: Ubuntu** or **WSL: Ubuntu-26.04**, matching your distribution name.
5. Open a terminal inside VS Code with `` Ctrl+` `` and run:

   ```bash
   pwd
   uname -s
   ```

   You should see `/tmp/testdir` and `Linux`. If you see a `C:\...`
   path or `MINGW`/`Windows`, you are in a Windows terminal, not WSL.


## Part 3: Install YuJa Verity

Proctored assessments — including practice quizzes and tests — run under **YuJa
Verity**, which needs a Chrome extension and a Windows application. Install both on
**Windows**, not in Ubuntu: you take assessments in your Windows browser, outside WSL.

The full vendor walkthrough is
[Verity Setup - Students.pdf](Verity-Setup-Students.pdf). The summary:

1. **Use Chrome.** If you do not have it, install Chrome from
   <https://www.google.com/chrome/>; the extension comes from the Chrome Web Store.
2. **Add the Verity browser extension.** Follow
   [Downloading the Verity Browser Extension from the Chrome Web Store](https://support.yuja.com/hc/en-us/articles/6938734031511-Downloading-the-Verity-Browser-Extension-from-the-Chrome-Web-Store).
3. **Install the Verity Lockdown App.** Follow
   [Downloading the Verity Desktop Lockdown App](https://support.yuja.com/hc/en-us/articles/14203286095767-Downloading-the-Verity-Desktop-Lockdown-App#h_01HA32BZKQVTTG231TX2QNHEY2).
4. **Authenticate yourself.** In your Moodle course, click the **YuJa Verity** LTI
   link and follow
   [Authenticating Yourself on YuJa Verity](https://support.yuja.com/hc/en-us/articles/17836266435223-Authenticating-Yourself-on-YuJa-Verity#01H8PFS22CTCQ462EEMKPS5EET).

You complete these setup steps only once. If the YuJa Verity link is not visible in
Moodle yet, finish steps 1–3 and ask the instructor about step 4 before the first
proctored assessment.

## Troubleshooting

| Symptom | Fix |
|---|---|
| `wsl --install` prints the full help text instead of installing | WSL is already present. Run `wsl --list --online`, then `wsl --install Ubuntu-26.04`. |
| Install hangs at `0.0%` | `wsl --install Ubuntu-26.04 --web-download` |
| Error `0x8007019e` (optional component not enabled) | Re-run `wsl --install --no-distribution` as administrator, then reboot. |
| Error `0x80370102` (virtual machine could not start) | Virtualization is off. Enable it in BIOS/UEFI, and confirm **Virtual Machine Platform** is checked under **Turn Windows features on or off**. |
| The Store will not download Ubuntu | Use Option B in Step 2 (`wsl --install Ubuntu-26.04 --web-download`). |
| Both Step 2 options fail | On an Intel/AMD laptop, download `ubuntu-26.04.1-wsl-amd64.wsl` from <https://releases.ubuntu.com/resolute/>, then double-click it, or run `wsl --install --from-file ubuntu-26.04.1-wsl-amd64.wsl` in the download folder. (ARM laptops: use Step 2.) |
| `code` is not recognized in PowerShell | Close and reopen PowerShell; if it still fails, re-run the VS Code installer with **Add to PATH** checked. |
| `code .` says command not found in Ubuntu | Close and reopen the Ubuntu terminal so it re-reads the Windows `PATH`; check `which code`. As a fallback, open VS Code, run **WSL: Connect to WSL**, and use **File > Open Folder**. |
| `code .` opens VS Code but the window says **Windows**, not WSL | Run `code .` from the Ubuntu shell, or use **WSL: Reopen Folder in WSL** from the Command Palette (`Ctrl+Shift+P`). |
| VS Code gets stuck on "Setting up WSL server" | Run `wsl --update` in PowerShell, then retry. On a locked-down network, tell the instructor. |
| Forgot your Ubuntu password | Reset it from PowerShell: `wsl -d <NAME> -u root passwd <your-username>`, where `<NAME>` comes from `wsl -l`. |

## Reference

- Microsoft, [Install WSL](https://learn.microsoft.com/en-us/windows/wsl/install) and
  [Basic commands for WSL](https://learn.microsoft.com/en-us/windows/wsl/basic-commands)
- Ubuntu, [Install Ubuntu on WSL 2](https://ubuntu.com/wsl/docs/latest/howto/install-ubuntu-wsl2)
  and [Distributions of Ubuntu on WSL](https://ubuntu.com/wsl/docs/latest/reference/distributions)
- Microsoft, [Troubleshooting Windows Subsystem for Linux](https://learn.microsoft.com/en-us/windows/wsl/troubleshooting)
- Visual Studio Code, [Installing on Windows](https://code.visualstudio.com/docs/setup/windows)
  and [Developing in WSL](https://code.visualstudio.com/docs/remote/wsl)

*Instructions checked against the vendor documentation above in November 2026.*
