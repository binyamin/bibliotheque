bin := if os() == "windows" { "app.exe" } else { "app" }

run cmd='help':
    ./{{bin}} {{cmd}}

start cmd='help': build
    just run {{cmd}}

build:
    c++ -g main.cpp vendor/*.cpp vendor/*.hpp lib/*.cpp -I. -o {{bin}}