;
;    Header for the a20 implementation.
;
;    Copyright (C) 2011 Michel Megens
;
;    This program is free software: you can redistribute it and/or modify
;    it under the terms of the GNU General Public License as published by
;    the Free Software Foundation, either version 3 of the License, or
;    (at your option) any later version.
;
;    This program is distributed in the hope that it will be useful,
;    but WITHOUT ANY WARRANTY; without even the implied warranty of
;    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;    GNU General Public License for more details.
;
;    You should have received a copy of the GNU General Public License
;    along with this program.  If not, see <http://www.gnu.org/licenses/>.
;

%ifndef __A20_H
%define __A20_H

%define GEBL_ENABLE_A20_GATE 0xdf
%define GEBL_READ_OUTPUT_PORT 0xd0
%define GEBL_WRITE_OUTPUT_PORT 0xd1
%define GEBL_DISABLE_KEYBOARD 0xad

; 
; If you write data to port 0x64 the cpu inteprents it as a command byte. To sent a data byte 
; sent to port 0x60.
; 

%define GEBL_STATUS_PORT 0x64
%define GEBL_DATA_PORT 0x60
%define GEBL_OUTPUTBUFFER_PORT 0x60
%define GEBL_COMMAND_PORT 0x64
%define A20_PORT 0x92

%endif