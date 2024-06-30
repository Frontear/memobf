{
  self',
  pkgs
}:
pkgs.mkShell {
  packages = [ self'.packages.default ]
  ++ (with pkgs; [
    man-pages
  ]);
}
