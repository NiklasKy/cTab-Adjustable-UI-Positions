# Changelog

All notable changes to this project are documented in this file.

## 1.0.2 - 2026-09-30

- Add an optional compatibility component for the cTab version bundled with the
  60th Solar Detachment Aux Mod.
- Split the original cTab display hooks into an optional provider component so
  alternative cTab packages can load cTab UIP without declaring the original
  `CfgPatches` class.
- Use each supported cTab package's own assets in the Layout Editor previews.

## 1.0.1 - 2026-08-16

- Add an optional compatibility component for cTAB Advanced [BETA].
- Use cTAB Advanced's Samsung S7 asset for both Android Layout Editor previews.
- Keep the original cTab preview paths unchanged for all other cTab variants.

## 1.0.0 - 2026-08-15

- Add Arma 3 UI layout editor entries for the Android, TAD, and MicroDAGR overlays.
- Add separate primary and alternate layout positions.
- Apply saved positions during display `onLoad` to avoid a visible jump from cTab's default position.
- Retain a lightweight client-side watcher for primary and alternate position changes.
- Publish the addon as cTab - Adjustable UI Positions.
- Add the cTab UIP launcher and Workshop logo.
