#!/bin/bash

# build for crkbd with alternative layouts
qmk compile -c -kb crkbd -km manna-harbour_miryoku \
  -e MIRYOKU_ALPHAS=QWERTY \
  -e MIRYOKU_EXTRA=COLEMAKDH \
  -e MIRYOKU_TAP=QWERTY \
  -e MIRYOKU_CLIPBOARD=WIN
