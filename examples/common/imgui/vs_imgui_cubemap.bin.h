static const uint8_t vs_imgui_cubemap_glsl[386] =
{
	0x56, 0x53, 0x48, 0x05, 0xe3, 0xc2, 0x5c, 0x65, 0x35, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH....e5....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x08, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // osition.a_normal
	0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x0b, 0x61, // ...a_color0....a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // _texcoord0......
	0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, // ....u_modelViewP
	0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x24, 0x01, 0x00, 0x00, 0x61, 0x74, 0x74, // roj......$...att
	0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // ribute highp vec
	0x34, 0x20, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, // 4 a_normal;.attr
	0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, // ibute highp vec3
	0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x76, 0x61, 0x72, //  a_position;.var
	0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, // ying highp vec3 
	0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // v_normal;.unifor
	0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, // m highp mat4 u_m
	0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x76, 0x6f, // odelViewProj;.vo
	0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, // id main ().{.  h
	0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ighp vec4 tmpvar
	0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, // _1;.  tmpvar_1.w
	0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, //  = 1.0;.  tmpvar
	0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, // _1.xyz = a_posit
	0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, // ion;.  gl_Positi
	0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, // on = (u_modelVie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // wProj * tmpvar_1
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x20, 0x3d, 0x20, // );.  v_normal = 
	0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x7d, 0x0a, // a_normal.xyz;.}.
	0x0a, 0x00,                                                                                     // ..
};
static const uint8_t vs_imgui_cubemap_spv[2876] =
{
	0x56, 0x53, 0x48, 0x05, 0xe3, 0xc2, 0x5c, 0x65, 0x35, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH....e5....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x08, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // osition.a_normal
	0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x0b, 0x61, // ...a_color0....a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // _texcoord0......
	0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, // ....u_modelViewP
	0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0xe0, 0x0a, 0x03, 0x02, 0x23, 0x07, 0x00, // roj..........#..
	0x00, 0x01, 0x00, 0x01, 0x00, 0x08, 0x00, 0x54, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, // .......Ta.......
	0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, // ...............G
	0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, // LSL.std.450.....
	0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x09, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x46, // .......main....F
	0x14, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0xcd, 0x0f, 0x00, 0x00, 0x03, // ................
	0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x1f, // ................
	0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x29, // ...main........)
	0x04, 0x00, 0x00, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x29, // ...Output......)
	0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, // .......gl_Positi
	0x6f, 0x6e, 0x00, 0x06, 0x00, 0x06, 0x00, 0x29, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x76, // on.....).......v
	0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x0e, // _normal.........
	0x0c, 0x00, 0x00, 0x40, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x76, 0x66, 0x34, 0x3b, 0x76, 0x66, 0x33, // ...@main(vf4;vf3
	0x3b, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xf5, 0x48, 0x00, 0x00, 0x61, 0x5f, 0x6e, 0x6f, 0x72, // ;.......H..a_nor
	0x6d, 0x61, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x2c, 0x47, 0x00, 0x00, 0x61, // mal........,G..a
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x0f, // _position.......
	0x12, 0x00, 0x00, 0x5f, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x5f, 0x00, 0x00, 0x00, 0x05, // ..._varying_....
	0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, // .......$Global..
	0x00, 0x06, 0x00, 0x99, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, // ...........u_vie
	0x77, 0x52, 0x65, 0x63, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x99, 0x02, 0x00, 0x00, 0x01, // wRect...........
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, 0x06, // ...u_viewTexel..
	0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, // ...........u_vie
	0x77, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x99, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, // w..............u
	0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x99, // _invView........
	0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, // .......u_proj...
	0x00, 0x06, 0x00, 0x99, 0x02, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, // ...........u_inv
	0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x99, 0x02, 0x00, 0x00, 0x06, // Proj............
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, // ...u_viewProj...
	0x00, 0x07, 0x00, 0x99, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, // ...........u_inv
	0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x99, // ViewProj........
	0x02, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x06, // .......u_model..
	0x00, 0x06, 0x00, 0x99, 0x02, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // ...........u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x00, 0x06, 0x00, 0x07, 0x00, 0x99, 0x02, 0x00, 0x00, 0x0a, // elView..........
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, // ...u_modelViewPr
	0x6f, 0x6a, 0x00, 0x06, 0x00, 0x06, 0x00, 0x99, 0x02, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x75, // oj.............u
	0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x00, 0x05, 0x00, 0x03, 0x00, 0x42, // _alphaRef4.....B
	0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x61, // ............A..a
	0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x46, // _normal........F
	0x14, 0x00, 0x00, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x05, // ...a_normal.....
	0x00, 0x05, 0x00, 0x2c, 0x3f, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // ...,?..a_positio
	0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, // n..........a_pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x08, 0x10, 0x00, 0x00, 0x66, // ition..........f
	0x6c, 0x61, 0x74, 0x74, 0x65, 0x6e, 0x54, 0x65, 0x6d, 0x70, 0x00, 0x05, 0x00, 0x04, 0x00, 0xab, // lattenTemp......
	0x55, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x9a, // U..param........
	0x16, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0xd8, // ...param........
	0x0c, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, // ...@entryPointOu
	0x74, 0x70, 0x75, 0x74, 0x5f, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // tput_gl_Position
	0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xef, 0x03, 0x00, 0x00, 0x4f, 0x75, 0x74, 0x70, 0x75, // ...........Outpu
	0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0xef, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, // t..............v
	0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0xcd, // _normal.........
	0x0f, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, // ...@entryPointOu
	0x74, 0x70, 0x75, 0x74, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x37, 0x02, 0x00, 0x00, 0x06, // tput...G...7....
	0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x00, // ...@...H........
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, // ...#.......H....
	0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, // .......#.......H
	0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, // ...........#... 
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, // ...H............
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x03, // .......H........
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x03, // .......H........
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, // ...#...`...H....
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, // ...........#....
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, // ...H............
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x05, // .......H........
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x05, // .......H........
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, // ...#.......H....
	0x02, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, // ...........#... 
	0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, // ...H............
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x07, // .......H........
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x07, // .......H........
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, // ...#...`...H....
	0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, // ...........#....
	0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, // ...H............
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x09, // .......H........
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x09, // .......H........
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, // ...#.......H....
	0x02, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, // ...........#....
	0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, // ...H............
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x0b, // .......H........
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x99, // ...#... ...G....
	0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x42, 0x13, 0x00, 0x00, 0x22, // .......G...B..."
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x46, 0x14, 0x00, 0x00, 0x1e, // .......G...F....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x1e, // .......G........
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0x0b, // .......G........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xcd, 0x0f, 0x00, 0x00, 0x1e, // .......G........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x00, 0x21, // ...............!
	0x00, 0x03, 0x00, 0x02, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x0d, // ................
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x0d, // ... ............
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x07, // ....... ........
	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x0d, // ................
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x95, 0x02, 0x00, 0x00, 0x07, // ....... ........
	0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x04, 0x00, 0x29, 0x04, 0x00, 0x00, 0x1d, // ...........)....
	0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x21, 0x00, 0x05, 0x00, 0xa8, 0x07, 0x00, 0x00, 0x29, // .......!.......)
	0x04, 0x00, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x95, 0x02, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xa6, // ........... ....
	0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x29, 0x04, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0c, // .......)........
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, // ... .......+....
	0x00, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0d, // ...........+....
	0x00, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0d, // ...........+....
	0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x2c, 0x00, 0x06, 0x00, 0x18, // ..........?,....
	0x00, 0x00, 0x00, 0x72, 0x02, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x8a, // ...r............
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x00, // ...+............
	0x00, 0x00, 0x00, 0x18, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x04, // .......e........
	0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, // ........... ....
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x20, // ...+.......j... 
	0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x37, 0x02, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x6a, // .......7...e...j
	0x0a, 0x00, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x99, 0x02, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d, // ................
	0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, // ...e...e...e...e
	0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x37, 0x02, 0x00, 0x00, 0x65, // ...e...e...7...e
	0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x16, // ...e....... ....
	0x05, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x99, 0x02, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x16, // ...........;....
	0x05, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, // ...B.......+....
	0x00, 0x00, 0x00, 0x29, 0x0a, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xe2, // ...)....... ....
	0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9b, // .......e... ....
	0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9b, // ...........;....
	0x02, 0x00, 0x00, 0x46, 0x14, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x96, // ...F....... ....
	0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x96, // ...........;....
	0x02, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9c, // ........... ....
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, // ...........;....
	0x02, 0x00, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0xef, // ................
	0x03, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x6c, 0x06, 0x00, 0x00, 0x03, // ....... ...l....
	0x00, 0x00, 0x00, 0xef, 0x03, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x6c, 0x06, 0x00, 0x00, 0xcd, // .......;...l....
	0x0f, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x97, 0x02, 0x00, 0x00, 0x03, // ....... ........
	0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1f, // .......6........
	0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x53, // ...............S
	0x61, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0xa6, 0x06, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x07, // a..;............
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0xab, 0x55, 0x00, 0x00, 0x07, // ...;........U...
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x95, 0x02, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x07, // ...;............
	0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x46, // ...=........A..F
	0x14, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x2c, 0x3f, 0x00, 0x00, 0xa6, // ...=.......,?...
	0x14, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xab, 0x55, 0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x3e, // ...>....U...A..>
	0x00, 0x03, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x2c, 0x3f, 0x00, 0x00, 0x39, 0x00, 0x06, 0x00, 0x29, // .......,?..9...)
	0x04, 0x00, 0x00, 0x49, 0x26, 0x00, 0x00, 0x0e, 0x0c, 0x00, 0x00, 0xab, 0x55, 0x00, 0x00, 0x9a, // ...I&.......U...
	0x16, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x08, 0x10, 0x00, 0x00, 0x49, 0x26, 0x00, 0x00, 0x41, // ...>.......I&..A
	0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x54, 0x34, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x0b, // .......T4.......
	0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x54, // ...=...........T
	0x34, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x41, // 4..>...........A
	0x00, 0x05, 0x00, 0x95, 0x02, 0x00, 0x00, 0x27, 0x41, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x0e, // .......'A.......
	0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0xdf, 0x1c, 0x00, 0x00, 0x27, // ...=...........'
	0x41, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x97, 0x02, 0x00, 0x00, 0x01, 0x5c, 0x00, 0x00, 0xcd, // A..A............
	0x0f, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x01, 0x5c, 0x00, 0x00, 0xdf, // .......>........
	0x1c, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x29, // .......8...6...)
	0x04, 0x00, 0x00, 0x0e, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0x07, 0x00, 0x00, 0x37, // ...............7
	0x00, 0x03, 0x00, 0x9a, 0x02, 0x00, 0x00, 0xf5, 0x48, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x95, // ........H..7....
	0x02, 0x00, 0x00, 0x2c, 0x47, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x51, 0x1d, 0x00, 0x00, 0x3b, // ...,G......Q...;
	0x00, 0x04, 0x00, 0xa6, 0x06, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x41, // ...............A
	0x00, 0x05, 0x00, 0x95, 0x02, 0x00, 0x00, 0x50, 0x24, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0e, // .......P$.......
	0x0a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x50, 0x24, 0x00, 0x00, 0x72, 0x02, 0x00, 0x00, 0x3d, // ...>...P$..r...=
	0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x27, 0x28, 0x00, 0x00, 0x2c, 0x47, 0x00, 0x00, 0x51, // .......'(..,G..Q
	0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xac, 0x4a, 0x00, 0x00, 0x27, 0x28, 0x00, 0x00, 0x00, // ........J..'(...
	0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x7c, 0x57, 0x00, 0x00, 0x27, // ...Q.......|W..'
	0x28, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x1d, // (......Q........
	0x19, 0x00, 0x00, 0x27, 0x28, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x1d, // ...'(......P....
	0x00, 0x00, 0x00, 0xf5, 0x42, 0x00, 0x00, 0xac, 0x4a, 0x00, 0x00, 0x7c, 0x57, 0x00, 0x00, 0x1d, // ....B...J..|W...
	0x19, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0xe2, 0x02, 0x00, 0x00, 0x61, // .......A.......a
	0x23, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x29, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x65, // #..B...)...=...e
	0x00, 0x00, 0x00, 0x2b, 0x34, 0x00, 0x00, 0x61, 0x23, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x1d, // ...+4..a#.......
	0x00, 0x00, 0x00, 0xd7, 0x32, 0x00, 0x00, 0xf5, 0x42, 0x00, 0x00, 0x2b, 0x34, 0x00, 0x00, 0x41, // ....2...B..+4..A
	0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x97, 0x2f, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0b, // ......../.......
	0x0a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x97, 0x2f, 0x00, 0x00, 0xd7, 0x32, 0x00, 0x00, 0x3d, // ...>..../...2..=
	0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x51, 0x28, 0x00, 0x00, 0xf5, 0x48, 0x00, 0x00, 0x4f, // .......Q(...H..O
	0x00, 0x08, 0x00, 0x18, 0x00, 0x00, 0x00, 0x96, 0x49, 0x00, 0x00, 0x51, 0x28, 0x00, 0x00, 0x51, // ........I..Q(..Q
	0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x41, // (..............A
	0x00, 0x05, 0x00, 0x95, 0x02, 0x00, 0x00, 0x73, 0x5b, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0e, // .......s[.......
	0x0a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x73, 0x5b, 0x00, 0x00, 0x96, 0x49, 0x00, 0x00, 0x3d, // ...>...s[...I..=
	0x00, 0x04, 0x00, 0x29, 0x04, 0x00, 0x00, 0x30, 0x19, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0xfe, // ...)...0........
	0x00, 0x02, 0x00, 0x30, 0x19, 0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00,                         // ...0...8....
};
static const uint8_t vs_imgui_cubemap_dx9[368] =
{
	0x56, 0x53, 0x48, 0x05, 0xe3, 0xc2, 0x5c, 0x65, 0x35, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH....e5....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x08, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // osition.a_normal
	0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x0b, 0x61, // ...a_color0....a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // _texcoord0......
	0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, // ....u_modelViewP
	0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x14, 0x01, 0x00, 0x03, 0xfe, 0xff, 0xfe, // roj.............
	0xff, 0x21, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x00, // .!.CTAB....W....
	0x03, 0xfe, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x50, // ...............P
	0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x40, // ...0...........@
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, // .......u_modelVi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, // ewProj..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, // .......vs_3_0.Mi
	0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, // crosoft (R) HLSL
	0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, //  Shader Compiler
	0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x1f, 0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x80, 0x00, //  10.1...........
	0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x03, // ................
	0x00, 0x00, 0x80, 0x01, 0x00, 0x07, 0xe0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x01, // ................
	0x00, 0xe4, 0xa0, 0x01, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, // .....U..........
	0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, // ................
	0x00, 0x0f, 0x80, 0x02, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, // ................
	0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x80, 0x03, 0x00, 0xe4, 0xa0, 0x01, // ................
	0x00, 0x00, 0x02, 0x01, 0x00, 0x07, 0xe0, 0x00, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, 0x00, // ................
};
static const uint8_t vs_imgui_cubemap_dx11[567] =
{
	0x56, 0x53, 0x48, 0x05, 0xe3, 0xc2, 0x5c, 0x65, 0x35, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH....e5....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x08, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // osition.a_normal
	0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x0b, 0x61, // ...a_color0....a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // _texcoord0......
	0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, // ....u_modelViewP
	0x72, 0x6f, 0x6a, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0xd4, 0x01, 0x44, 0x58, 0x42, 0x43, 0x6e, // roj........DXBCn
	0xf2, 0xe5, 0x72, 0xab, 0xb8, 0x0f, 0x91, 0xad, 0x8f, 0x4c, 0xdf, 0x0e, 0x04, 0x3e, 0x81, 0x01, // ..r......L...>..
	0x00, 0x00, 0x00, 0xd4, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x7c, // ...........,...|
	0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x48, 0x00, 0x00, 0x00, 0x02, // .......ISGNH....
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .......8........
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x07, 0x00, 0x00, 0x3f, // ...............?
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, // ................
	0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x4e, 0x4f, 0x52, 0x4d, 0x41, 0x4c, 0x00, 0x50, 0x4f, // .......NORMAL.PO
	0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x4f, 0x53, 0x47, 0x4e, 0x4c, 0x00, 0x00, 0x00, 0x02, // SITION.OSGNL....
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // .......8........
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x44, // ...............D
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, // ................
	0x00, 0x00, 0x00, 0x07, 0x08, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, // .......SV_POSITI
	0x4f, 0x4e, 0x00, 0x4e, 0x4f, 0x52, 0x4d, 0x41, 0x4c, 0x00, 0xab, 0x53, 0x48, 0x44, 0x52, 0xfc, // ON.NORMAL..SHDR.
	0x00, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, // ...@...?...Y...F
	0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, // . ........._...r
	0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, // ......._...r....
	0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // ...g.... .......
	0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x72, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x68, // ...e...r ......h
	0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x00, // .......8........
	0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, // ...V.......F. ..
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, // .......2........
	0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, // ...F. ..........
	0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, // .......F.......2
	0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, // ...........F. ..
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xa6, 0x1a, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, // ...............F
	0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf2, 0x20, 0x10, 0x00, 0x00, // ............ ...
	0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, // ...F.......F. ..
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x01, // .......6...r ...
	0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, // ...F.......>....
	0x02, 0x02, 0x00, 0x01, 0x00, 0x40, 0x00,                                                       // .....@.
};
static const uint8_t vs_imgui_cubemap_mtl[734] =
{
	0x56, 0x53, 0x48, 0x05, 0xe3, 0xc2, 0x5c, 0x65, 0x35, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH....e5....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x08, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // osition.a_normal
	0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x0b, 0x61, // ...a_color0....a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // _texcoord0......
	0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, // ....u_modelViewP
	0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x80, 0x02, 0x00, 0x00, 0x75, 0x73, 0x69, // roj..........usi
	0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, // ng namespace met
	0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // al;.struct xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, // tlShaderInput {.
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, //   float4 a_norma
	0x6c, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x30, 0x29, // l [[attribute(0)
	0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x61, 0x5f, 0x70, // ]];.  float3 a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, // osition [[attrib
	0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, // ute(1)]];.};.str
	0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, // uct xlatMtlShade
	0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // rOutput {.  floa
	0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, // t4 gl_Position [
	0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, // [position]];.  f
	0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, // loat3 v_normal;.
	0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // };.struct xlatMt
	0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, // lShaderUniform {
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, // .  float4x4 u_mo
	0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, // delViewProj;.};.
	0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, // vertex xlatMtlSh
	0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // aderOutput xlatM
	0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, // tlMain (xlatMtlS
	0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // haderInput _mtl_
	0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, // i [[stage_in]], 
	0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, // constant xlatMtl
	0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, // ShaderUniform& _
	0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, // mtl_u [[buffer(0
	0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, // )]]).{.  xlatMtl
	0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, // ShaderOutput _mt
	0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, // l_o;.  float4 tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // pvar_1 = 0;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, // pvar_1.w = 1.0;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, //   tmpvar_1.xyz =
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, //  _mtl_i.a_positi
	0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, // on;.  _mtl_o.gl_
	0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, // Position = (_mtl
	0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, // _u.u_modelViewPr
	0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, // oj * tmpvar_1);.
	0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, //   _mtl_o.v_norma
	0x6c, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x6e, 0x6f, 0x72, // l = _mtl_i.a_nor
	0x6d, 0x61, 0x6c, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, // mal.xyz;.  retur
	0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,             // n _mtl_o;.}...
};
extern const uint8_t* vs_imgui_cubemap_pssl;
extern const uint32_t vs_imgui_cubemap_pssl_size;
