#pragma once

const char scripts_js[] = {

	0xef, 0xbb, 0xbf, 0x6c, 0x65, 0x74, 0x20, 0x6f, 0x6c, 0x64, 0x58, 0x20, 0x3d, 0x20, 0x30, 0x3b, 
	0x0d, 0x0a, 0x6c, 0x65, 0x74, 0x20, 0x6f, 0x6c, 0x64, 0x59, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0d, 
	0x0a, 0x6c, 0x65, 0x74, 0x20, 0x6d, 0x6f, 0x75, 0x73, 0x65, 0x50, 0x72, 0x65, 0x73, 0x73, 0x65, 
	0x64, 0x20, 0x3d, 0x20, 0x66, 0x61, 0x6c, 0x73, 0x65, 0x3b, 0x0d, 0x0a, 0x6c, 0x65, 0x74, 0x20, 
	0x63, 0x74, 0x78, 0x20, 0x3d, 0x20, 0x6e, 0x75, 0x6c, 0x6c, 0x3b, 0x0d, 0x0a, 0x63, 0x6f, 0x6e, 
	0x73, 0x74, 0x20, 0x73, 0x63, 0x61, 0x6c, 0x65, 0x20, 0x3d, 0x20, 0x31, 0x3b, 0x0d, 0x0a, 0x77, 
	0x69, 0x6e, 0x64, 0x6f, 0x77, 0x2e, 0x61, 0x64, 0x64, 0x45, 0x76, 0x65, 0x6e, 0x74, 0x4c, 0x69, 
	0x73, 0x74, 0x65, 0x6e, 0x65, 0x72, 0x28, 0x27, 0x6c, 0x6f, 0x61, 0x64, 0x27, 0x2c, 0x20, 0x28, 
	0x29, 0x20, 0x3d, 0x3e, 0x20, 0x7b, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 
	0x74, 0x20, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x63, 0x75, 0x6d, 
	0x65, 0x6e, 0x74, 0x2e, 0x67, 0x65, 0x74, 0x45, 0x6c, 0x65, 0x6d, 0x65, 0x6e, 0x74, 0x42, 0x79, 
	0x49, 0x64, 0x28, 0x22, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x45, 0x6c, 0x65, 0x6d, 0x22, 0x29, 
	0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x74, 0x78, 0x20, 0x3d, 0x20, 0x63, 0x61, 0x6e, 0x76, 
	0x61, 0x73, 0x2e, 0x67, 0x65, 0x74, 0x43, 0x6f, 0x6e, 0x74, 0x65, 0x78, 0x74, 0x28, 0x27, 0x32, 
	0x64, 0x27, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x74, 0x78, 0x2e, 0x63, 0x6f, 
	0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x27, 0x62, 0x6c, 0x61, 0x63, 0x6b, 0x27, 0x3b, 0x0d, 0x0a, 
	0x20, 0x20, 0x20, 0x20, 0x63, 0x74, 0x78, 0x2e, 0x6c, 0x69, 0x6e, 0x65, 0x57, 0x69, 0x64, 0x74, 
	0x68, 0x20, 0x3d, 0x20, 0x31, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x74, 0x78, 0x2e, 
	0x73, 0x63, 0x61, 0x6c, 0x65, 0x28, 0x73, 0x63, 0x61, 0x6c, 0x65, 0x2c, 0x20, 0x73, 0x63, 0x61, 
	0x6c, 0x65, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 
	0x2e, 0x6f, 0x6e, 0x6d, 0x6f, 0x75, 0x73, 0x65, 0x6d, 0x6f, 0x76, 0x65, 0x20, 0x3d, 0x20, 0x66, 
	0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x28, 0x65, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x6d, 0x6f, 0x75, 0x73, 0x65, 
	0x50, 0x72, 0x65, 0x73, 0x73, 0x65, 0x64, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x78, 0x20, 0x3d, 0x20, 
	0x28, 0x65, 0x2e, 0x70, 0x61, 0x67, 0x65, 0x58, 0x20, 0x2d, 0x20, 0x63, 0x61, 0x6e, 0x76, 0x61, 
	0x73, 0x2e, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x4c, 0x65, 0x66, 0x74, 0x29, 0x20, 0x2f, 0x20, 
	0x73, 0x63, 0x61, 0x6c, 0x65, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x79, 0x20, 0x3d, 0x20, 0x28, 0x65, 0x2e, 0x70, 
	0x61, 0x67, 0x65, 0x59, 0x20, 0x2d, 0x20, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x2e, 0x6f, 0x66, 
	0x66, 0x73, 0x65, 0x74, 0x54, 0x6f, 0x70, 0x29, 0x20, 0x2f, 0x20, 0x73, 0x63, 0x61, 0x6c, 0x65, 
	0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 
	0x74, 0x78, 0x2e, 0x62, 0x65, 0x67, 0x69, 0x6e, 0x50, 0x61, 0x74, 0x68, 0x28, 0x29, 0x3b, 0x0d, 
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x74, 0x78, 
	0x2e, 0x6c, 0x69, 0x6e, 0x65, 0x57, 0x69, 0x64, 0x74, 0x68, 0x20, 0x3d, 0x20, 0x31, 0x3b, 0x0d, 
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x74, 0x78, 
	0x2e, 0x6c, 0x69, 0x6e, 0x65, 0x4a, 0x6f, 0x69, 0x6e, 0x20, 0x3d, 0x20, 0x22, 0x72, 0x6f, 0x75, 
	0x6e, 0x64, 0x22, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x63, 0x74, 0x78, 0x2e, 0x6d, 0x6f, 0x76, 0x65, 0x54, 0x6f, 0x28, 0x6f, 0x6c, 0x64, 
	0x58, 0x2c, 0x20, 0x6f, 0x6c, 0x64, 0x59, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x74, 0x78, 0x2e, 0x6c, 0x69, 0x6e, 0x65, 0x54, 
	0x6f, 0x28, 0x78, 0x2c, 0x20, 0x79, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x74, 0x78, 0x2e, 0x63, 0x6c, 0x6f, 0x73, 0x65, 0x50, 
	0x61, 0x74, 0x68, 0x28, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x63, 0x74, 0x78, 0x2e, 0x73, 0x74, 0x72, 0x6f, 0x6b, 0x65, 0x28, 0x29, 
	0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6f, 
	0x6c, 0x64, 0x58, 0x20, 0x3d, 0x20, 0x78, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x6c, 0x64, 0x59, 0x20, 0x3d, 0x20, 0x79, 0x3b, 0x0d, 
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 
	0x7d, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x2e, 0x6f, 
	0x6e, 0x6d, 0x6f, 0x75, 0x73, 0x65, 0x64, 0x6f, 0x77, 0x6e, 0x20, 0x3d, 0x20, 0x66, 0x75, 0x6e, 
	0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x28, 0x65, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x6c, 0x64, 0x58, 0x20, 0x3d, 0x20, 0x28, 0x65, 0x2e, 0x70, 
	0x61, 0x67, 0x65, 0x58, 0x20, 0x2d, 0x20, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x2e, 0x6f, 0x66, 
	0x66, 0x73, 0x65, 0x74, 0x4c, 0x65, 0x66, 0x74, 0x29, 0x20, 0x2f, 0x20, 0x73, 0x63, 0x61, 0x6c, 
	0x65, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x6c, 0x64, 0x59, 
	0x20, 0x3d, 0x20, 0x28, 0x65, 0x2e, 0x70, 0x61, 0x67, 0x65, 0x59, 0x20, 0x2d, 0x20, 0x63, 0x61, 
	0x6e, 0x76, 0x61, 0x73, 0x2e, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x54, 0x6f, 0x70, 0x29, 0x20, 
	0x2f, 0x20, 0x73, 0x63, 0x61, 0x6c, 0x65, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x6d, 0x6f, 0x75, 0x73, 0x65, 0x50, 0x72, 0x65, 0x73, 0x73, 0x65, 0x64, 0x20, 0x3d, 
	0x20, 0x74, 0x72, 0x75, 0x65, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0d, 0x0a, 
	0x20, 0x20, 0x20, 0x20, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x2e, 0x6f, 0x6e, 0x6d, 0x6f, 0x75, 
	0x73, 0x65, 0x75, 0x70, 0x20, 0x3d, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 
	0x28, 0x65, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6d, 
	0x6f, 0x75, 0x73, 0x65, 0x50, 0x72, 0x65, 0x73, 0x73, 0x65, 0x64, 0x20, 0x3d, 0x20, 0x66, 0x61, 
	0x6c, 0x73, 0x65, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 
	0x20, 0x20, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x2e, 0x6f, 0x6e, 0x6d, 0x6f, 0x75, 0x73, 0x65, 
	0x6c, 0x65, 0x61, 0x76, 0x65, 0x20, 0x3d, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 
	0x20, 0x28, 0x65, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x6d, 0x6f, 0x75, 0x73, 0x65, 0x50, 0x72, 0x65, 0x73, 0x73, 0x65, 0x64, 0x20, 0x3d, 0x20, 0x66, 
	0x61, 0x6c, 0x73, 0x65, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0d, 0x0a, 0x0d, 
	0x0a, 0x7d, 0x29, 0x3b, 0x0d, 0x0a, 0x0d, 0x0a, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 
	0x20, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x28, 0x29, 0x20, 
	0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x2f, 0x63, 0x74, 0x78, 0x2e, 0x73, 0x65, 0x74, 
	0x54, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, 0x28, 0x31, 0x2c, 0x20, 0x30, 0x2c, 0x20, 
	0x30, 0x2c, 0x20, 0x31, 0x2c, 0x20, 0x30, 0x2c, 0x20, 0x30, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 
	0x20, 0x20, 0x63, 0x74, 0x78, 0x2e, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x52, 0x65, 0x63, 0x74, 0x28, 
	0x30, 0x2c, 0x20, 0x30, 0x2c, 0x20, 0x63, 0x74, 0x78, 0x2e, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 
	0x2e, 0x77, 0x69, 0x64, 0x74, 0x68, 0x2c, 0x20, 0x63, 0x74, 0x78, 0x2e, 0x63, 0x61, 0x6e, 0x76, 
	0x61, 0x73, 0x2e, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x29, 0x3b, 0x0d, 0x0a, 0x7d, 0x0d, 0x0a, 
	0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x73, 0x65, 0x6e, 0x64, 0x5f, 0x69, 0x6d, 
	0x61, 0x67, 0x65, 0x28, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 
	0x20, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 
	0x6e, 0x74, 0x2e, 0x67, 0x65, 0x74, 0x45, 0x6c, 0x65, 0x6d, 0x65, 0x6e, 0x74, 0x42, 0x79, 0x49, 
	0x64, 0x28, 0x22, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x45, 0x6c, 0x65, 0x6d, 0x22, 0x29, 0x0d, 
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x63, 0x74, 0x78, 0x20, 0x3d, 0x20, 0x63, 
	0x61, 0x6e, 0x76, 0x61, 0x73, 0x2e, 0x67, 0x65, 0x74, 0x43, 0x6f, 0x6e, 0x74, 0x65, 0x78, 0x74, 
	0x28, 0x27, 0x32, 0x64, 0x27, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 
	0x20, 0x69, 0x6d, 0x67, 0x64, 0x20, 0x3d, 0x20, 0x63, 0x74, 0x78, 0x2e, 0x67, 0x65, 0x74, 0x49, 
	0x6d, 0x61, 0x67, 0x65, 0x44, 0x61, 0x74, 0x61, 0x28, 0x30, 0x2c, 0x20, 0x30, 0x2c, 0x20, 0x63, 
	0x74, 0x78, 0x2e, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x2e, 0x77, 0x69, 0x64, 0x74, 0x68, 0x2c, 
	0x20, 0x63, 0x74, 0x78, 0x2e, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x2e, 0x68, 0x65, 0x69, 0x67, 
	0x68, 0x74, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x70, 0x69, 
	0x78, 0x20, 0x3d, 0x20, 0x69, 0x6d, 0x67, 0x64, 0x2e, 0x64, 0x61, 0x74, 0x61, 0x3b, 0x0d, 0x0a, 
	0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x53, 0x69, 
	0x7a, 0x65, 0x20, 0x3d, 0x20, 0x63, 0x74, 0x78, 0x2e, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x2e, 
	0x77, 0x69, 0x64, 0x74, 0x68, 0x20, 0x2a, 0x20, 0x63, 0x74, 0x78, 0x2e, 0x63, 0x61, 0x6e, 0x76, 
	0x61, 0x73, 0x2e, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x20, 0x2f, 0x20, 0x73, 0x63, 0x61, 0x6c, 
	0x65, 0x20, 0x2f, 0x20, 0x73, 0x63, 0x61, 0x6c, 0x65, 0x20, 0x2f, 0x20, 0x38, 0x3b, 0x0d, 0x0a, 
	0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x62, 0x77, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 
	0x20, 0x3d, 0x20, 0x6e, 0x65, 0x77, 0x20, 0x41, 0x72, 0x72, 0x61, 0x79, 0x42, 0x75, 0x66, 0x66, 
	0x65, 0x72, 0x28, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x53, 0x69, 0x7a, 0x65, 0x29, 0x3b, 0x0d, 
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x69, 0x6e, 0x74, 0x38, 0x56, 0x69, 0x65, 
	0x77, 0x20, 0x3d, 0x20, 0x6e, 0x65, 0x77, 0x20, 0x49, 0x6e, 0x74, 0x38, 0x41, 0x72, 0x72, 0x61, 
	0x79, 0x28, 0x62, 0x77, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 
	0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x6c, 0x69, 0x6e, 0x65, 0x53, 0x74, 0x74, 0x72, 0x69, 0x64, 
	0x65, 0x20, 0x3d, 0x20, 0x4d, 0x61, 0x74, 0x68, 0x2e, 0x63, 0x65, 0x69, 0x6c, 0x28, 0x63, 0x74, 
	0x78, 0x2e, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x2e, 0x77, 0x69, 0x64, 0x74, 0x68, 0x20, 0x2f, 
	0x20, 0x38, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x28, 0x76, 
	0x61, 0x72, 0x20, 0x69, 0x20, 0x3d, 0x20, 0x30, 0x2c, 0x20, 0x6e, 0x20, 0x3d, 0x20, 0x70, 0x69, 
	0x78, 0x2e, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x3b, 0x20, 0x69, 0x20, 0x3c, 0x20, 0x6e, 0x3b, 
	0x20, 0x69, 0x20, 0x2b, 0x3d, 0x20, 0x34, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x6d, 0x61, 0x78, 0x56, 0x61, 0x6c, 0x20, 0x3d, 
	0x20, 0x4d, 0x61, 0x74, 0x68, 0x2e, 0x6d, 0x61, 0x78, 0x28, 0x70, 0x69, 0x78, 0x5b, 0x69, 0x5d, 
	0x20, 0x3d, 0x20, 0x30, 0x2c, 0x20, 0x70, 0x69, 0x78, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x31, 0x5d, 
	0x2c, 0x20, 0x70, 0x69, 0x78, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x32, 0x5d, 0x2c, 0x20, 0x32, 0x35, 
	0x35, 0x20, 0x2d, 0x20, 0x70, 0x69, 0x78, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x33, 0x5d, 0x29, 0x3b, 
	0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x6d, 0x61, 
	0x78, 0x56, 0x61, 0x6c, 0x20, 0x3c, 0x20, 0x31, 0x32, 0x37, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x78, 
	0x20, 0x3d, 0x20, 0x28, 0x69, 0x20, 0x2f, 0x20, 0x34, 0x29, 0x20, 0x25, 0x20, 0x63, 0x74, 0x78, 
	0x2e, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x2e, 0x77, 0x69, 0x64, 0x74, 0x68, 0x3b, 0x0d, 0x0a, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 
	0x79, 0x20, 0x3d, 0x20, 0x4d, 0x61, 0x74, 0x68, 0x2e, 0x66, 0x6c, 0x6f, 0x6f, 0x72, 0x28, 0x69, 
	0x20, 0x2f, 0x20, 0x34, 0x20, 0x2f, 0x20, 0x63, 0x74, 0x78, 0x2e, 0x63, 0x61, 0x6e, 0x76, 0x61, 
	0x73, 0x2e, 0x77, 0x69, 0x64, 0x74, 0x68, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x6d, 0x61, 0x73, 0x6b, 0x20, 
	0x3d, 0x20, 0x31, 0x20, 0x3c, 0x3c, 0x20, 0x28, 0x78, 0x20, 0x26, 0x20, 0x30, 0x78, 0x30, 0x37, 
	0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x6c, 0x65, 0x74, 0x20, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x78, 0x20, 0x3e, 
	0x3e, 0x20, 0x33, 0x29, 0x20, 0x2b, 0x20, 0x79, 0x20, 0x2a, 0x20, 0x6c, 0x69, 0x6e, 0x65, 0x53, 
	0x74, 0x74, 0x72, 0x69, 0x64, 0x65, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x6e, 0x74, 0x38, 0x56, 0x69, 0x65, 0x77, 0x5b, 0x69, 0x6e, 
	0x64, 0x65, 0x78, 0x5d, 0x20, 0x7c, 0x3d, 0x20, 0x6d, 0x61, 0x73, 0x6b, 0x3b, 0x0d, 0x0a, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0d, 
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x65, 0x74, 0x63, 0x68, 0x28, 0x60, 0x61, 0x70, 0x69, 0x2f, 
	0x76, 0x31, 0x2f, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x2f, 0x69, 0x6d, 0x61, 0x67, 0x65, 
	0x3f, 0x78, 0x3d, 0x30, 0x26, 0x79, 0x3d, 0x30, 0x26, 0x77, 0x3d, 0x24, 0x7b, 0x63, 0x74, 0x78, 
	0x2e, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x2e, 0x77, 0x69, 0x64, 0x74, 0x68, 0x7d, 0x26, 0x68, 
	0x3d, 0x24, 0x7b, 0x63, 0x74, 0x78, 0x2e, 0x63, 0x61, 0x6e, 0x76, 0x61, 0x73, 0x2e, 0x68, 0x65, 
	0x69, 0x67, 0x68, 0x74, 0x7d, 0x60, 0x2c, 0x20, 0x7b, 0x20, 0x6d, 0x65, 0x74, 0x68, 0x6f, 0x64, 
	0x3a, 0x20, 0x27, 0x50, 0x4f, 0x53, 0x54, 0x27, 0x2c, 0x20, 0x62, 0x6f, 0x64, 0x79, 0x3a, 0x20, 
	0x62, 0x77, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x20, 0x7d, 0x29, 0x3b, 0x0d, 0x0a, 0x7d, 0x0d, 
	0x0a, 0x0d, 0x0a, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x73, 0x65, 0x6e, 0x64, 
	0x74, 0x65, 0x78, 0x74, 0x28, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 
	0x72, 0x20, 0x74, 0x65, 0x78, 0x74, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 
	0x74, 0x2e, 0x67, 0x65, 0x74, 0x45, 0x6c, 0x65, 0x6d, 0x65, 0x6e, 0x74, 0x42, 0x79, 0x49, 0x64, 
	0x28, 0x22, 0x74, 0x65, 0x78, 0x74, 0x54, 0x6f, 0x53, 0x65, 0x6e, 0x64, 0x22, 0x29, 0x2e, 0x76, 
	0x61, 0x6c, 0x75, 0x65, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x63, 
	0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e, 
	0x67, 0x65, 0x74, 0x45, 0x6c, 0x65, 0x6d, 0x65, 0x6e, 0x74, 0x42, 0x79, 0x49, 0x64, 0x28, 0x22, 
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x22, 0x29, 0x2e, 0x63, 0x68, 0x65, 0x63, 0x6b, 0x65, 0x64, 0x20, 
	0x3f, 0x20, 0x30, 0x20, 0x3a, 0x20, 0x31, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 
	0x72, 0x20, 0x62, 0x6b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 
	0x72, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x20, 0x3f, 0x20, 0x31, 0x20, 0x3a, 0x20, 0x30, 0x3b, 0x0d, 
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x78, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x63, 
	0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e, 0x67, 0x65, 0x74, 0x45, 0x6c, 0x65, 0x6d, 0x65, 0x6e, 0x74, 
	0x42, 0x79, 0x49, 0x64, 0x28, 0x22, 0x78, 0x5f, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x22, 0x29, 0x2e, 
	0x76, 0x61, 0x6c, 0x75, 0x65, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 
	0x79, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e, 0x67, 0x65, 0x74, 
	0x45, 0x6c, 0x65, 0x6d, 0x65, 0x6e, 0x74, 0x42, 0x79, 0x49, 0x64, 0x28, 0x22, 0x79, 0x5f, 0x63, 
	0x6f, 0x6f, 0x72, 0x64, 0x22, 0x29, 0x2e, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x3b, 0x0d, 0x0a, 0x20, 
	0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x66, 0x6f, 0x6e, 0x74, 0x20, 0x3d, 0x20, 0x64, 0x6f, 
	0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e, 0x67, 0x65, 0x74, 0x45, 0x6c, 0x65, 0x6d, 0x65, 0x6e, 
	0x74, 0x42, 0x79, 0x49, 0x64, 0x28, 0x22, 0x66, 0x6f, 0x6e, 0x74, 0x22, 0x29, 0x2e, 0x63, 0x68, 
	0x65, 0x63, 0x6b, 0x65, 0x64, 0x20, 0x3f, 0x20, 0x31, 0x20, 0x3a, 0x20, 0x30, 0x3b, 0x0d, 0x0a, 
	0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x75, 0x72, 0x6c, 0x20, 0x3d, 0x20, 0x65, 0x6e, 
	0x63, 0x6f, 0x64, 0x65, 0x55, 0x52, 0x49, 0x28, 0x60, 0x61, 0x70, 0x69, 0x2f, 0x76, 0x31, 0x2f, 
	0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x2f, 0x74, 0x65, 0x78, 0x74, 0x3f, 0x74, 0x65, 0x78, 
	0x74, 0x3d, 0x24, 0x7b, 0x74, 0x65, 0x78, 0x74, 0x7d, 0x26, 0x78, 0x3d, 0x24, 0x7b, 0x78, 0x7d, 
	0x26, 0x79, 0x3d, 0x24, 0x7b, 0x79, 0x7d, 0x26, 0x66, 0x6f, 0x6e, 0x74, 0x3d, 0x24, 0x7b, 0x66, 
	0x6f, 0x6e, 0x74, 0x7d, 0x26, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3d, 0x24, 0x7b, 0x63, 0x6f, 0x6c, 
	0x6f, 0x72, 0x7d, 0x26, 0x62, 0x6b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3d, 0x24, 0x7b, 0x62, 0x6b, 
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x7d, 0x60, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 
	0x65, 0x74, 0x63, 0x68, 0x28, 0x75, 0x72, 0x6c, 0x29, 0x3b, 0x0d, 0x0a, 0x7d, 0x0d, 0x0a, 0x0d, 
	0x0a, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 
	0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x28, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 
	0x20, 0x76, 0x61, 0x72, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x63, 
	0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e, 0x67, 0x65, 0x74, 0x45, 0x6c, 0x65, 0x6d, 0x65, 0x6e, 0x74, 
	0x42, 0x79, 0x49, 0x64, 0x28, 0x22, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x22, 0x29, 0x2e, 0x63, 0x68, 
	0x65, 0x63, 0x6b, 0x65, 0x64, 0x20, 0x3f, 0x20, 0x31, 0x20, 0x3a, 0x20, 0x30, 0x3b, 0x0d, 0x0a, 
	0x20, 0x20, 0x20, 0x20, 0x66, 0x65, 0x74, 0x63, 0x68, 0x28, 0x60, 0x61, 0x70, 0x69, 0x2f, 0x76, 
	0x31, 0x2f, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x2f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x3f, 
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3d, 0x24, 0x7b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x7d, 0x60, 0x29, 
	0x3b, 0x0d, 0x0a, 0x7d, 0x0d, 0x0a, 0x0d, 0x0a, 0x00, 0x00
};

