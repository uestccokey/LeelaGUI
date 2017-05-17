#ifndef QUIT_PNG_H
#define QUIT_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char quit_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 
	0x00, 0x00, 0x00, 0x0F, 0x08, 0x06, 0x00, 0x00, 0x00, 0xED, 
	0x73, 0x4F, 0x2F, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 
	0x42, 0x00, 0xAE, 0xCE, 0x1C, 0xE9, 0x00, 0x00, 0x00, 0x04, 
	0x67, 0x41, 0x4D, 0x41, 0x00, 0x00, 0xB1, 0x8F, 0x0B, 0xFC, 
	0x61, 0x05, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 
	0x00, 0x00, 0x0B, 0x11, 0x00, 0x00, 0x0B, 0x11, 0x01, 0x7F, 
	0x64, 0x5F, 0x91, 0x00, 0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 
	0x74, 0x53, 0x6F, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 
	0x70, 0x61, 0x69, 0x6E, 0x74, 0x2E, 0x6E, 0x65, 0x74, 0x20, 
	0x34, 0x2E, 0x30, 0x2E, 0x31, 0x36, 0x44, 0x69, 0xAF, 0xF5, 
	0x00, 0x00, 0x00, 0xD6, 0x49, 0x44, 0x41, 0x54, 0x38, 0x4F, 
	0x95, 0x92, 0x31, 0x0A, 0x02, 0x31, 0x10, 0x45, 0x53, 0x79, 
	0x0F, 0x6F, 0xE0, 0x41, 0xEC, 0x3C, 0x80, 0x47, 0x10, 0x8F, 
	0x90, 0x13, 0x08, 0x16, 0x22, 0x6A, 0xA9, 0x68, 0xA9, 0x96, 
	0x8A, 0x8D, 0x58, 0x2D, 0x16, 0x56, 0xDA, 0x08, 0x5A, 0x58, 
	0xED, 0x25, 0xC6, 0xFC, 0xC0, 0x8C, 0x49, 0x76, 0xB2, 0xB8, 
	0xC5, 0x63, 0xB3, 0x24, 0xEF, 0x4D, 0x16, 0xD6, 0x10, 0x91, 
	0xB1, 0x93, 0x15, 0x75, 0xFA, 0xF6, 0x2F, 0x70, 0x16, 0x0E, 
	0x23, 0x81, 0xE7, 0xA7, 0xA4, 0xEE, 0x70, 0x2C, 0x07, 0x8D, 
	0xDB, 0xD2, 0xA8, 0x0D, 0x80, 0xE2, 0xFE, 0x22, 0xBB, 0xD8, 
	0xFA, 0x08, 0x82, 0x8D, 0x02, 0x90, 0x99, 0xD3, 0xF5, 0x41, 
	0xFB, 0xCB, 0xAD, 0x72, 0x9B, 0x6C, 0x20, 0x14, 0x59, 0x6E, 
	0x1C, 0x48, 0xE5, 0xF5, 0xB1, 0x90, 0x00, 0x9E, 0x20, 0x1B, 
	0xD0, 0xE4, 0x34, 0x30, 0x2B, 0x7B, 0xF5, 0x01, 0x96, 0xA7, 
	0xED, 0x96, 0x67, 0xBE, 0x3B, 0xCB, 0x64, 0x0E, 0x2C, 0xDF, 
	0x83, 0x28, 0x22, 0x81, 0x70, 0x2A, 0x07, 0x46, 0x9B, 0x83, 
	0x88, 0x21, 0x61, 0x44, 0x02, 0x2C, 0x63, 0x2A, 0x80, 0x9C, 
	0x0B, 0x70, 0x04, 0xFB, 0x51, 0x20, 0x95, 0xF9, 0x7F, 0xD0, 
	0xE4, 0xCA, 0x0D, 0x34, 0xD9, 0xE3, 0xF6, 0x98, 0x54, 0x8E, 
	0x02, 0x1E, 0x27, 0x68, 0x32, 0x9F, 0x49, 0x65, 0x20, 0x0B, 
	0x10, 0x4D, 0x54, 0x02, 0xBC, 0x0E, 0x89, 0x5E, 0x42, 0x70, 
	0x18, 0xDF, 0xAF, 0x49, 0x3F, 0xC8, 0x7C, 0x01, 0xB0, 0x28, 
	0x88, 0xC6, 0xD3, 0x6F, 0x51, 0xD5, 0x00, 0x00, 0x00, 0x00, 
	0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& quit_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( quit_png, sizeof( quit_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //QUIT_PNG_H