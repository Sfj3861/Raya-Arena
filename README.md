# Raya Arena — Geode Android mod

Target: Geometry Dash **2.2081**, Geode **v5.6.1**.

## Current branch status

This is an early development branch, not a finished cheat menu and not yet a verified installable package.

Implemented in source (not device-verified):
- Main-menu RAYA button and informational panel.
- A Geode setting to enable a bounded update-delta speed multiplier and configure its value.

Not implemented: FPS overlay, practice tools, StartPos switching, hitboxes, noclip, and the rest of the planned functions. No placeholder toggles are presented as working features.

See [FEATURES.md](FEATURES.md) for the prioritized 50-feature scope and honest status checklist.

## Build

Use the Geode CLI, Android NDK and SDK matching the target. Run `geode build` on a configured development computer. GitHub Actions is configured to build Android64 and upload the resulting `.geode` only if compilation succeeds.

**The current Actions run failed**, so there is no valid package to install yet. Check the workflow at https://github.com/Sfj3861/Raya-Arena/actions and fix build errors before distributing the mod.

References:
- https://github.com/geode-sdk/example-mod
- https://docs.geode-sdk.org/getting-started/
- https://docs.geode-sdk.org/mods/configuring/
