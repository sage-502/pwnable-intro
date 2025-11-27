# EVI$ION: Pwnable lecture

## 소개
사이버보안학과 동아리에서 신입부원을 대상으로 진행하는 시스템해킹 강의 자료를 정리한 레포지토리.  
메모리 구조, GDB 디버깅, Buffer Overflow, Pwntools 활용까지 단계적으로 구성되어 있음.

## 강의 커리큘럼

| 주차 | 주제 | 주요 내용 |
|------|------|-----------|
| 01   | Memory & Stack | 스택 프레임, 함수 호출 흐름 분석 |
| 02   | GDB & Assembly | 디버깅 기초, 어셈블리 코드 이해 |
| 03   | Buffer Overflow & Pwntools | BOF 개념과 원리, 익스플로잇 기초 |

[상세 커리큘럼](https://github.com/sage-502/pwnable-intro/blob/main/curriculum.md)



## 사전 준비 사항
- 권장 기초 지식 : C 언어 기본 문법, 리눅스 기본 명령어
- 리눅스 가상머신 설치
- `gcc`, `gdb` 설치


## 구성
```
pwnable-intro
├─ 01_memory_stack/
│  ├─ example1.c                //예제코드
│  ├─ example2.c                //메모리 영역 퀴즈 코드
│  ├─ example3.c                //여분 예제코드(실사용은 안했음)
│  ├─ week1_note.pdf            //발표자 기록용
│  └─ pwnable_week1.pdf   //발표자료
├─ 02_assembly/
│  ├─ assemb.txt               //디스어셈블링 결과
│  ├─ practice.md               //실습 환경 세팅
│  ├─ practice2.c               //선택 과제 코드
│  ├─ test.c                    //실습 코드 겸 과제 코드
│  └─ pwnable_week2.pdf   //발표자료
├─ 03_bof/
│  ├─ (업데이트 예정)
│  └─ (업데이트 예정)
└─ sub-material/
   ├─ C-intro.md                 //C언어 기초 지식 시트
   ├─ linux-intro.md             //리눅스 기초 지식 시트
   └─ install-guide.md           //가상머신 설치 가이드(되는지는 나도 모름)
```
