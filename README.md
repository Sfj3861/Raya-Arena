# Raya Arena — Geode mod

Android target: Geometry Dash **2.2081**, Geode **v5.6.1**.

This repository is initialized using the official Geode example-mod project structure.

## Implemented in v0.1.0

- Adds a Raya button to the main menu.
- Shows a status panel.
- Provides Geode mod settings for enabling a bounded gameplay update-delta multiplier and choosing its value.

## Not implemented yet

FPS overlay, practice tools, StartPos switching, hitbox rendering and noclip are not implemented in this initial foundation. They must not be treated as working features.

## Build

Use a computer with the Geode CLI, the matching Geode SDK, and Android NDK installed. Then run:

```sh
geode build
```

The official GitHub Actions workflow in `.github/workflows/build-android.yml` also attempts to build an Android64 `.geode` package. The generated package is available as a workflow artifact only after the build succeeds.

References:
- https://github.com/geode-sdk/example-mod
- https://docs.geode-sdk.org/getting-started/
- https://docs.geode-sdk.org/mods/configuring/
