# Contributing

## Requirements

- HEMTT
- Arma 3
- CBA_A3
- Original cTab

## Local validation

Run the following commands from the repository root:

```powershell
hemtt check --no-color
hemtt build --no-color
```

For behavior changes, test all supported overlays in Arma 3 and inspect the
client RPT for script or config errors.

## Code style

- Keep code and documentation in English.
- Preserve original cTab behavior outside overlay positioning.
- Do not commit private signing keys, PBOs, signatures, release archives, or
  `.hemttout` build output.
