## csgo-external

An external training software for Counter-Strike: Global Offensive native Linux client.

### Development

1. Install dependencies

    ```shell
    sudo dnf install libxcb libxcb-devel g++ cmake
    ```

2. Clone the repository
    ```shell
    git clone --recursive https://github.com/mystere1337/csgo-external.git
    cd csgo-external
    ```

### Notes

- Doesn't work on GNOME Wayland
- The overlay only works on X.org Desktop Environments