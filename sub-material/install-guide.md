# 💻설치 가이드

> 💡참고 영상 : https://www.youtube.com/watch?v=SgfrHKg81Qc
> 

### 1. VMware 설치

- [VMware 공식 다운로드 링크](https://www.vmware.com/products/workstation-player.html)
- 설치 중 주의할 점: “설치 후 재부팅 필요할 수 있음”
- **대안**: VirtualBox 써도 무방 (GUI 약간 다름)
</br>

### 2. Ubuntu 가상 머신 준비

- 추천 이미지: [Ubuntu Server 20.04/22.04 LTS](https://ubuntu.com/download/server)
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

</br>

### 3. gcc, gdb 설치

```bash
sudo apt update
sudo apt install build-essential gdb -y
```

> build-essential에 gcc, make 등 포함됨

</br>

### 4. 확인

```bash
gcc --version
gdb --version
```

> 버전 잘 뜨면 설치 완료
> 

---
