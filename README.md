# pwnable-intro

## 소개
사이버보안학과 동아리에서 신입부원을 대상으로 진행하는 시스템해킹 강의 자료를 정리한 레포지토리.  
메모리 구조, GDB 디버깅, Buffer Overflow, 익스플로잇 기초까지 2회차로 압축해서 구성되어 있음.

연도별로 폴더가 나뉘어 있고, 최신 연도 자료를 우선 참고하면 됨.


## 연도별 자료

- [2026년 강의](./2026)
- [2025년 강의](./2025)


## 강의 커리큘럼 

### 2026

| 회차 | 주제 | 주요 내용 |
|------|------|-----------|
| 1회차 | Memory & Stack | 프로세스 메모리 구조, 레지스터, 함수호출규약 / 실습 환경 세팅 / gdb로 스택 구조 보기 |
| 2회차 | BOF & Exploit | BOF 원리 / ret2win 시연 / 문제 풀이 / 해설 |

[상세 커리큘럼](./2026/curriculum.md)

### 2025

| 주차 | 주제 | 주요 내용 |
|------|------|-----------|
| 01   | Memory & Stack | 스택 프레임, 함수 호출 흐름 분석 |
| 02   | GDB & Assembly | 디버깅 기초, 어셈블리 코드 이해 |
| 03   | Buffer Overflow & Pwntools | BOF 개념과 원리, 익스플로잇 기초 |

[상세 커리큘럼](./2025/curriculum.md)


## 사전 준비 사항
- 권장 기초 지식 : C 언어 기본 문법, 리눅스 기본 명령어
- 실습 환경 : WSL 또는 리눅스 가상머신 (택1, 1회차에 세팅 시간 있음)
- `gcc`, `gdb` 설치

> 설치 방법은 [설치 가이드](./sub-material/install-guide.md) 참고


## 구성
```
pwnable-intro
├─── 2026/
│    ├─── 01_memory_stack/
│    ├─── 02_bof/
│    └─── curriculum.md
├─── 2025/
│    ├─── 01_memory_stack/
│    ├─── 02_assembly/
│    ├─── 03_bof/
│    └─── curriculum.md
└─── sub-material/      
     ├─── C-intro.md                 //C언어 기초 지식 시트
     ├─── linux-intro.md             //리눅스 기초 지식 시트
     └─── install-guide.md           //WSL/VMware 설치 가이드
```
