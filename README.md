# NovaCore — Geode mod

Target: Geometry Dash **2.2081**, Geode **5.6.1**.

## Current branch status

NovaCore is an early development branch, not a finished menu and not yet a verified installable package.

Implemented in source (not device-verified):
- Main-menu NOVA button and informational panel.
- A Geode setting to enable a bounded update-delta speed multiplier and configure its value.

Not implemented: FPS overlay, practice tools, StartPos switching, hitboxes, noclip, and the rest of the planned functions. No placeholder toggles are presented as working features.

See [FEATURES.md](FEATURES.md) for the prioritized 50-feature scope and honest status checklist.

## Native build outputs

GitHub Actions builds two targets:
- **Android 64-bit**: Geode package and native `.so` library.
- **Windows 64-bit**: Geode package and native `.dll` library.

Open the repository's **Actions** tab, choose a successful run, and download `nova-core-android64` or `nova-core-win64`. A `.so` or `.dll` built for one platform cannot be used on the other, and the raw library alone is not a complete Geode mod package.

The first build attempt failed because the Geode version in `mod.json` used an incompatible `v` prefix. The metadata has been corrected and the workflow now needs to complete successfully before the binaries can be considered available or valid.

## Build locally

Use the Geode CLI, the matching SDK, and the Android NDK for Android builds. See the [Geode getting-started guide](https://docs.geode-sdk.org/getting-started/).

References:
- https://github.com/geode-sdk/example-mod
- https://docs.geode-sdk.org/mods/configuring/
