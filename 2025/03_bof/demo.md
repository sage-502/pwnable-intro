## BOF 시연

[자동 세팅 레포](https://github.com/sage-502/bof_demo/tree/main)

목표 : ret2win으로 bof 설명

1. 소스코드 : func()-gets 쓰는 함수, target()-system 쓰는 함수
2. flag : 아무말이나 쓰기… o 권한 빼기
3. 사용자 추가 : 이걸로 로그인해서 실습할 것

### 0. 세팅

시연용 디렉터리 추가

```bash
mkdir /tmp/bof_example
cd /tmp/bof_example 
```

시연용 사용자 추가, 확인

```bash
sudo adduser baby
su baby
id
```

### 1. 소스코드

파일명 : bof.c

```c
#include<stdio.h>
#include<stdlib.h>

void target(){
    setregid(getegid(), getegid());
    system("/bin/sh");
}

void func(int value){
    char buf[20];
    printf("input: ");
    gets(buf);
    printf("value: %d\n", value);
    printf("buf: %s\n", buf);
}

int main(){
    int num = 5;
    func(num);
}
```

### 2. 컴파일

```c
gcc -m32 -fno-stack-protector -fno-pie -no-pie -fno-omit-frame-pointer -Wno-deprecated-declarations -O0 -g -o bof bof.c
```

### 3. flag

```c
echo "flag{cat_overflow_exception^._.^}" > flag
```

### 4. 소유자, 권한 설정

설정

```bash
chown root:root bof bof.c flag
sudo chmod 2755 bof
sudo chmod 644 bof.c
sudo chmod 640 flag
```

확인

```c
-rwxr-sr-x 1 root root 16500 Nov 22 21:14 bof
-rw-r--r-- 1 root root   306 Nov 22 21:14 bof.c
-rw-r----- 1 root root    34 Nov 22 21:15 flag
```
