# Installation Guide

## Cloning and Setting Up
```bash
$ git clone git@github.com:Oliver-Bagin/NoGO.git
$ git clone git@github.com:Oliver-Bagin/TinyNoGo.git
$ cd ./TinyNoGo
$ git submodule update --init
$ make llvm-source
$ make gen-device
$ make binaryen # brew install binaryen for MacOS
$ make wasi-libc # assuming you have build dependencies for your OS installed
```
## Building TinyGo
### Requirements
Ensure that you have a working Go compiler >= v1.22.6 on your system.
You also need LLVM version >= 18.

If LLVM is not installed on your system, it is best to install the pre-built binary for your OS from here: https://tinygo.org/docs/guides/build/bring-your-own-llvm/.

If the above fails, you can manually build it as per: https://tinygo.org/docs/guides/build/manual-llvm/.

```bash
$ cd NoGO
$ git checkout disable-internal-protection
$ cd src
$ ./make.bash # compiles a custom Go binary to <path to NoGO>/bin/go
$ cd ../../TinyNoGo
$ # If you installed a LLVM binary, run the following command to build tinygo 
$ ./<path to NoGO>/bin/go install -tags=llvm18
$ # If you built LLVM manually, run the following command to build tinygo 
$ make GO=<path to NoGO>/bin/go
$ tinygo version # tinygo should be installed to your $GOPATH. By default, GOPATH is set to $HOME/go (on Unix systems) or %USERPROFILE%\go (on Windows).
tinygo version 0.37.0 linux/amd64 (using go version devel go1.25-5369e9e917 Wed Apr 2 16:16:08 2025 +0800 and LLVM version 18.1.8)
```

## Testing TinyGo

```bash
$ tinygo build -o ./NoGO/programs/main.wasm -target=wasm ./NoGO/programs/main.go && node ./NoGO/programs/index.js # assuming you want to use Node to run WASM
```
// todo document x-tools and alt-go
