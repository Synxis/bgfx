static const uint8_t vs_imgui_image_glsl[393] =
{
	0x56, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x35, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH.o.><5....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x08, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // osition.a_normal
	0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x0b, 0x61, // ...a_color0....a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // _texcoord0......
	0x00, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, // ....u_viewProj..
	0x00, 0x00, 0x01, 0x00, 0x30, 0x01, 0x00, 0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, // ....0...attribut
	0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, // e highp vec3 a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, // osition;.attribu
	0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x61, 0x5f, // te highp vec2 a_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, // texcoord0;.varyi
	0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, // ng highp vec2 v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, // texcoord0;.unifo
	0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, // rm highp mat4 u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, // viewProj;.void m
	0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // ain ().{.  highp
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, //  vec4 tmpvar_1;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x77, 0x20, 0x3d, 0x20, //   tmpvar_1.zw = 
	0x76, 0x65, 0x63, 0x32, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, // vec2(0.0, 1.0);.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x20, 0x3d, 0x20, //   tmpvar_1.xy = 
	0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x78, 0x79, 0x3b, 0x0a, 0x20, // a_position.xy;. 
	0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, //  gl_Position = (
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, // u_viewProj * tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // var_1);.  v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // oord0 = a_texcoo
	0x72, 0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                           // rd0;.}...
};
static const uint8_t vs_imgui_image_spv[2875] =
{
	0x56, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x35, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH.o.><5....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x08, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // osition.a_normal
	0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x0b, 0x61, // ...a_color0....a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // _texcoord0......
	0x00, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, // ....u_viewProj..
	0x00, 0x00, 0x01, 0x00, 0xe4, 0x0a, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, // ........#.......
	0x08, 0x00, 0x37, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, // ..7b............
	0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, // ..........GLSL.s
	0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, // td.450..........
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x16, // ................
	0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x95, 0x0e, // ..main..........
	0x00, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0xcd, 0x0f, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, // ................
	0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, // ..............ma
	0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x4f, 0x75, // in............Ou
	0x74, 0x70, 0x75, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x00, 0x00, // tput............
	0x00, 0x00, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x06, 0x00, // ..gl_Position...
	0x06, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // ..........v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0xbc, 0x0e, 0x00, 0x00, 0x40, 0x6d, // oord0.........@m
	0x61, 0x69, 0x6e, 0x28, 0x76, 0x66, 0x33, 0x3b, 0x76, 0x66, 0x32, 0x3b, 0x00, 0x00, 0x05, 0x00, // ain(vf3;vf2;....
	0x05, 0x00, 0xa2, 0x3c, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // ...<..a_position
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xc4, 0x1d, 0x00, 0x00, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, // ..........a_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x05, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x5f, 0x76, // oord0........._v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x5f, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x3b, 0x06, // arying_.......;.
	0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, // ..$Global.....;.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, // ......u_viewRect
	0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, // ......;.......u_
	0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0x3b, 0x06, // viewTexel.....;.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, 0x00, // ......u_view....
	0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, // ..;.......u_invV
	0x69, 0x65, 0x77, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x04, 0x00, // iew.......;.....
	0x00, 0x00, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, // ..u_proj......;.
	0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, // ......u_invProj.
	0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, 0x5f, // ......;.......u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x3b, 0x06, // viewProj......;.
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, // ......u_invViewP
	0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x08, 0x00, // roj.......;.....
	0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, // ..u_model.....;.
	0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, // ......u_modelVie
	0x77, 0x00, 0x06, 0x00, 0x07, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x75, 0x5f, // w.....;.......u_
	0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, 0x00, // modelViewProj...
	0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, // ..;.......u_alph
	0x61, 0x52, 0x65, 0x66, 0x34, 0x00, 0x05, 0x00, 0x03, 0x00, 0x42, 0x13, 0x00, 0x00, 0x00, 0x00, // aRef4.....B.....
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, // .......A..a_posi
	0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x61, 0x5f, // tion..........a_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x2c, 0x3f, // position......,?
	0x00, 0x00, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, // ..a_texcoord0...
	0x05, 0x00, 0x95, 0x0e, 0x00, 0x00, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // ......a_texcoord
	0x30, 0x00, 0x05, 0x00, 0x05, 0x00, 0x08, 0x10, 0x00, 0x00, 0x66, 0x6c, 0x61, 0x74, 0x74, 0x65, // 0.........flatte
	0x6e, 0x54, 0x65, 0x6d, 0x70, 0x00, 0x05, 0x00, 0x04, 0x00, 0xab, 0x55, 0x00, 0x00, 0x70, 0x61, // nTemp......U..pa
	0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x70, 0x61, // ram...........pa
	0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0x40, 0x65, // ram...........@e
	0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, // ntryPointOutput_
	0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, // gl_Position.....
	0x04, 0x00, 0xe5, 0x03, 0x00, 0x00, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x00, 0x00, 0x06, 0x00, // ......Output....
	0x06, 0x00, 0xe5, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // ..........v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x07, 0x00, 0xcd, 0x0f, 0x00, 0x00, 0x40, 0x65, // oord0.........@e
	0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x00, // ntryPointOutput.
	0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x94, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x40, 0x00, // ..G...........@.
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, // ..H...;.......#.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x01, 0x00, // ......H...;.....
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, // ..#.......H...;.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, // ..........H...;.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x48, 0x00, // ......#... ...H.
	0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, // ..;.............
	0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, // ..H...;.........
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x23, 0x00, // ..H...;.......#.
	0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x03, 0x00, // ..`...H...;.....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, // ..........H...;.
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, // ..........H...;.
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x48, 0x00, // ......#.......H.
	0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, // ..;.............
	0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, // ..H...;.........
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x23, 0x00, // ..H...;.......#.
	0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x05, 0x00, // ......H...;.....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, // ..........H...;.
	0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, // ..........H...;.
	0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x48, 0x00, // ......#... ...H.
	0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, // ..;.............
	0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, // ..H...;.........
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x23, 0x00, // ..H...;.......#.
	0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x07, 0x00, // ..`...H...;.....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, // ..........H...;.
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, // ..........H...;.
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x48, 0x00, // ......#.......H.
	0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, // ..;.............
	0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, // ..H...;.........
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x23, 0x00, // ..H...;.......#.
	0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x09, 0x00, // ......H...;.....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, // ..........H...;.
	0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, // ..........H...;.
	0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, 0x00, 0x48, 0x00, // ......#.......H.
	0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, // ..;.............
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x23, 0x00, // ..H...;.......#.
	0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x02, 0x00, // .. ...G...;.....
	0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x42, 0x13, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, // ..G...B...".....
	0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, // ..G.............
	0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x95, 0x0e, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, // ..G.............
	0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, // ..G.............
	0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xcd, 0x0f, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, // ..G.............
	0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x02, 0x05, // ..........!.....
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x20, 0x00, // .............. .
	0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x95, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x18, 0x00, // .. .............
	0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x90, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x13, 0x00, // .. .............
	0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x04, 0x00, // ................
	0x00, 0x00, 0x1e, 0x00, 0x04, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x13, 0x00, // ................
	0x00, 0x00, 0x21, 0x00, 0x05, 0x00, 0x67, 0x07, 0x00, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x95, 0x02, // ..!...g.........
	0x00, 0x00, 0x90, 0x02, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x97, 0x06, 0x00, 0x00, 0x07, 0x00, // ...... .........
	0x00, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x20, 0x00, // .............. .
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0e, 0x0a, // ......+.........
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0c, 0x0a, // ......+.........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x05, 0x00, 0x13, 0x00, 0x00, 0x00, 0x1f, 0x07, // ......,.........
	0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, // ..........+.....
	0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0d, 0x00, // ..........+.....
	0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x18, 0x00, 0x04, 0x00, 0x65, 0x00, // .........?....e.
	0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0b, 0x00, // ................
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, // .. .......+.....
	0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x94, 0x02, // ..j... .........
	0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x3b, 0x06, // ..e...j.......;.
	0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, // ..........e...e.
	0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, // ..e...e...e...e.
	0x00, 0x00, 0x94, 0x02, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, // ......e...e.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xb8, 0x08, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x3b, 0x06, // .. ...........;.
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0xb8, 0x08, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x02, 0x00, // ..;.......B.....
	0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1d, 0x0a, 0x00, 0x00, 0x06, 0x00, // ..+.............
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xe2, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, // .. ...........e.
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x1d, 0x00, // .. .............
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x96, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x18, 0x00, // .. .............
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x96, 0x02, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x01, 0x00, // ..;.............
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x91, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x13, 0x00, // .. .............
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x91, 0x02, 0x00, 0x00, 0x95, 0x0e, 0x00, 0x00, 0x01, 0x00, // ..;.............
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1d, 0x00, // .. .............
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0x03, 0x00, // ..;.............
	0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0xe5, 0x03, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x20, 0x00, // .............. .
	0x04, 0x00, 0x62, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xe5, 0x03, 0x00, 0x00, 0x3b, 0x00, // ..b...........;.
	0x04, 0x00, 0x62, 0x06, 0x00, 0x00, 0xcd, 0x0f, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, // ..b........... .
	0x04, 0x00, 0x92, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x36, 0x00, // ..............6.
	0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, // ................
	0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x53, 0x61, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x97, 0x06, // ......Sa..;.....
	0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x95, 0x02, // ..........;.....
	0x00, 0x00, 0xab, 0x55, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x90, 0x02, // ...U......;.....
	0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x18, 0x00, // ..........=.....
	0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, 0x00, // ...A......=.....
	0x00, 0x00, 0x2c, 0x3f, 0x00, 0x00, 0x95, 0x0e, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xab, 0x55, // ..,?......>....U
	0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x2c, 0x3f, // ...A..>.......,?
	0x00, 0x00, 0x39, 0x00, 0x06, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x49, 0x26, 0x00, 0x00, 0xbc, 0x0e, // ..9.......I&....
	0x00, 0x00, 0xab, 0x55, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x08, 0x10, // ...U......>.....
	0x00, 0x00, 0x49, 0x26, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x54, 0x34, // ..I&..A.......T4
	0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, // ..........=.....
	0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x54, 0x34, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xd8, 0x0c, // ......T4..>.....
	0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x90, 0x02, 0x00, 0x00, 0x27, 0x41, // ......A.......'A
	0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, 0x00, // ..........=.....
	0x00, 0x00, 0xdf, 0x1c, 0x00, 0x00, 0x27, 0x41, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x92, 0x02, // ......'A..A.....
	0x00, 0x00, 0x01, 0x5c, 0x00, 0x00, 0xcd, 0x0f, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x3e, 0x00, // ..............>.
	0x03, 0x00, 0x01, 0x5c, 0x00, 0x00, 0xdf, 0x1c, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, // ..............8.
	0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x1a, 0x04, 0x00, 0x00, 0xbc, 0x0e, 0x00, 0x00, 0x00, 0x00, // ..6.............
	0x00, 0x00, 0x67, 0x07, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x95, 0x02, 0x00, 0x00, 0xa2, 0x3c, // ..g...7........<
	0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x90, 0x02, 0x00, 0x00, 0xc4, 0x1d, 0x00, 0x00, 0xf8, 0x00, // ..7.............
	0x02, 0x00, 0x5f, 0x57, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x97, 0x06, 0x00, 0x00, 0x0f, 0x12, // .._W..;.........
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x90, 0x02, 0x00, 0x00, 0x18, 0x2d, // ......A........-
	0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x18, 0x2d, // ..........>....-
	0x00, 0x00, 0x1f, 0x07, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x10, 0x19, // ......=.........
	0x00, 0x00, 0xa2, 0x3c, 0x00, 0x00, 0x4f, 0x00, 0x07, 0x00, 0x13, 0x00, 0x00, 0x00, 0xbe, 0x2f, // ...<..O......../
	0x00, 0x00, 0x10, 0x19, 0x00, 0x00, 0x10, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x36, 0x62, 0x00, 0x00, 0xbe, 0x2f, // ..Q.......6b.../
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x98, 0x1b, // ......Q.........
	0x00, 0x00, 0xbe, 0x2f, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x1d, 0x00, // .../......P.....
	0x00, 0x00, 0x84, 0x32, 0x00, 0x00, 0x36, 0x62, 0x00, 0x00, 0x98, 0x1b, 0x00, 0x00, 0x0c, 0x0a, // ...2..6b........
	0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0xe2, 0x02, 0x00, 0x00, 0x29, 0x2c, // ......A.......),
	0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x1d, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x65, 0x00, // ..B.......=...e.
	0x00, 0x00, 0xf3, 0x3c, 0x00, 0x00, 0x29, 0x2c, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x1d, 0x00, // ...<..),........
	0x00, 0x00, 0x9f, 0x3b, 0x00, 0x00, 0x84, 0x32, 0x00, 0x00, 0xf3, 0x3c, 0x00, 0x00, 0x41, 0x00, // ...;...2...<..A.
	0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x5f, 0x38, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0b, 0x0a, // ......_8........
	0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x5f, 0x38, 0x00, 0x00, 0x9f, 0x3b, 0x00, 0x00, 0x3d, 0x00, // ..>..._8...;..=.
	0x04, 0x00, 0x13, 0x00, 0x00, 0x00, 0x1d, 0x21, 0x00, 0x00, 0xc4, 0x1d, 0x00, 0x00, 0x41, 0x00, // .......!......A.
	0x05, 0x00, 0x90, 0x02, 0x00, 0x00, 0x2d, 0x3c, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0e, 0x0a, // ......-<........
	0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x2d, 0x3c, 0x00, 0x00, 0x1d, 0x21, 0x00, 0x00, 0x3d, 0x00, // ..>...-<...!..=.
	0x04, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x47, 0x3a, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0xfe, 0x00, // ......G:........
	0x02, 0x00, 0x47, 0x3a, 0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00,                               // ..G:..8....
};
static const uint8_t vs_imgui_image_dx9[339] =
{
	0x56, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x35, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH.o.><5....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x08, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // osition.a_normal
	0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x0b, 0x61, // ...a_color0....a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // _texcoord0......
	0x00, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, // ....u_viewProj..
	0x00, 0x00, 0x04, 0x00, 0xfc, 0x00, 0x00, 0x03, 0xfe, 0xff, 0xfe, 0xff, 0x20, 0x00, 0x43, 0x54, // ............ .CT
	0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x01, 0x00, // AB....S.........
	0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, // ..........L...0.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........<.....
	0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0xab, 0x03, 0x00, // ..u_viewProj....
	0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x73, // ..............vs
	0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, // _3_0.Microsoft (
	0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, // R) HLSL Shader C
	0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x1f, 0x00, // ompiler 10.1....
	0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, // ................
	0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, // ................
	0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x03, 0xe0, 0x05, 0x00, // ................
	0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x55, 0x90, 0x04, 0x00, // ............U...
	0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, // ................
	0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x80, 0x03, 0x00, // ................
	0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x03, 0xe0, 0x01, 0x00, 0xe4, 0x90, 0xff, 0xff, // ................
	0x00, 0x00, 0x00,                                                                               // ...
};
static const uint8_t vs_imgui_image_dx11[530] =
{
	0x56, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x35, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH.o.><5....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x08, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // osition.a_normal
	0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x0b, 0x61, // ...a_color0....a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // _texcoord0......
	0x00, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, // ....u_viewProj..
	0x00, 0x00, 0x04, 0x00, 0xb4, 0x01, 0x44, 0x58, 0x42, 0x43, 0x62, 0x0c, 0x7d, 0x32, 0x98, 0x4b, // ......DXBCb.}2.K
	0xbb, 0x29, 0xce, 0xaa, 0xb2, 0xca, 0x5d, 0xc9, 0x55, 0xf0, 0x01, 0x00, 0x00, 0x00, 0xb4, 0x01, // .)....].U.......
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xd8, 0x00, // ......,.........
	0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x4c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, // ..ISGNL.........
	0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // ..8.............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x03, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........A.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, // ................
	0x00, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, // ..POSITION.TEXCO
	0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, // ORD...OSGNP.....
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // ......8.........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x44, 0x00, // ..............D.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, // ......SV_POSITIO
	0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x53, 0x48, // N.TEXCOORD....SH
	0x44, 0x52, 0xd4, 0x00, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x35, 0x00, 0x00, 0x00, 0x59, 0x00, // DR....@...5...Y.
	0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x5f, 0x00, // ..F. ........._.
	0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x32, 0x10, // ..2......._...2.
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, // ......g.... ....
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, 0x01, 0x00, // ......e...2 ....
	0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, // ..h.......8.....
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, // ......V.......F.
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, //  .........2.....
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......F. .......
	0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, // ..........F.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, // ....... ......F.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // ......F. .......
	0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x32, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x10, // ..6...2 ......F.
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x01, 0x00, 0x10, 0x00, // ......>.........
	0x40, 0x00,                                                                                     // @.
};
static const uint8_t vs_imgui_image_mtl[743] =
{
	0x56, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x35, 0x00, 0x00, 0x00, 0x0a, 0x61, 0x5f, 0x70, // VSH.o.><5....a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x08, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // osition.a_normal
	0x00, 0x00, 0x08, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x0b, 0x61, // ...a_color0....a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // _texcoord0......
	0x00, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, // ....u_viewProj..
	0x00, 0x00, 0x01, 0x00, 0x8e, 0x02, 0x00, 0x00, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, // ........using na
	0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, // mespace metal;.s
	0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, // truct xlatMtlSha
	0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // derInput {.  flo
	0x61, 0x74, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, // at3 a_position [
	0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, // [attribute(0)]];
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, // .  float2 a_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, // oord0 [[attribut
	0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // e(1)]];.};.struc
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, // t xlatMtlShaderO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // utput {.  float4
	0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, //  gl_Position [[p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // osition]];.  flo
	0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, // at2 v_texcoord0;
	0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // .};.struct xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // tlShaderUniform 
	0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x76, // {.  float4x4 u_v
	0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x76, 0x65, 0x72, 0x74, // iewProj;.};.vert
	0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, // ex xlatMtlShader
	0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, // Output xlatMtlMa
	0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, // in (xlatMtlShade
	0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, // rInput _mtl_i [[
	0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, // stage_in]], cons
	0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, // tant xlatMtlShad
	0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // erUniform& _mtl_
	0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, // u [[buffer(0)]])
	0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, // .{.  xlatMtlShad
	0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, // erOutput _mtl_o;
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // .  float4 tmpvar
	0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // _1 = 0;.  tmpvar
	0x5f, 0x31, 0x2e, 0x7a, 0x77, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x30, // _1.zw = float2(0
	0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // .0, 1.0);.  tmpv
	0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, // ar_1.xy = _mtl_i
	0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x78, 0x79, 0x3b, 0x0a, // .a_position.xy;.
	0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, //   _mtl_o.gl_Posi
	0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, // tion = (_mtl_u.u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // _viewProj * tmpv
	0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, // ar_1);.  _mtl_o.
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x5f, 0x6d, // v_texcoord0 = _m
	0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // tl_i.a_texcoord0
	0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // ;.  return _mtl_
	0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                       // o;.}...
};
extern const uint8_t* vs_imgui_image_pssl;
extern const uint32_t vs_imgui_image_pssl_size;
