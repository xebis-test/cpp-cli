# cpp-cli

Hello world C++ CLI application.

## Features

- [Semantic Release](.github/workflows/semantic-release.yaml) on merge to the `main` branch

## Installation and Configuration

### Set Up GitHub Repository for Semantic Release

Set up GitHub actions, variables and secrets:

- GitHub / Repository / Settings
  - Actions / General
    - Workflow permissions: Read and write permissions

## Development and Testing

Install prerequisites:

```shell
sudo apt update
sudo apt install build-essential g++ cmake git
```

Build:

```shell
mkdir build
pushd build
cmake ..
make
```

Use:

```shell
./cpp-cli
```

Tests:

```shell
./test_unit
```

Cleanup:

```shell
popd
rm -rf build/
```
