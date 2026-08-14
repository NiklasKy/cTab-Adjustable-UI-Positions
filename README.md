# GRP9 cTab UI Position Fix

This client-side compatibility addon adds Arma 3 UI layout editor entries for
the overlay displays of the original cTab mod.

## Requirements

- Arma 3
- CBA_A3
- Original cTab (`CfgPatches` class `cTab`)

MokTech Industries Core is not required.

## Supported displays

- Android / GD300 overlay
- TAD overlay
- MicroDAGR overlay
- Alternate position for each overlay, used by cTab's position-toggle keybind

The large interactive dialogs are not changed. Original cTab already allows
those dialogs to be dragged and remembers their offsets.

## Usage

1. Copy `@GRP9 cTab UI Position Fix` into the Arma 3 installation directory.
2. Load CBA_A3, original cTab, and this patch in that order.
3. Open Arma 3's UI layout editor.
4. Move the `cTab` layout entries to the desired positions and save.
5. Open the corresponding cTab overlay.

The positions are stored in the active Arma profile. Use the layout editor's
reset function to restore the defaults.

For a server with signature verification enabled, copy only
`keys/grp9_ctab_position_fix_1_0_0.bikey` to the server's `keys` directory.
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
  `[GRP9 cTab UI Position Fix] Initialized position watcher.` and for the
  absence of cTab script errors.

## Compatibility approach

The addon does not replace original cTab assets, equipment classes, marker
logic, network code, or compile-final functions. Each supported overlay applies
its profile position during `onLoad`, before the first visible frame. A small
client-side watcher remains as a fallback for primary/alternate position
changes.

## Credits and license

Original cTab authors: Riouken, Gundy, and Raspu.

The UI-grid approach is based on the catTab implementation by Cat Harsis and
the MokTech Industries fork. Modified integration code by Gruppe 9.

This derivative addon is distributed under the GNU General Public License,
version 2. See `LICENSE`.
