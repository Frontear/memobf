{
  self',
  pkgs
}:
pkgs.mkShell {
  packages = (with pkgs; [
    man-pages
  ]) ++ [ self'.packages.default ];
}
