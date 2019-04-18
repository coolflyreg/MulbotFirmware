/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
/**
 * Made with Marlin Bitmap Converter
 * http://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'BOOT UP SCREEN NEW.bmp'
 */
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64
const unsigned char custom_start_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .....................................................###........................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....................................................#####.......................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...................................................##...##......................................................................
  0x00,0x00,0x01,0xF0,0x00,0x00,0x30,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .......................#####......................##.....##.....................................................................
  0x00,0x00,0x03,0xFC,0x00,0x00,0x30,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ......................########....................##.....##.....................................................................
  0x00,0x00,0x06,0x0E,0x00,0x00,0x18,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .....................##.....###....................##...##......................................................................
  0x00,0x00,0x0C,0x06,0x00,0x00,0x1D,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....................##.......##....................###.###......................................................................
  0x00,0x00,0x18,0x03,0x00,0x00,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...................##.........##....................#####.......................................................................
  0x00,0x00,0x18,0x03,0x00,0x01,0x8D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...................##.........##...............##...##.#........................................................................
  0x00,0x00,0x18,0x03,0x00,0x03,0x99,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...................##.........##..............###..##..##.......................................................................
  0x00,0x00,0x18,0x03,0x00,0x0F,0xD9,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...................##.........##............######.##..##.......................................................................
  0x00,0x00,0x18,0x03,0x00,0x3C,0x79,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...................##.........##..........####...####..##.......................................................................
  0x00,0x00,0x0C,0x03,0x00,0xF0,0x79,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....................##........##........####.....####..##.......................................................................
  0x00,0x00,0x0E,0x03,0x01,0xC0,0x31,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....................###.......##.......###........##...##.......................................................................
  0x00,0x00,0x07,0x81,0xC7,0x80,0x39,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .....................####......###...####.........###..##.......................................................................
  0x00,0x00,0x01,0xC3,0xFE,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .......................###....#########............######.......................................................................
  0x00,0x00,0x00,0x6E,0x78,0x1C,0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .........................##.###..####......###.....#######......................................................................
  0x00,0x00,0x00,0x3C,0xE0,0x7F,0x0C,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..........................####..###......#######....##...##.....................................................................
  0x00,0x00,0x00,0x73,0xC0,0xE3,0x86,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .........................###..####......###...###....##...##....................................................................
  0x00,0x00,0x00,0x3F,0x00,0xC1,0x86,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..........................######........##.....##....##...##....................................................................
  0x00,0x00,0x00,0x3C,0x01,0x81,0x83,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..........................####.........##......##.....##..##....................................................................
  0x00,0x00,0x00,0x70,0x01,0x80,0x83,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .........................###...........##.......#.....##...#....................................................................
  0x00,0x00,0x01,0xE0,0x01,0x81,0x81,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .......................####............##......##......##..#....................................................................
  0x00,0x00,0x07,0x80,0x00,0xC3,0x81,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .....................####...............##....###......#####....................................................................
  0x00,0x00,0x0E,0x00,0x00,0x7F,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....................###..................#######........####....................................................................
  0x00,0x00,0x38,0x00,0x00,0x3E,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..................###.....................#####..........##.....................................................................
  0x00,0x00,0xF0,0x00,0x00,0x00,0x80,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................####............................#........##.....................................................................
  0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..............####............................####........##....................................................................
  0x00,0x07,0x03,0xE0,0x00,0x07,0xC0,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .............###......#####..................#####........##....................................................................
  0x1F,0x0E,0x07,0x70,0x00,0x1C,0x60,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...#####....###......###.###...............###...##........##...................................................................
  0x3B,0x8C,0x0C,0x18,0x00,0x78,0x60,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..###.###...##......##.....##............####....##.........##..................................................................
  0x61,0x86,0x08,0x18,0x01,0xFF,0xF0,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .##....##....##.....#......##..........#############........##..................................................................
  0x60,0xE6,0x18,0x0C,0x03,0x9F,0xF8,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .##.....###..##....##.......##........###..##########.......###.................................................................
  0x61,0xFF,0x18,0x08,0x0F,0x30,0x18,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .##....#########...##.......#.......####..##.......##.....###...................................................................
  0x31,0x9F,0x0C,0x18,0x3C,0x30,0x78,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..##...##..#####....##.....##.....####....##.....####...####....................................................................
  0x3F,0xC3,0x8E,0x38,0xFF,0x61,0xE3,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..########....###...###...###...########.##....####...####......................................................................
  0x0E,0xE1,0xC7,0xF1,0xCF,0xE3,0x87,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....###.###....###...#######...###..#######...###....###........................................................................
  0x00,0x39,0xC1,0xC7,0x98,0xCF,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..........###..###.....###...####..##...##..####...###..........................................................................
  0x00,0x1F,0x60,0x1E,0xD8,0x3C,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...........#####.##........####.##.##.....####...####...........................................................................
  0x00,0x07,0x60,0x0C,0xF0,0xF1,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .............###.##.........##..####....####...####.............................................................................
  0x00,0x03,0x30,0x0F,0xA1,0xC3,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..............##..##........#####.#....###....###...............................................................................
  0x00,0x03,0x38,0x07,0x87,0x8E,0x0F,0x0F,0x9F,0x9C,0xFC,0x1F,0x60,0x1B,0x0E,0xEE, // ..............##..###........####....####...###.....####....#####..######..###..######.....#####.##........##.##....###.###.###.
  0x00,0x03,0x18,0x06,0x1E,0x3C,0x0F,0x8F,0x9F,0x9C,0xFC,0x1F,0x78,0x3B,0x8F,0xEE, // ..............##...##........##....####...####......#####...#####..######..###..######.....#####.####.....###.###...#######.###.
  0x00,0x01,0x8C,0x03,0x38,0x70,0x07,0x8F,0x0F,0x08,0x78,0x0F,0x78,0x73,0x8C,0xE6, // ...............##...##........##..###....###.........####...####....####....#....####.......####.####....###..###...##..###..##.
  0x00,0x01,0xCC,0x03,0xE1,0xC0,0x07,0x8F,0x0F,0x08,0x78,0x0F,0x3C,0x71,0xCD,0xE6, // ...............###..##........#####....###...........####...####....####....#....####.......####..####...###...###..##.####..##.
  0x00,0x00,0xFE,0x01,0xC7,0x80,0x07,0x8F,0x0F,0x08,0x78,0x0F,0x3C,0x71,0xCD,0xE6, // ................#######........###...####............####...####....####....#....####.......####..####...###...###..##.####..##.
  0x00,0x00,0x7E,0x00,0x1E,0x00,0x07,0xCF,0x0F,0x08,0x78,0x0F,0x3C,0xF1,0xCD,0xF6, // .................######............####..............#####..####....####....#....####.......####..####..####...###..##.#####.##.
  0x00,0x00,0x03,0x00,0x38,0x00,0x03,0xCF,0x0F,0x08,0x78,0x0F,0x3C,0xF1,0xE9,0xF2, // ......................##..........###.................####..####....####....#....####.......####..####..####...####.#..#####..#.
  0x00,0x00,0x01,0x80,0xE0,0x00,0x03,0xEF,0x0F,0x08,0x78,0x0F,0x38,0xF1,0xE1,0xF0, // .......................##.......###...................#####.####....####....#....####.......####..###...####...####....#####....
  0x00,0x00,0x01,0x83,0xC0,0x00,0x03,0xEF,0x0F,0x08,0x78,0x0F,0x78,0xF1,0xE1,0xF0, // .......................##.....####....................#####.####....####....#....####.......####.####...####...####....#####....
  0x00,0x00,0x00,0xCF,0x00,0x00,0x03,0xEF,0x0F,0x08,0x78,0x0F,0xE0,0xF1,0xE1,0xF0, // ........................##..####......................#####.####....####....#....####.......#######.....####...####....#####....
  0x00,0x00,0x00,0xFC,0x00,0x00,0x07,0xEF,0x0F,0x08,0x78,0x0F,0x70,0xF1,0xE1,0xF0, // ........................######.......................######.####....####....#....####.......####.###....####...####....#####....
  0x00,0x00,0x00,0x70,0x00,0x00,0x05,0xCF,0x0F,0x08,0x78,0x0F,0x38,0xF1,0xE1,0xF0, // .........................###.........................#.###..####....####....#....####.......####..###...####...####....#####....
  0x00,0x00,0x00,0x60,0x00,0x00,0x05,0xCF,0x0F,0x08,0x78,0x0F,0x3C,0xF1,0xE1,0xF0, // .........................##..........................#.###..####....####....#....####.......####..####..####...####....#####....
  0x00,0x00,0x00,0x00,0x00,0x00,0x05,0xCF,0x0F,0x08,0x78,0x8F,0x3C,0xF1,0xE1,0xF0, // .....................................................#.###..####....####....#....####...#...####..####..####...####....#####....
  0x00,0x00,0x00,0x00,0x00,0x00,0x05,0xCF,0x0F,0x08,0x78,0xCF,0x3C,0xF1,0xC1,0xF0, // .....................................................#.###..####....####....#....####...##..####..####..####...###.....#####....
  0x00,0x00,0x00,0x00,0x00,0x00,0x05,0xCF,0x0F,0x08,0x78,0x8F,0x3C,0x71,0xC1,0xF0, // .....................................................#.###..####....####....#....####...#...####..####...###...###.....#####....
  0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xCF,0x0F,0x18,0x78,0x8F,0x3C,0x71,0xC1,0xE0, // .....................................................#..##..####....####...##....####...#...####..####...###...###.....####.....
  0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x8F,0x0F,0x10,0x79,0x8F,0x38,0x71,0x81,0xF0, // .....................................................#..#...####....####...#.....####..##...####..###....###...##......#####....
  0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x9F,0x07,0xB0,0x7B,0x9F,0x78,0x3B,0x81,0xF0, // ....................................................###.#..#####.....####.##.....####.###..#####.####.....###.###......#####....
  0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x9F,0x83,0xA0,0xFB,0x9F,0x70,0x1B,0x01,0xF0, // ....................................................###.#..######.....###.#.....#####.###..#####.###.......##.##.......#####....
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00  // ................................................................................................................................
};