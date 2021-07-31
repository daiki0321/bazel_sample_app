workspace(name = "sample_app")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

new_git_repository(
    name = "googletest",
    build_file = "@//:gmock.BUILD",
    remote = "https://github.com/google/googletest",
    tag = "release-1.10.0",
)

new_local_repository(
    name = "opencv",
    path = "/usr",
    build_file = "opencv.BUILD",
)
