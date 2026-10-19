# Raya Arena — 50-feature implementation plan

Target: Geometry Dash Android 2.2081 / Geode 5.6.1.

This list is a scope/acceptance checklist, **not a claim that all 50 are implemented**. The only current gameplay option with code in this branch is the bounded update-delta speed multiplier. Each feature must be implemented and tested before its status is changed to complete.

Status legend:
- [x] Source exists in this branch (not yet verified on device)
- [ ] Planned; not implemented

## Gameplay and physics
1. [ ] Speedhack presets (0.5x, 0.75x, 1x, 1.25x, 1.5x, 2x)
2. [ ] Custom speed multiplier UI
3. [ ] Pause gameplay
4. [ ] Resume gameplay
5. [ ] Restart level button
6. [ ] Quick practice-mode toggle
7. [ ] Practice checkpoint helper
8. [ ] Remove practice checkpoints
9. [ ] Start-position selector
10. [ ] Save named start positions
11. [ ] Load saved start positions
12. [ ] Frame-step controls
13. [ ] Freeze player
14. [ ] Freeze level timer
15. [ ] Low-gravity mode
16. [ ] High-gravity mode
17. [ ] No-spike collision mode (noclip)
18. [ ] Collision state indicator
19. [ ] Show hitboxes
20. [ ] Show player collision box

## Visual and performance
21. [ ] FPS overlay
22. [ ] Frame-time display
23. [ ] Session average FPS
24. [ ] FPS limit selector (only where supported)
25. [ ] Low-effects preset
26. [ ] Hide particles
27. [ ] Hide background effects
28. [ ] Hide pulse effects
29. [ ] Hide level decorations
30. [ ] Hitbox color selector

## Interface and configuration
31. [ ] In-level floating menu
32. [ ] Movable menu
33. [ ] Menu scale setting
34. [ ] Menu opacity setting
35. [ ] Collapse/expand categories
36. [ ] Search settings
37. [ ] Favorites
38. [ ] Reset settings to defaults
39. [ ] Export configuration
40. [ ] Import configuration

## Practice workflow and diagnostics
41. [ ] Attempt counter
42. [ ] Session timer
43. [ ] Best progress in current session
44. [ ] Death progress log
45. [ ] Copy current progress to clipboard
46. [ ] Show current level ID/name
47. [ ] Show player coordinates (where supported)
48. [ ] Hook/feature diagnostics panel
49. [ ] Safe mode to disable all Raya hooks
50. [ ] Android compatibility report

## Completion policy

Do not add decorative switches that have no effect. Every checkbox above should remain unchecked until it has a real implementation and has been tested with the target game/Geode versions. For hooks that alter physics or collision, test in an offline practice session and handle teardown/restart safely.
