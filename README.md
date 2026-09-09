# cTab - Adjustable UI Positions

> Put your cTab overlays exactly where you want them.

cTab UIP is a client-side addon that adds Arma 3 Layout Editor entries for
cTab overlay displays. Players can move each supported overlay and configure
separate primary and alternate positions without modifying cTab itself.

## Requirements

- Arma 3
- CBA_A3
- cTab (`CfgPatches` class `cTab`)

Compatible cTab derivatives may also work when they retain the required display
classes and behavior, but support for derivatives is provided on a best-effort
basis.

cTAB Advanced [BETA] is detected through its optional `ctab_main` component.
When present, cTab UIP uses that derivative's Samsung S7 asset for the Android
Layout Editor previews. This compatibility component is skipped automatically
when cTAB Advanced is not loaded.

## Supported displays

- Android / GD300 overlay
- TAD overlay
- MicroDAGR overlay
- Alternate position for each overlay, used by cTab's position-toggle keybind

The large interactive dialogs are not changed. cTab already allows
those dialogs to be dragged and remembers their offsets.

## Usage

1. Copy `@cTab Adjustable UI Positions` into the Arma 3 installation directory.
2. Load CBA_A3, cTab, and this addon.
3. Open Arma 3's UI layout editor.
4. Move the `cTab` layout entries to the desired positions and save.
5. Open the corresponding cTab overlay.

The positions are stored in the active Arma profile. Use the layout editor's
reset function to restore the defaults.

For a server with signature verification enabled, copy only
`keys/ctab_uip_1_0_0.bikey` to the server's `keys` directory.
Never distribute the `.biprivatekey` signing key.

## Build

```powershell
hemtt check --no-color
hemtt build --no-color
```

The private signing key is kept outside the source and release trees. The
distributable mod folder contains only the signed PBO, its signature, and the
public key.

## In-game validation checklist

- Confirm all six cTab entries are visible in the UI layout editor.
- Move the primary Android entry, save, and open the Android overlay.
- Use cTab's position-toggle keybind and verify the alternate Android entry.
- Repeat for TAD and MicroDAGR if those devices are used.
- Restart Arma and confirm that the positions persist.
- Check the client RPT for
  `[cTab UIP] Initialized position watcher.` and for the
  absence of cTab script errors.
- With cTAB Advanced [BETA], confirm that both Android previews use the Samsung
  S7 frame and that no missing `android_background_ca.paa` warning appears.

## Compatibility approach

The addon does not replace cTab assets, equipment classes, marker
logic, network code, or compile-final functions. Each supported overlay applies
its profile position during `onLoad`, before the first visible frame. A small
client-side watcher remains as a fallback for primary/alternate position
changes.

## Credits and license

Original cTab authors: Riouken, Gundy, and Raspu.

Layout Editor integration based on the catTab implementation by Cat Harsis and
the MokTech Industries fork.

Maintained by [GRP9] Niklas Ky.

This derivative addon is distributed under the GNU General Public License,
version 2. See `LICENSE`.

## Source and support

For help with this mod, [join our Discord](https://discord.gg/C2adpmAsR9) and
open a support ticket. This invite automatically assigns the Mod Support role,
giving you access to the mod support area.

Please include the mod name, version, and a description of the issue. Add
screenshots or RPT logs when relevant.

- Source: https://github.com/NiklasKy/cTab-Adjustable-UI-Positions
- Issues: https://github.com/NiklasKy/cTab-Adjustable-UI-Positions/issues
