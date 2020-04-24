## Build Information
```
Kernel: Weeb Kernel
Type: STABLE
Device: OnePlus 7/T/Pro
Compiler: Proton Clang 11.0.0
Branch: oos
HEAD: 7eae8f329f93869513d02ea7cf67e3d898590919
Build Number: v2.0-Ember
```

## JSONs for OTA
**Stable Channel:**
https://raw.githubusercontent.com/RaphielGang/android_kernel_oneplus_sm8150/oos/updater/update.json

**Beta Channel:**
https://raw.githubusercontent.com/idkwhoiam322/weeb_kernel_oneplus_sm8150/staging/updater/update.json

## Changelog
```
- Merge LTS tag v4.14.177
- Merge CAF tag "LA.UM.8.1.r1-14500-sm8150.0" for qcacld-3.0, fw-api, qca-wifi-host-cmn, and data-kernel
- Upstream kernel to CAF tag "LA.UM.8.1.r1-14700-sm8150.0"
- ion backports from CAF msm-4.19 early(!) source drop
- Several CAF updates treewide
- Several Sultan rice treewide that I didn't want to add till first release
- Disable DEBUG_FS
- Reverse mac address provided by firmware [ Seems to help with some folks not having WiFi with qcacld inline ]
- Add haptic level adjustment [ Hot garbage btw, adding it cuz user request ]
- Some mm patches from mainline
-- Some additional fixups to the above backported by @ celtare21 aka Kuran Kaname
- missed an mm revert so it's there now ^^'
- Move some drivers' init to async to slightly improve boot times 
- Move to in-tree wireguard
- scripts/wireguard: Make it convenient to automatically apply commits when run
- wireguard: Update to version 1.0.20200413
- Use latest AOSP clang now
- Compile with LTO and LLD
- BBR improvements
- Move to simple_lmk [ Disable LMKD and PSI ]
- Re-do device tree completely, fixes some stuff not applying properly and custom ROM support
- Some scheduler rice from Pixel 4 Android R source drop: Important for !SCHED_WALT, ie. pure PELT
- Properly remove sched_boost's influence on task placement
- Disable EAS on App launch
- Binder, Clang, and UFS improvements from Pixel 4 Android R source drop
- Scheduler optimizations
- WiFi optimizations by arter97
- Ensure EAS is enabled while screen is off
- Update some of Sultan's commits to latest their latest revision
- Update binder to 4.19
- Disable LTO in favour of faster builds
- Enable Clang's Polly optimizations
- Enable UASP support
- Revert broken ext4 commits by Sultan
- Revert size optimization for qcacld and techpack in case of potential latency regressions
- Silence some tracing and spammy logging
- boost DEVFREQ_MSM_CPU_LLCCBW device on mm pressure events
- Sultan's fix to OnePlus's techpack code that causes somewhat rare panics
- display optimization from Google's R tag
- some network improvements
- Refined a scheduler commit
- add back sched_boost's influence on scheduler ( seems better both for perf and battery )
- Raise SLMK Minfree to 256MiB
- Fix some more VLAs
- Fix some long overdue warnings using Proton Clang
- Change cpufreq_stats atomic optimizations to Google's
- Clean up of less useful tracings and spammy loggers
- Further optimizations from Google's Android R source drop [ Up to DP 2 ]
- Some block optimizations from Android Common Kernel to reduce expensive calls
- Add back perf critical kthreads and IRQs
- Fix CAF camera memory leak
- Several changes to further optimize the scheduler

- Initial relase for Custom ROM variant!
Custom Only fixes:
- Add FP support for maximum ROMs.
- Enable some gestures by default to support ROMs that are based on PA.
```

## Sidenote for the benefit of the user:
- I am now shipping boot images for the benefit of those that do not want to root or run TWRP - like those with the OnePlus 7T/Pro.
In order to flash them via fastboot, first ensure that you have the latest platform tools from GOOGLE, and NOWHERE ELSE.
Run the following command:
```fastboot flash --slot all boot <drag and drop boot.img>```
