#!/bin/bash

mkdir .vscode
cd .vscode
touch tasks.json
echo '{
    // @author Krystian Molenda
    "version": "1.0.1",
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
