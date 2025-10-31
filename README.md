<h1>Simulated User-Space Device Driver in C_</h1>



<h2>Description</h2>
This project focuses on writing a pseudo-driver in C that simulates interaction with a hardware device entirely in user space. The project models the behaviour of a simple character device by using file operations and a simulated hardware buffer.  The project required writing a driver-like program that mimics reading from and writing to a device, using a text file as a stand-in for hardware registers. This helps demystify the structure and logic of device drivers while remaining accessible and safe while working without root access. This project also automates the compilation of solutions with dependencies using a Makefile and creating own header files.
<br />


<h2>Languages and Utilities Used</h2>

- <b>C language</b> 
- <b>File Management Tools</b>
-<b> Compiled Using Gcc</b>
- <b>Makefile</b>



<h2>Environments Used </h2>

- <b>Visual Studio Code</b>
- <b>macOS Terminal (BASH shell)</b>

<h2>Program walk-through:</h2>

<p align="center">
use "ls" to check if the files, were compiled: <br/>
<img width="924" height="487" alt="checkdirectory" src="https://github.com/user-attachments/assets/4b6562d5-81b4-468f-8a1a-d68d2a53afa1" />


<br />
<br />
Clear the Compiled files to restart the complation  <br/>
<img width="924" height="456" alt="makeclean" src="https://github.com/user-attachments/assets/cd38c532-740e-4ce1-8be7-5d0c579fe43e" />

<br />
<br />
Use "MakeFile" to compile all the files used to create the pusdo-device <br/>
<img width="924" height="412" alt="makeallcorrect" src="https://github.com/user-attachments/assets/710c4e03-79ff-426b-b197-942119f6df51" />

<br />
<br />
Result of the the compiling all the files to create the Psudo-device Driver that read the information in the file <br/>
<img width="924" height="412" alt="makeallcorrect" src="https://github.com/user-attachments/assets/07b4cfd8-eb04-49ad-91c8-398b026493ca" />

<br />
<br />



<!--
 ```diff
- text in red
+ text in green
! text in orange
# text in gray
@@ text in purple (and bold)@@
```
--!>
