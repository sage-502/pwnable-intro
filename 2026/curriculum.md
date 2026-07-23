# Pwnable 입문 강의 커리큘럼

## 기본 전제
- 대상: 사이버보안학과 학과 동아리 신입 부원
- 강의 형식: 2시간씩 총 2회차
- 선행 강의: 웹 해킹, 리버싱 강의 이후 진행

---

## 강의 커리큘럼 및 과제

### 1회차: 시스템 메모리 구조 & GDB로 스택 보기

**내용** (총 120분)

- 40분: 프로세스 메모리 구조 4영역(코드/데이터/힙/스택), 주요 레지스터(`eip`, `esp`, `ebp`, `eax`), 함수 호출 시 스택 변화 흐름(32bit cdecl 기준)
- 20분: 실습 환경 세팅 — WSL 또는 VMware 사전 안내, 사용 툴 설치 스크립트 배포
- 10분: 쉬는 시간 (세팅 못 끝낸 인원 마저 진행)
- 50분: 작은 바이너리로 GDB 실습 — 어셈블리 기본 명령어(`mov`, `call`, `ret`), 프롤로그/에필로그 확인하며 스택 구조 직접 관찰

**과제**

- 실습 내용 정리
- 예제 코드 컴파일 스크린샷 + GDB로 스택 프레임 확인 + 스택 프레임 그림 + 설명

---

### 2회차: Buffer Overflow 개념 & 익스플로잇

**내용** (총 120분)

- 30분: BOF 원리 및 메모리 오염 흐름 이해
- 20분: ret2win 시연 (로컬 실습 환경에 세팅해서 진행)
- 10분: 쉬는 시간
- 40분: 포너블 문제 풀어보기 (삽질 타임) — local value overwrite 또는 ret2win 유형
- 20분: 해설

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
- 사전 과제: WSL 또는 VMware 설치, Root-Me 가입
- 1학년을 위한 기초 C언어 + 리눅스 자료 제공
