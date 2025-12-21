# Pwnable 입문 강의 커리큘럼

## 기본 전제

- 대상: 사이버보안학과 학과 동아리 신입 부원
- 강의 형식: 2시간씩 총 3회차
- 선행 강의: 웹 해킹, 리버싱 강의 이후 진행

---

## 강의 커리큘럼 및 과제

### 1회차: 시스템 메모리 구조 & 함수 호출 원리

**내용**
- 포너블의 의미와 중요성 (간단히)
- 메모리 구조 4영역: 코드, 데이터, 힙, 스택
- 주요 레지스터 소개: `eip`, `esp`, `ebp`, `eax`
- 함수 호출 시 스택 변화 흐름 분석 : 32bit cdecl 기준
- 스택 구조 시각화

**과제**
- 강의 내용 정리

---

### 2회차: 어셈블리어, GDB

**내용**
- 어셈블리어 기본 명령어: `mov`, `call`, `ret` 등
- 프롤로그/에필로그
- gcc/gdb
- 실습 : 디스어셈블링 후 함수호출규약, 스택프레임 확인(1회차 예제 코드 재사용)

**과제**
- 예제 소스코드 컴파일 + GDB 실행 스크린샷 + 어셈 분석 + 스택 프레임 그림

---

### 3회차: Buffer Overflow 개념 & Pwntools

**내용**
- BOF 원리 및 메모리 오염 흐름 이해
- 시연 : ret2win 실습 환경을 로컬에 세팅, 시연
- 실습: BOF 문제 분석, GDB 실행, 익스플로잇 시도
- Pwntools 간단 소개(실사용 안함)

**과제**
- 실습 문제 라이트업 작성
  - 코드 분석
  - 메모리 구조 설명
  - 익스플로잇 흐름 정리
- 선택 과제: 더 어려운 BOF 문제 도전

> 실습 문제: [Root-Me: ELF x86 Stack buffer overflow basic 1](https://www.root-me.org/en/Challenges/App-System/ELF-x86-Stack-buffer-overflow-basic-1)
> <br>선택 과제: [Root-Me: ELF x86 Stack buffer overflow basic 2](https://www.root-me.org/en/Challenges/App-System/ELF-x86-Stack-buffer-overflow-basic-2)

---

## 과제 제출 방식

- 개인 블로그, 티스토리, 노션, 깃허브 등에 작성 후 링크 공유(공개 게시물로)
- 동아리 공유 노션에 업로드
- GPT, 인터넷 검색, 강의자료 참고 모두 허용
- 단순 복붙은 금지, 이해 기반 정리 권장

---

## 참고 및 운영

- 사전 과제: VMware 설치 (유튜브 영상 제공 예정), `gcc`, `gdb` 설치, Root-Me 가입
- 1학년을 위한 기초 C언어 + 리눅스 자료 제공 예정 (PDF 2~3페이지)
- 강의 종료 후 30분간 질문 타임 운영 예정 : 자유 질문 타임

---
