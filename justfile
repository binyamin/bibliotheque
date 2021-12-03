run cmd:
    ./bin/app {{cmd}}

start cmd: build
    just run {{cmd}}

test: build
    just run test

build:
    cmake -S. -Bbin
    cmake --build bin