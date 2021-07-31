cc_binary(
    name = "sample_app.bin",
    srcs = ["sample_main.cpp"],
    deps = ["//sample_app/lib:lib_sample_app",
	    "@opencv//:opencv"],
    defines = ["ENABLE_DEBUG"],
    copts = ["-Isample_app/lib/",
	     "-fPIC", "-g"],
    data = ["//test_data:sample_app.png"],
)

