static const uint8_t vs_debugdraw_fill_glsl[382] =
{
	0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH.....1....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, // osition....a_col
	0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x07, // or0......v_view.
	0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, // v_world.........
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, // u_viewProj......
	0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x20, 0x00, 0x1b, 0x01, // .u_model. .. ...
	0x00, 0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, // ..attribute high
	0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, // p vec4 a_indices
	0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, // ;.attribute high
	0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // p vec3 a_positio
	0x6e, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // n;.uniform highp
	0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, //  mat4 u_viewProj
	0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, // ;.uniform mat4 u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, // _model[32];.void
	0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, //  main ().{.  hig
	0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // hp vec4 tmpvar_1
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, // ;.  tmpvar_1.w =
	0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, //  1.0;.  tmpvar_1
	0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // .xyz = a_positio
	0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // n;.  gl_Position
	0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, //  = (u_viewProj *
	0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x69, 0x6e, 0x74, 0x28, 0x61, 0x5f, //  (u_model[int(a_
	0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x78, 0x29, 0x5d, 0x20, 0x2a, 0x20, 0x74, 0x6d, // indices.x)] * tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,             // pvar_1));.}...
};
static const uint8_t vs_debugdraw_fill_spv[2599] =
{
	0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH.....1....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, // osition....a_col
	0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x07, // or0......v_view.
	0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, // v_world.........
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x20, 0x00, 0x0a, 0x75, 0x5f, // u_model. .. ..u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0xc4, 0x09, // viewProj........
	0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x08, 0x00, 0x9a, 0x61, // ....#..........a
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, // ................
	0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, // ......GLSL.std.4
	0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // 50..............
	0x00, 0x00, 0x0f, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, // ..............ma
	0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x48, 0x0c, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x95, 0x15, // in....H.........
	0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, // ................
	0x04, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, // ......main......
	0x04, 0x00, 0xf9, 0x03, 0x00, 0x00, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x00, 0x00, 0x06, 0x00, // ......Output....
	0x06, 0x00, 0xf9, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, // ..........gl_Pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x05, 0x00, 0x06, 0x00, 0xbd, 0x10, 0x00, 0x00, 0x40, 0x6d, // ition.........@m
	0x61, 0x69, 0x6e, 0x28, 0x76, 0x69, 0x34, 0x3b, 0x76, 0x66, 0x33, 0x3b, 0x00, 0x00, 0x05, 0x00, // ain(vi4;vf3;....
	0x05, 0x00, 0x4f, 0x30, 0x00, 0x00, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x00, // ..O0..a_indices.
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xa2, 0x25, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, // .......%..a_posi
	0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xff, 0x10, 0x00, 0x00, 0x6d, 0x6f, // tion..........mo
	0x64, 0x65, 0x6c, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x24, 0x47, // del...........$G
	0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x00, 0x00, // lobal...........
	0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x00, 0x00, 0x06, 0x00, // ..u_viewRect....
	0x06, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, // ..........u_view
	0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x02, 0x00, // Texel...........
	0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x97, 0x0b, // ..u_view........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x00, // ......u_invView.
	0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x75, 0x5f, // ..............u_
	0x70, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x05, 0x00, // proj............
	0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, // ..u_invProj.....
	0x06, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, // ..........u_view
	0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x07, 0x00, // Proj............
	0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, // ..u_invViewProj.
	0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x75, 0x5f, // ..............u_
	0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x09, 0x00, // model...........
	0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x00, 0x06, 0x00, // ..u_modelView...
	0x07, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, // ..........u_mode
	0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, 0x00, 0x06, 0x00, 0x97, 0x0b, // lViewProj.......
	0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, // ......u_alphaRef
	0x34, 0x00, 0x05, 0x00, 0x03, 0x00, 0x42, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, // 4.....B.........
	0x05, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x5f, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x5f, 0x00, // ......_varying_.
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, // .......A..a_indi
	0x63, 0x65, 0x73, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x48, 0x0c, 0x00, 0x00, 0x61, 0x5f, // ces.......H...a_
	0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x2c, 0x3f, // indices.......,?
	0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, // ..a_position....
	0x05, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // ......a_position
	0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0x95, 0x15, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, // ..........@entry
	0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, // PointOutput.gl_P
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xef, 0x47, // osition........G
	0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x9a, 0x16, // ..param.........
	0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xc3, 0x00, // ..param...G.....
	0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, // ......@...H.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, // ......#.......H.
	0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x10, 0x00, // ..........#.....
	0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, // ..H.............
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, // ..H...........#.
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x02, 0x00, // .. ...H.........
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x97, 0x0b, // ..........H.....
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, // ..........H.....
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x48, 0x00, // ......#...`...H.
	0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, // ................
	0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, // ..H.............
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, // ..H...........#.
	0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x04, 0x00, // ......H.........
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x97, 0x0b, // ..........H.....
	0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, // ..........H.....
	0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, // ......#.......H.
	0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, // ................
	0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, // ..H.............
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, // ..H...........#.
	0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x06, 0x00, // .. ...H.........
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x97, 0x0b, // ..........H.....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, // ..........H.....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x48, 0x00, // ......#...`...H.
	0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, // ................
	0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, // ..H.............
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x23, 0x00, // ..H...........#.
	0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x08, 0x00, // ......H.........
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x97, 0x0b, // ..........H.....
	0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, // ..........H.....
	0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, // ......#.......H.
	0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, // ................
	0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, // ..H.............
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, // ..H...........#.
	0x00, 0x00, 0xe0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x0a, 0x00, // ......H.........
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x97, 0x0b, // ..........H.....
	0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x47, 0x00, // ......#... ...G.
	0x03, 0x00, 0x97, 0x0b, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x42, 0x13, // ..........G...B.
	0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x48, 0x0c, // ..".......G...H.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xa6, 0x14, // ..........G.....
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x95, 0x15, // ..........G.....
	0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x08, 0x00, // ................
	0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x02, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x15, 0x00, // ..!.............
	0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x17, 0x00, // ...... .........
	0x04, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, // .............. .
	0x04, 0x00, 0x97, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x16, 0x00, // ................
	0x03, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x18, 0x00, // ...... .........
	0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x95, 0x02, // .......... .....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x1d, 0x00, // ................
	0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0xf9, 0x03, // ................
	0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x21, 0x00, 0x05, 0x00, 0x3f, 0x07, 0x00, 0x00, 0xf9, 0x03, // ......!...?.....
	0x00, 0x00, 0x97, 0x02, 0x00, 0x00, 0x95, 0x02, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9a, 0x02, // .......... .....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0d, 0x00, // ..........+.....
	0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x18, 0x00, 0x04, 0x00, 0x65, 0x00, // .........?....e.
	0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0b, 0x00, // ................
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, // .. .......+.....
	0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0xc3, 0x00, // ..j... .........
	0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x97, 0x0b, // ..e...j.........
	0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, // ..........e...e.
	0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, // ..e...e...e...e.
	0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, // ......e...e.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x51, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x97, 0x0b, // .. ...Q.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x51, 0x02, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x02, 0x00, // ..;...Q...B.....
	0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x23, 0x0a, 0x00, 0x00, 0x08, 0x00, // ..+.......#.....
	0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, // ..+.............
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x89, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0c, 0x00, // .. .............
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xe2, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, // .. ...........e.
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x76, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xf9, 0x03, // .. ...v.........
	0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x00, 0x00, // ..+.............
	0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1d, 0x0a, 0x00, 0x00, 0x06, 0x00, // ..+.............
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x98, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0x00, // .. .............
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x98, 0x02, 0x00, 0x00, 0x48, 0x0c, 0x00, 0x00, 0x01, 0x00, // ..;.......H.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x96, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x18, 0x00, // .. .............
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x96, 0x02, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x01, 0x00, // ..;.............
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1d, 0x00, // .. .............
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x95, 0x15, 0x00, 0x00, 0x03, 0x00, // ..;.............
	0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x00, 0x00, // ..6.............
	0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x53, 0x61, 0x00, 0x00, 0x3b, 0x00, // ..........Sa..;.
	0x04, 0x00, 0x97, 0x02, 0x00, 0x00, 0xef, 0x47, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, // .......G......;.
	0x04, 0x00, 0x95, 0x02, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3d, 0x00, // ..............=.
	0x04, 0x00, 0x1a, 0x00, 0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x48, 0x0c, 0x00, 0x00, 0x3d, 0x00, // .......A..H...=.
	0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x2c, 0x3f, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x3e, 0x00, // ......,?......>.
	0x03, 0x00, 0xef, 0x47, 0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x9a, 0x16, // ...G...A..>.....
	0x00, 0x00, 0x2c, 0x3f, 0x00, 0x00, 0x39, 0x00, 0x06, 0x00, 0xf9, 0x03, 0x00, 0x00, 0x39, 0x19, // ..,?..9.......9.
	0x00, 0x00, 0xbd, 0x10, 0x00, 0x00, 0xef, 0x47, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x51, 0x00, // .......G......Q.
	0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xf8, 0x21, 0x00, 0x00, 0x39, 0x19, 0x00, 0x00, 0x00, 0x00, // .......!..9.....
	0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x95, 0x15, 0x00, 0x00, 0xf8, 0x21, 0x00, 0x00, 0xfd, 0x00, // ..>........!....
	0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0xf9, 0x03, 0x00, 0x00, 0xbd, 0x10, // ..8...6.........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x07, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x97, 0x02, // ......?...7.....
	0x00, 0x00, 0x4f, 0x30, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x95, 0x02, 0x00, 0x00, 0xa2, 0x25, // ..O0..7........%
	0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0xdb, 0x5f, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x76, 0x06, // ......._..;...v.
	0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x18, 0x00, // ..........=.....
	0x00, 0x00, 0xd1, 0x46, 0x00, 0x00, 0xa2, 0x25, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x0d, 0x00, // ...F...%..Q.....
	0x00, 0x00, 0x2c, 0x46, 0x00, 0x00, 0xd1, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, // ..,F...F......Q.
	0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xd3, 0x4f, 0x00, 0x00, 0xd1, 0x46, 0x00, 0x00, 0x01, 0x00, // .......O...F....
	0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xf3, 0x5b, 0x00, 0x00, 0xd1, 0x46, // ..Q........[...F
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x4c, 0x3b, // ......P.......L;
	0x00, 0x00, 0x2c, 0x46, 0x00, 0x00, 0xd3, 0x4f, 0x00, 0x00, 0xf3, 0x5b, 0x00, 0x00, 0x8a, 0x00, // ..,F...O...[....
	0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x89, 0x02, 0x00, 0x00, 0x5a, 0x60, 0x00, 0x00, 0x4f, 0x30, // ..A.......Z`..O0
	0x00, 0x00, 0x0a, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x99, 0x61, // ......=........a
	0x00, 0x00, 0x5a, 0x60, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0xe2, 0x02, 0x00, 0x00, 0xa2, 0x48, // ..Z`..A........H
	0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x23, 0x0a, 0x00, 0x00, 0x99, 0x61, 0x00, 0x00, 0x3d, 0x00, // ..B...#....a..=.
	0x04, 0x00, 0x65, 0x00, 0x00, 0x00, 0xb5, 0x2f, 0x00, 0x00, 0xa2, 0x48, 0x00, 0x00, 0x90, 0x00, // ..e..../...H....
	0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xff, 0x10, 0x00, 0x00, 0x4c, 0x3b, 0x00, 0x00, 0xb5, 0x2f, // ..........L;.../
	0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0xe2, 0x02, 0x00, 0x00, 0xc4, 0x2e, 0x00, 0x00, 0x42, 0x13, // ..A...........B.
	0x00, 0x00, 0x1d, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, 0x00, 0xcc, 0x5e, // ......=...e....^
	0x00, 0x00, 0xc4, 0x2e, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x67, 0x44, // ..............gD
	0x00, 0x00, 0xff, 0x10, 0x00, 0x00, 0xcc, 0x5e, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x9a, 0x02, // .......^..A.....
	0x00, 0x00, 0xee, 0x27, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x3e, 0x00, // ...'..........>.
	0x03, 0x00, 0xee, 0x27, 0x00, 0x00, 0x67, 0x44, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0xf9, 0x03, // ...'..gD..=.....
	0x00, 0x00, 0x5e, 0x5b, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0xfe, 0x00, 0x02, 0x00, 0x5e, 0x5b, // ..^[..........^[
	0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00,                                                       // ..8....
};
static const uint8_t vs_debugdraw_fill_dx9[535] =
{
	0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH.....1....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, // osition....a_col
	0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x07, // or0......v_view.
	0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, // v_world.........
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x80, 0x00, 0x0a, 0x75, 0x5f, // u_model. .....u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x80, 0x00, 0x04, 0x00, 0xb4, 0x01, // viewProj........
	0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0xfe, 0xff, 0x2b, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, // ........+.CTAB..
	0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, // ................
	0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x02, 0x00, // ......x...D.....
	0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5c, 0x00, // ......L.........
	0x00, 0x00, 0x02, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........h.....
	0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, // ..u_model.......
	0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, // .. .......u_view
	0x50, 0x72, 0x6f, 0x6a, 0x00, 0xab, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, // Proj............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, // ......vs_3_0.Mic
	0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, // rosoft (R) HLSL 
	0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, // Shader Compiler 
	0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x84, 0x00, 0x0f, 0xa0, 0x00, 0x00, // 10.1..Q.........
	0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, // .@..............
	0x00, 0x02, 0x02, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, // ................
	0x0f, 0xe0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x84, 0x00, 0x00, 0xa0, 0x00, 0x00, // ................
	0x00, 0x90, 0x2e, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0xb0, 0x00, 0x00, 0x00, 0x80, 0x05, 0x00, // ................
	0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0x55, 0x90, 0x01, 0x20, 0xe4, 0xa0, 0x00, 0x00, // ........U.. ....
	0x00, 0xb0, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x20, 0xe4, 0xa0, 0x00, 0x00, // ........... ....
	0x00, 0xb0, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, // ................
	0x0f, 0x80, 0x02, 0x20, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0xaa, 0x90, 0x00, 0x00, // ... ............
	0xe4, 0x80, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x03, 0x20, // ............... 
	0xe4, 0xa0, 0x00, 0x00, 0x00, 0xb0, 0x05, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, 0x80, 0x00, 0x00, // ................
	0x55, 0x80, 0x81, 0x00, 0xe4, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x01, 0x00, 0x0f, 0x80, 0x80, 0x00, // U...............
	0xe4, 0xa0, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x01, 0x00, // ................
	0x0f, 0x80, 0x82, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xaa, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x04, 0x00, // ................
	0x00, 0x04, 0x00, 0x00, 0x0f, 0xe0, 0x83, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xff, 0x80, 0x01, 0x00, // ................
	0xe4, 0x80, 0xff, 0xff, 0x00, 0x00, 0x00,                                                       // .......
};
static const uint8_t vs_debugdraw_fill_dx11[730] =
{
	0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH.....1....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, // osition....a_col
	0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x07, // or0......v_view.
	0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, // v_world.........
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, // u_viewProj......
	0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x40, 0x00, 0x80, 0x00, 0x70, 0x02, // .u_model. @...p.
	0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x21, 0x99, 0xbc, 0x62, 0x67, 0xb7, 0x95, 0xd6, 0x90, 0x9d, // ..DXBC!..bg.....
	0x96, 0xc0, 0x0e, 0x98, 0x00, 0xf9, 0x01, 0x00, 0x00, 0x00, 0x70, 0x02, 0x00, 0x00, 0x03, 0x00, // ..........p.....
	0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, // ..,...........IS
	0x47, 0x4e, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, // GNP...........8.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x0f, 0x01, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......E.........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x42, 0x4c, // ..............BL
	0x45, 0x4e, 0x44, 0x49, 0x4e, 0x44, 0x49, 0x43, 0x45, 0x53, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, // ENDINDICES.POSIT
	0x49, 0x4f, 0x4e, 0x00, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, // ION...OSGN,.....
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // ...... .........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, // ..............SV
	0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x53, 0x48, 0x44, 0x52, 0xb0, 0x01, // _POSITION.SHDR..
	0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x59, 0x08, 0x00, 0x04, 0x46, 0x8e, // ..@...l...Y...F.
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x12, 0x10, //  ........._.....
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, // ......_...r.....
	0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // ..g.... ........
	0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x07, 0x12, 0x00, // ..h.......).....
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, // ...............@
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, // ......8.........
	0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, // ..V.......F. ...
	0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, // ..............2.
	0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, // ..........F. ...
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x10, // ................
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, // ......F.......2.
	0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, // ..........F. ...
	0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x1a, // ................
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // ......F.........
	0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, // ..........F.....
	0x00, 0x00, 0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0a, 0x00, // ..F. ...........
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, // ......8.........
	0x00, 0x00, 0x56, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, // ..V.......F. ...
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, // ......2.........
	0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, // ..F. ...........
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, // ......F.......2.
	0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, // ..........F. ...
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xa6, 0x0a, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, // ..............F.
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, // ......2.... ....
	0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf6, 0x0f, // ..F. ...........
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, // ......F.......>.
	0x00, 0x01, 0x00, 0x02, 0x0e, 0x00, 0x01, 0x00, 0x40, 0x08,                                     // ........@.
};
static const uint8_t vs_debugdraw_fill_mtl[738] =
{
	0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH.....1....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, // osition....a_col
	0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x07, // or0......v_view.
	0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, // v_world.........
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, // u_viewProj......
	0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x20, 0x00, 0x7f, 0x02, // .u_model. .. ...
	0x00, 0x00, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, // ..using namespac
	0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, // e metal;.struct 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, // xlatMtlShaderInp
	0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x61, 0x5f, // ut {.  float4 a_
	0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, // indices [[attrib
	0x75, 0x74, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // ute(0)]];.  floa
	0x74, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, // t3 a_position [[
	0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, // attribute(1)]];.
	0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // };.struct xlatMt
	0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, // lShaderOutput {.
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, //   float4 gl_Posi
	0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, // tion [[position]
	0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, // ];.};.struct xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, // tMtlShaderUnifor
	0x6d, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, // m {.  float4x4 u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // _viewProj;.  flo
	0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, // at4x4 u_model[32
	0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, // ];.};.vertex xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, // tMtlShaderOutput
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, //  xlatMtlMain (xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, // atMtlShaderInput
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, //  _mtl_i [[stage_
	0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, // in]], constant x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, // latMtlShaderUnif
	0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, // orm& _mtl_u [[bu
	0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, // ffer(0)]]).{.  x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, // latMtlShaderOutp
	0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // ut _mtl_o;.  flo
	0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, // at4 tmpvar_1 = 0
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, // ;.  tmpvar_1.w =
	0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, //  1.0;.  tmpvar_1
	0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, // .xyz = _mtl_i.a_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // position;.  _mtl
	0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, // _o.gl_Position =
	0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, //  (_mtl_u.u_viewP
	0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, // roj * (_mtl_u.u_
	0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x69, 0x6e, 0x74, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, // model[int(_mtl_i
	0x2e, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x78, 0x29, 0x5d, 0x20, 0x2a, // .a_indices.x)] *
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, //  tmpvar_1));.  r
	0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, // eturn _mtl_o;.}.
	0x0a, 0x00,                                                                                     // ..
};
