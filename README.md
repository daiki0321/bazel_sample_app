# bazel_sample_app
This is sample code for Bazel build with OpenCV and gtest.

### Install Bazel
~~~
sudo apt install apt-transport-https curl gnupg
curl -fsSL https://bazel.build/bazel-release.pub.gpg | gpg --dearmor > bazel.gpg
sudo mv bazel.gpg /etc/apt/trusted.gpg.d/
echo "deb [arch=amd64] https://storage.googleapis.com/bazel-apt stable jdk1.8" | sudo tee /etc/apt/sources.list.d/bazel.list
sudo apt update && sudo apt install bazel
~~~

### Install OpenCV
~~~
# Install OpenCV
sudo apt-get install -y libopencv-dev
~~~

### How to execute
~~~
# Build & Execute Main
bazel build sample_app:sample_app.bin
./bazel-bin/sample_app/sample_app.bin

# Build & Execute gtest
bazel run sample_app/test:test_sample_app

~~~