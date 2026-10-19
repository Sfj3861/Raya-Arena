# Raya Arena — Geode mod

Target: Geometry Dash **2.2081**, Geode **5.6.1**.

## Current branch status

This is an early development branch, not a finished menu and not yet a verified installable package.

Implemented in source (not device-verified):
- Main-menu RAYA button and informational panel.
- A Geode setting to enable a bounded update-delta speed multiplier and configure its value.

Not implemented: FPS overlay, practice tools, StartPos switching, hitboxes, noclip, and the rest of the planned functions. No placeholder toggles are presented as working features.

See [FEATURES.md](FEATURES.md) for the prioritized 50-feature scope and honest status checklist.

## Native build outputs

GitHub Actions now builds two separate targets:
- **Android 64-bit**: the Geode package and native `.so` library.
- **Windows 64-bit**: the Geode package and native `.dll` library.

These are generated build artifacts, not files that should be committed as source. Open the repository's **Actions** tab, choose a successful run, and download `raya-arena-android64` or `raya-arena-win64`. A `.so` or `.dll` built for one platform cannot be used on the other, and the raw library alone is not a complete Geode mod package.

The previous Android build failed because the Geode version in `mod.json` used an incompatible `v` prefix. The metadata and build workflow have now been corrected; the new run still needs to pass before the binaries can be considered available or valid.

## Build locally

Use the Geode CLI, the matching SDK, and the Android NDK for Android builds. See the [Geode getting-started guide](https://docs.geode-sdk.org/getting-started/).

References:
- https://github.com/geode-sdk/example-mod
- https://docs.geode-sdk.org/mods/configuring/
