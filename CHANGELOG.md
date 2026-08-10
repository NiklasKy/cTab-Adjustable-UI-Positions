# Changelog

All notable changes to this project are documented in this file.

## 1.0.2 - 2026-08-10

- Apply saved overlay positions during display `onLoad` to avoid a visible jump from the original position.
- Keep the client-side watcher as a fallback for primary and alternate position changes.

## 1.0.1 - 2026-08-10

- Replace invalid wrappers around compile-final cTab functions with a non-invasive client-side watcher.
- Apply saved positions when an overlay opens and after cTab changes its position state.

## 1.0.0 - 2026-08-10

- Add Arma 3 UI layout editor entries for the Android, TAD, and MicroDAGR overlays.
- Add separate primary and alternate layout positions.
