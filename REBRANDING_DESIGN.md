# cTab - Adjustable UI Positions: Rebranding Design

## Understanding Summary

- Rebrand the existing client-side cTab UI position fix for a professional public Steam Workshop release.
- Publish it as **cTab - Adjustable UI Positions**, abbreviated **cTab UIP**.
- Keep the current feature scope: editable primary and alternate UI positions for Android, TAD, and MicroDAGR displays.
- Preserve existing cTab profile variables so positions already saved by testers continue to work.
- Present the project, documentation, and Workshop page in English under the author name **[GRP9] Niklas Ky**.
- Support cTab derivatives on a best-effort basis when they retain compatible display classes and behavior.
- Do not add map-indicator settings, network features, server-side behavior, or a cTab fork.

## Assumptions

- The addon remains client-only and requires CBA_A3 and cTab.
- The existing lightweight client watcher and seamless on-load positioning remain unchanged in behavior.
- Client performance impact should remain negligible, with no server or network load.
- The addon does not collect, transmit, or persist data beyond cTab's existing Arma profile variables.
- Compatibility with cTab derivatives cannot be guaranteed because their internal classes may change independently.
- The previous test build was not publicly distributed, so a public migration package or compatibility alias is unnecessary.
- The old and newly branded variants must not be loaded together.
- Logo and Workshop image assets will be supplied separately by the project owner.

## Approaches Considered

### 1. Full technical rebranding - selected

Rename the public identity, addon prefix, patch class, function tag, PBO, signing key, release folder, repository, and documentation while retaining only the established cTab profile-variable names. This provides a clean public identity without breaking saved layouts.

### 2. Public-facing rename only

Keep the existing internal identifiers and change only visible names and documentation. This has lower implementation risk but leaves temporary technical names in logs, PBOs, signatures, and source code.

### 3. Clean-room rewrite

Reimplement the Layout Editor integration without using the existing lineage. This would simplify attribution questions but adds substantial effort and regression risk without changing the user-facing feature set.

## Final Design

### Identity

- Public title: `cTab - Adjustable UI Positions`
- Short name: `cTab UIP`
- Author: `[GRP9] Niklas Ky`
- Public release version: `1.0.0`
- Technical prefix: `ctab_uip`
- CfgPatches class: `ctab_uip_main`
- CfgFunctions tag: `ctab_uip`
- PBO: `ctab_uip_main.pbo`
- Signing-key basename: `ctab_uip_1_0_0`
- Release folder: `@cTab Adjustable UI Positions`
- GitHub repository slug: `cTab-Adjustable-UI-Positions`

The existing Git repository is renamed instead of replaced so its history remains intact.

### Runtime Behavior

The addon exposes six Arma Layout Editor entries: primary and alternate positions for cTab Android, cTab TAD, and cTab MicroDAGR. The UI is placed immediately during display loading to avoid a visible jump from cTab's default position. A lightweight client-side watcher retains compatibility with display lifecycle changes. Existing `cTab_Android_dsp`, `cTab_TAD_dsp`, and `cTab_microDAGR_dsp` profile storage remains unchanged.

### Compatibility and Dependencies

- Required: CBA_A3
- Required: cTab
- cTab derivatives: best-effort compatibility only

A derivative should work automatically only when it preserves the display classes and integration behavior expected by the addon. No compatibility with every fork or derivative is promised.

### Workshop Presentation

The Workshop page and repository documentation are English-only. The lead text is:

> Put your cTab overlays exactly where you want them.

The Workshop description contains an overview, features, usage instructions, compatibility statement, requirements, source and issue links, credits, and license information. The project owner supplies the visual assets.

### Credits and License

The original cTab authors are credited. The approved lineage acknowledgement is kept exclusively in the Workshop credits and README.

The project remains licensed under GPL-2.0.

### Reliability and Validation

Implementation validation includes a HEMTT check and build, PBO and signature inspection, all six Layout Editor entries, primary and alternate positioning, persistence after restarting Arma, seamless display opening, and representative derivative smoke tests where practical. Build success confirms packaging only; final runtime compatibility requires in-game testing.

## Decision Log

| Decision | Alternatives | Reason |
| --- | --- | --- |
| Use `cTab - Adjustable UI Positions` and `cTab UIP` | Broader or GRP9-focused names | Descriptive, searchable, and concise. |
| Use `[GRP9] Niklas Ky` as author | `Gruppe 9` or no group identity | Matches the requested public creator identity. |
| Use English throughout public material | Bilingual documentation | Provides one consistent Workshop-facing language. |
| Perform a full technical rename to `ctab_uip` | Visible-only rename | Produces a clean public package and source identity. |
| Rename the existing GitHub repository | Create a new repository | Preserves Git history while adopting the final name. |
| Restart public versioning at `1.0.0` | Continue from `1.0.2` | The previous builds were private tests. |
| Preserve cTab profile-variable names | Rename all runtime variables | Retains saved UI layouts and avoids unnecessary migration logic. |
| Keep the feature scope unchanged | Add map or server settings | Maintains a focused, low-risk client utility. |
| Offer best-effort derivative support | Guarantee all derivatives or support only base cTab | Sets an honest compatibility expectation without unnecessary adapters. |
| Retain a brief lineage credit | Remove it or perform a clean-room rewrite | Accurately acknowledges the existing Layout Editor approach without prominent branding impact. |
| Keep GPL-2.0 | Change licensing | Remains consistent with the current project and its lineage. |
