# Windows Build

## Part 1 :

To Build CLI_IN_C, you require :

- Visual Studio Code
- C/C++ Extension of VSCode
- MinGW

## Part 2 :

Open Visual Studio Code

Git clone cli_in_c

Make a folder named .vscode

And create a file named : tasks.json

And write this :

```json
{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "cppbuild",
			"label": "C/C++: gcc.exe: generate cli_in_c",
			"command": "C:\\MinGW\\bin\\gcc.exe",
			"args": [
				"-fdiagnostics-color=always",
				"-g",
				"${file}",
				"-o",
				"${fileDirname}\\${fileBasenameNoExtension}.exe"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": "build",
			"detail": "compilateur : C:\\MinGW\\bin\\gcc.exe"
		}
	]
}
```

And Run task.
