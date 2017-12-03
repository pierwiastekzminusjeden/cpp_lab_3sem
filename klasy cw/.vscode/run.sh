#!/bin/bash

mkdir .vscode
cd .vscode
touch tasks.json
echo '{
    // See https://go.microsoft.com/fwlink/?LinkId=733558
    // for the documentation about the tasks.json format
    "version": "2.0.0",
    "showOutput": "always",
    "type": "shell",
    "echoCommand": true,
    "suppressTaskName": true,
    "tasks": [
        {
        "label": "generate class",
        "command": "./scripts/classgenerator.sh"
        }
        {
        "args": ["${fileBasenameNoExtension}"]
        "label": "generate getters",
        "command": "./scripts/getgenerator.sh"
        }
        {
        "args": ["${fileBasenameNoExtension}"]
        "label": "generate setters",
        "command": "./scripts/setgenerator.sh"
        }
    ]
}' >"tasks.json"
cd ..
mv run.sh .vscode
code .
