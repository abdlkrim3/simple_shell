#!/bin/sh

if [ $# -eq 0 ]; then
    echo "No arguments provided. Please specify a file name to format in Betty style."
    exit 1
fi

if ! command -v betty >/dev/null 2>&1; then
    echo "Betty style checker not found. Please install it before running this script."
    exit 1
fi

betty --check "$1"
