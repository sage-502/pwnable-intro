# 💻설치 가이드

> 💡 둘 중 편한 거 하나만 선택해서 진행하면 됨 (VMware 또는 WSL)

---

## Option A. VMware Workstation Pro (가상머신 방식)

### 1. VMware Workstation Pro 설치
- 2024년부터 **개인 사용자는 무료**로 전환됨 (VMware Player는 단종되고 Pro로 통합됨)
- [Broadcom 사이트](https://www.vmware.com/products/workstation-pro.html)에서 계정 가입 후 다운로드
- 설치 중 주의할 점: "설치 후 재부팅 필요할 수 있음"
- **대안**: VirtualBox 써도 무방 (GUI 약간 다름)

### 2. Ubuntu 가상 머신 준비
- 추천 이미지: [Ubuntu Server 24.04 LTS](https://ubuntu.com/download/server)
- `.iso` 파일 받아서 VMware에 "새 가상 머신"으로 추가
- 설치 중 유의사항:
    - SSH는 켜두기
    - 최소 설치 OK, 디스크 자동 할당 OK
- 계정 이름/비번 잊지 말기
- 가상머신 사양 추천

| 항목 | 최소 | 권장 |
| --- | --- | --- |
| **RAM (메모리)** | 1GB | 2GB 이상 |
| **디스크 크기** | 10GB | 20GB 이상 |
| **CPU 코어** | 1 | 2 |
| **네트워크** | NAT | NAT/Bridged |

---

## Option B. WSL (Windows 안에서 바로)

### 1. WSL 설치
```powershell
wsl --install -d Ubuntu-24.04
```
> 관리자 권한 PowerShell에서 실행. 설치 후 재부팅 필요할 수 있음

### 2. 초기 설정
- 재부팅 후 자동으로 Ubuntu 터미널 열림
- 계정 이름/비번 설정 (잊지 말기)
