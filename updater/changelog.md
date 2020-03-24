## Build Information
```
Kernel: Weeb Kernel
Type: BETA
Device: OnePlus 7/T/Pro
Compiler: Proton Clang + Polly
Branch: custom
HEAD: e32a00e33e62c
Build Number: r50
```

## JSONs for OTA
**Beta Channel:**
https://raw.githubusercontent.com/idkwhoiam322/weeb_kernel_oneplus_sm8150/custom/updater/update.json

## Changelog
```
[ 1.1 Beta 2 ]
- Initial support for Custom ROMs
[ 1.1 Beta 3 ]
- Remove atomic and locking backports by kdrag0n
- Update wireguard to 0.0.20200215
- Scheduler optimizations
- Update SLMK to latest
- WiFi optimizations by arter97
- Ensure EAS is enabled while screen is off
- Update some of Sultan's commits to latest their latest revision
- Update binder to 4.19
- Disable LTO in favour of faster builds
- Enable Clang's Polly optimizations
- Enable UASP support
- Revert broken ext4 commits by Sultan
- Revert size optimization for qcacld and techpack in case of potential latency regressions
- Merge CAF tag LA.UM.8.1.r1-14500-sm8150.0 for kernel, qcacld and techpack/data
- Silence some tracing and spammy logging
- boost DEVFREQ_MSM_CPU_LLCCBW device on mm pressure events
- Sultan's fix to OnePlus's techpack code that causes somewhat rare panics
- display optimization from Google's R tag
- Merge Linux Stable tag 4.14.174
- some network improvements
- Refined a scheduler commit
- ion from 4.19
- add back sched_boost's influence on scheduler ( seems better both for perf and battery )
```