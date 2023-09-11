{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  nativeBuildInputs = with pkgs; [
    cmake
    qt6.full
    qt6.qttools
    qt6.qtsvg
  ];
  buildInputs = [ pkgs.qt6.qtbase ];
}
