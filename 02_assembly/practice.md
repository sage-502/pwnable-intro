# 실습 가이드

### 0. 임시 우분투(설치 보여주기 목적)

```bash
sudo apt update
sudo apt install -y docker.io
sudo systemctl enable --now docker
sudo usermod -aG docker $USER

docker run -it --rm ubuntu:22.04 bash

exit(나가기)
```

### 1. 가상머신 환경 세팅

```bash
apt update
dpkg --add-architecture i386
apt update
apt install -y libc6:i386
apt install -y gcc-multilib
apt install -y gdb-multiarch

gcc --version
gdb --version
```

### 2. 소스코드 작성

```bash
apt install -y nano
nano test.c
```

```c
//filename: test.c
#include<stdio.h>

int sum(int x, int y){
  int result = x + y;
  return result;
}

int main(){
  int a = 2, b = 3, c;
  c = sum(a, b);
  printf("%d\n", c);
  return 0;
}
```

### 3. gcc로 소스코드 컴파일(cdecl + 32bit + 보호기법 제거)

```bash
gcc -m32 -fno-stack-protector -fno-pie -no-pie -fno-omit-frame-pointer -mpreferred-stack-boundary=2 -O0 -g -o test test.c
```

- `-m32` : x86 32bit
- `-fno-stack-protector` : 스택 카나리 비활성화
- `-fno-pie` + `no-pie` : 주소 랜덤화 기능 끄기(실행 파일이 고정된 주소 공간에 로드)
    - `-fno-pie` : PIE 코드 생성 비활성화
    - `-no-pie` : PIE 링크 비활성화
- `-fno-omit-frame-pointer` : 프레임 포인터 생략 금지
- `-mpreferred-stack-boundary=2` : 스택 정렬을 2^2 = 4바이트로 설정(읽기 편하게)
- `-O0` : 최적화 제거(스택 프레임 깨끗하게 보임)
- `-g` : gdb 디버깅 정보 포함(심볼 정도 활용 가능)
- `-o test` : 출력 파일 이름을 test(**o**utput)

컴파일 확인

```bash
ls
./test

apt install -y file
file --version
file test
```

### 4. gdb disas로 디스어셈블링

```bash
gdb test
set isassembly-flavor intel
set pagination off
disas main
disas sum
```

### 5. 어셈블리 보고 스택 프레임 추적

[assemb.text](https://github.com/sage-502/pwnable-intro/blob/main/02_assembly/assemb.text)

### 6. gdb x로 스택 프레임 확인

```bash
(gdb) break main
(gdb) run
(gdb) info registers
(gdb) x/20x $esp
(gdb) next       # 선택
(gdb) x/20x $esp # 변화 보기
(gdb) break sum  # 함수 내부 분석
(gdb) continue
(gdb) disas sum
(gdb) x/20x $esp
```
