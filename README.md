# Bibliotheque
A Library Management System (LMS)

## Build
```sh
c++ -g main.cpp vendor/*.cpp vendor/*.hpp lib/*.cpp -I. -o bin/app.exe
```

## Usage
See the help command for details.
```sh
bin/app.exe help
```

Note that, for adding and listing books, the following subjects are valid:
- history
- fantasy
- general
- fiction
- biography
- science