# cppTemplate

## A Template CPP Project

### Install dependencies

```bash
sudo apt install \
build-essential \           # Install GNU compilers.
gdb \                       # Install GNU GDB debugger.
clangd \                    # Install clangd language server.
clang-format \              # Install clang-format.
libgtest-dev \              # Install gtest unit testing framework.
python3 \                   # Install python.
python3-pip \               # Install python package manager.

pip install gcovr           # Install gcovr code coverage tool.

snap install just --classic # Install just task runner.
```

### Build, Clean and Run Scripts

- `./scripts/build.sh`: Builds the project.
- `./scripts/clean.sh`: Cleans project files.
- `./scripts/run.sh`: Runs the project.
- `./scripts/coverage.sh`: Create unit test coverage report.
