{
  self',
  mkShell,
  man-pages,
}:
mkShell {
  packages = [
    self'.packages.default
    
    man-pages
  ];
}
